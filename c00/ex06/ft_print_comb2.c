/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossatt <srossatt@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:30:46 by srossatt          #+#    #+#             */
/*   Updated: 2022/10/25 11:02:40 by srossatt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = '0';
	while (a <= 98)
	{
		b = '1';
		while (b <= 99)
		{
			if (a < b)
			{
				ft_putchar ((a / 10 % 10) + '0');
				ft_putchar ((a % 10) + '0');
				ft_putchar (' ');
				ft_putchar ((b / 10 % 10) + '0');
				ft_putchar ((b % 10) + '0');
				if (a != 98)
					ft_putchar (',');
				ft_putchar (' ');
			}
			b++;
		}
		a++;
	}
}