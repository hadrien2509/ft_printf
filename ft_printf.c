/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:06:34 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/30 20:38:38 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_checkformat(const char c, va_list ap, int length)
{
	if (c == 'c')
		length += ft_printchar(va_arg(ap, int));
	if (c == 's')
		length += ft_printstr(va_arg(ap, char *));
	if (c == 'd' || c == 'i')
		length += ft_printnbr(va_arg(ap, int), "0123456789", 10);
	if (c == 'u')
		length += ft_printunbr(va_arg(ap, unsigned int), "0123456789", 10);
	if (c == 'x')
		length += ft_printnbr(va_arg(ap, unsigned int), "0123456789abcdef", 16);
	if (c == 'X')
		length += ft_printnbr(va_arg(ap, unsigned int), "0123456789ABCDEF", 16);
	if (c == 'p')
	{
		length += write(1, "0x", 2);
		length += ft_printptr(va_arg(ap, unsigned long int));
	}
	if (c == '%')
		length += ft_printchar('%');
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	size_t		i;
	int			length;

	i = 0;
	length = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{	
			i++;
			length = ft_checkformat(str[i], ap, length);
		}
		else
			length += write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (length);
}
