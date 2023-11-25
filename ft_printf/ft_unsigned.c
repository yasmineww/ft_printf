/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:28:47 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/25 21:22:19 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned(unsigned int n, int *size)
{
	if (n > 9)
	{
		ft_unsigned((n / 10), size);
		ft_unsigned((n % 10), size);
	}
	else
	{
		ft_putchar((n + '0'), size);
	}
}