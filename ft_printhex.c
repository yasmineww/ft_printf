/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:02:17 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/21 23:02:21 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex(unsigned int n, int *size)
{
	char str[] = "0123456789abcdef";

	if (n >= 16)
	{
		ft_printhex((n / 16), size);
		ft_printhex((n % 16), size);
	}
	else if (n < 16)
	{
		ft_putchar(str[n], size);
	}
}
// int main (void)
// {
// 	int size = 0;
// 	ft_printhex(-1, &size);
// }