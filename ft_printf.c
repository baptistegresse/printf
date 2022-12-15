/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgresse <bgresse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 00:43:53 by gresse            #+#    #+#             */
/*   Updated: 2022/11/23 11:58:39 by bgresse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		ret;

	ret = 0;
	i = 0;
	if (write(1, 0, 0) != 0)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1])
		{
			ft_format_eval(format, &args, i + 1, &ret);
			i += 2;
		}
		else
			ft_putchar(format[i++], &ret);
	}
	va_end(args);
	return (ret);
}
