/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymakhlou <ymakhlou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:39:01 by ymakhlou          #+#    #+#             */
/*   Updated: 2023/11/21 18:14:02 by ymakhlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(int c, int *size);
void	ft_putnbr(int n, int *size);
void	ft_putstr(char *s, int *size);
void	ft_unsigned(unsigned int n, int *size);
void	ft_printhex(unsigned int n, int *size);
void	ft_printadd(unsigned long n, int *size);
void	ft_printhexup(unsigned int n, int *size);

#endif