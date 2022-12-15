/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgresse <bgresse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:11:56 by gresse            #+#    #+#             */
/*   Updated: 2022/11/18 16:49:59 by bgresse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_base(unsigned int n, int *ret, int choice_base)
{
	char		*base;
	size_t		base_len;

	base_len = 0;
	if (choice_base == 0)
		base = "0123456789";
	if (choice_base == 1)
		base = "0123456789abcdef";
	if (choice_base == 2)
		base = "0123456789ABCDEF";
	while (base[base_len])
		base_len++;
	if (n >= base_len)
	{
		ft_putnbr_base(n / base_len, ret, choice_base);
	}
	ft_putchar(base[n % base_len], &*ret);
}
