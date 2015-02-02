/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorfan <amorfan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/25 15:08:23 by amorfan           #+#    #+#             */
/*   Updated: 2015/01/26 15:29:19 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "libft.h"

void	ft_choice(const char *format, va_list list, int i, int *count)
{
	if (format[i] == 'd' || format[i] == 'i')
		ft_putnbr_count(va_arg(list, int), count);
	if (format[i] == 's')
		ft_putstr_count(va_arg(list, char *), count);
	if (format[i] == 'c')
		ft_putchar_count(va_arg(list, int), count);
	if (format[i] == 'u')
		ft_putnbr_count(va_arg(list, unsigned int), count);
	if (format[i] == 'o')
		ft_put_octal(va_arg(list, unsigned int), count);
	if (format[i] == '%')
		ft_putchar_count('%', count);
}

int		ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ft_choice(format, list, i, &count);
		}
		else
			ft_putchar_count(format[i], &count);
		i++;
	}
	va_end(list);
	return (count);
}
