/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskytta <pskytta@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:11:26 by pskytta           #+#    #+#             */
/*   Updated: 2021/11/09 10:55:37 by pskytta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	display_file(char *filename)
{
	int		file;
	char	some;

	file = open(filename, O_RDONLY);
	if (file < 0)
		return ;
	while (read(file, &some, 1))
		write(1, &some, 1);
	close(file);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
		display_file(argv[1]);
	return (0);
}
