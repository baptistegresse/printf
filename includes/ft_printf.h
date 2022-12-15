/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgresse <bgresse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 00:41:24 by gresse            #+#    #+#             */
/*   Updated: 2022/11/18 16:49:38 by bgresse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

# define INT_MIN -2147483648

int		ft_printf(const char *format, ...);

void	ft_format_eval(const char *format, va_list *args, int i, int *ret);

void	ft_putnbr_base(unsigned int n, int *ret, int choice_base);
void	ft_putadress(unsigned long n, int *ret);
void	ft_putchar(int c, int *ret);
void	ft_putstr(char *s, int *ret);
void	ft_putnbr(int n, int *ret);

#endif
