/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 17:12:10 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/25 21:23:19 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_helper(const char *format, int *size, va_list ap)
{
	if (*format == 'd' || *format == 'i')
		ft_putnbr(va_arg(ap, int), size);
	else if (*format == 'c')
		ft_putchar(va_arg(ap, int), size);//int instead of char why
	else if (*format == 's')
		ft_putstr(va_arg(ap, char *), size);
	else if (*format == 'p')
	{
		ft_putstr("0x", size);
		ft_printadd(va_arg(ap, unsigned long), size);
	}
	else if (*format == 'u')
		ft_unsigned(va_arg(ap, unsigned int), size);
	else if (*format == 'x')
		ft_printhex(va_arg(ap, unsigned int), size);
	else if (*format == 'X')
		ft_printhexup(va_arg(ap, unsigned int), size);
	else
		ft_putchar(*format, size);
}

int	ft_printf(const char *format, ...)
{
	int		size;
	va_list	ap;

	va_start(ap, format);
	size = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
				break ;
			ft_helper(format, &size, ap);
		}
		else
		{
			write(1, format, 1);
			size++;
		}
		format++;
	}
	va_end(ap);
	return (size);
}