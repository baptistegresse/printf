/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgresse <bgresse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:11:12 by gresse            #+#    #+#             */
/*   Updated: 2022/11/18 16:49:53 by bgresse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putadress(unsigned long n, int *ret)
{
	char	*base;
	size_t	base_len;

	base_len = 16;
	base = "0123456789abcdef";
	if (n >= base_len)
	{
		ft_putadress(n / base_len, ret);
	}
	ft_putchar(base[n % base_len], &*ret);
}
