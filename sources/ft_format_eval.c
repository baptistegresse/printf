/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_eval.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgresse <bgresse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:09:59 by gresse            #+#    #+#             */
/*   Updated: 2022/11/18 19:29:30 by bgresse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_format_eval(const char *format, va_list *args, int i, int *ret)
{
	if (format[i] == 's')
		ft_putstr(va_arg(*args, char *), &*ret);
	else if (format[i] == 'c')
		ft_putchar(va_arg(*args, int), &*ret);
	else if (format[i] == 'p')
	{
		ft_putstr("0x", &*ret);
		ft_putadress(va_arg(*args, unsigned long), &*ret);
	}	
	else if (format[i] == 'd')
		ft_putnbr(va_arg(*args, int), &*ret);
	else if (format[i] == 'i')
		ft_putnbr(va_arg(*args, int), &*ret);
	else if (format[i] == 'u')
		ft_putnbr_base(va_arg(*args, unsigned int), &*ret, 0);
	else if (format[i] == 'x')
		ft_putnbr_base(va_arg(*args, unsigned int), &*ret, 1);
	else if (format[i] == 'X')
		ft_putnbr_base(va_arg(*args, unsigned int), &*ret, 2);
	else if (format[i] == '%')
		ft_putchar('%', &*ret);
}
