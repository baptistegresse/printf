/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgresse <bgresse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:08:44 by gresse            #+#    #+#             */
/*   Updated: 2022/11/18 16:50:02 by bgresse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr(int n, int *ret)
{
	if (n == INT_MIN)
	{
		ft_putstr("-2147483648", &*ret);
		return ;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0', &*ret);
	}
	if (n < 0)
	{
		ft_putchar('-', &*ret);
		n = n * -1;
		ft_putnbr(n, ret);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, ret);
		ft_putnbr(n % 10, ret);
	}
}
