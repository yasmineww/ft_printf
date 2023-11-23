/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:02:37 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/21 23:02:50 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhexup(unsigned int n, int *size)
{
	char str[] = "0123456789ABCDEF";

	if (n >= 16)
	{
		ft_printhexup((n / 16), size);
		ft_printhexup((n % 16), size);
	}
	else if (n < 16)
	{
		ft_putchar(str[n], size);
	}	
}
// int main (void)
// {
// 	int size = 5;
// 	ft_printhexup(123, &size);
// }