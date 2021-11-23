/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pskytta <pskytta@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:37:07 by pskytta           #+#    #+#             */
/*   Updated: 2021/11/09 11:10:31 by pskytta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **av, int i)
{
	char	*tmp;

	tmp = av[i];
	av[i] = av [i + 1];
	av[i + 1] = tmp;
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		if (argc > 2)
		{
			i = 0;
			while (++i < argc - 1)
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					ft_swap(argv, i);
					i = 0;
				}
			}
		}
		i = 0;
		while (++i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
		}
	}
	return (0);
}
