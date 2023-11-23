/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:39:39 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/23 18:39:41 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printadd(unsigned long *n, int *size)
{
	char	*str;

	str = "0123456789abcdef";
	if (n >= 16)
	{
		ft_printadd((n / 16), size);
		ft_printadd((n % 16), size);
	}
	else if (n < 16)
	{
		ft_putchar(str[n], size);
	}
}
