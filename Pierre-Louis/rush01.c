/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pquintin <pquintin@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 11:52:36 by pquintin          #+#    #+#             */
/*   Updated: 2026/07/04 18:25:22 by pquintin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_space(int space, char x)
{
	if (space == 1)
	{
		ft_putchar('*');
	}
	if (space > 1 && space < x)
	{
		ft_putchar(' ');
	}
	if (space == x)
	{
		write(1, "*\n", 2);
	}
}

void	ft_first_x_line(int x)
{
	int	i;

	i = 0;
	while (i <= x)
	{
		i++;
		if (i == 1)
		{
			ft_putchar('/');
		}
		if (i == x - 1)
		{
			ft_putchar(92);
			ft_putchar('\n');
			return ;
		}
		else
		{
			ft_putchar('*');
		}
	}
}

void	ft_y_line(int y, int x)
{
	int	n;
	int	space;

	n = 1;
	y = y - 2;
	while (n <= y)
	{
		n++;
		space = 0;
		while (space < x)
		{
			space ++;
			ft_print_space (space, x);
		}
	}
}

void	ft_last_x_line(int x)
{
	int	l;

	l = 0;
	while (l <= x)
	{
		l++;
		if (l == 1)
		{
			ft_putchar(92);
		}
		if (l == x - 1)
		{
			ft_putchar('/');
			ft_putchar('\n');
			return ;
		}
		else
		{
			ft_putchar('*');
		}
	}
}

int	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return (1);
	}
	if (x > 212)
	{
		return (1);
	}
	ft_first_x_line(x);
	ft_y_line(y, x);
	ft_last_x_line(x);
	return (0);
}
