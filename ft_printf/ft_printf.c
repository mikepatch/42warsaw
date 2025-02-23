/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mike-priv <mike-priv@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 21:35:07 by mike-priv         #+#    #+#             */
/*   Updated: 2025/02/08 21:35:08 by mike-priv        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char specifier, va_list *args)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (specifier == 'p')
		return (ft_putptr(va_arg(*args, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (specifier == 'u')
		return (ft_putunbr(va_arg(*args, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), specifier));
	else if (specifier == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += handle_format(format[i], &args);
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
