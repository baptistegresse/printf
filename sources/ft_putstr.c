/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgresse <bgresse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 02:12:33 by gresse            #+#    #+#             */
/*   Updated: 2022/11/18 16:50:05 by bgresse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putstr(char *s, int *ret)
{
	int		i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)", &*ret);
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar(s[i], &*ret);
			i++;
	}
}
