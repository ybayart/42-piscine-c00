/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 23:54:27 by ybayart           #+#    #+#             */
/*   Updated: 2019/07/30 23:54:30 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_multiple(char c1, char c2, char c3)
{
	ft_putchar(c1 + 48);
	ft_putchar(c2 + 48);
	ft_putchar(c3 + 48);
	if (c1 != 7 || c2 != 8 || c3 != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int i1;
	int i2;
	int i3;

	i1 = 0;
	while (i1 <= 7)
	{
		i2 = i1 + 1;
		while (i2 <= 8)
		{
			i3 = i2 + 1;
			while (i3 <= 9)
			{
				ft_putchar_multiple(i1, i2, i3);
				i3++;
			}
			i2++;
		}
		i1++;
	}
}
