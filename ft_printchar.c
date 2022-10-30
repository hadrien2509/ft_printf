/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:22:02 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/30 20:38:22 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_printstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int nbr, char *base, int baselen)
{
	int				nbrlen;
	unsigned int	unbr;

	nbrlen = 0;
	if (nbr < 0)
	{	
		unbr = -nbr;
		nbrlen += write(1, "-", 1);
	}
	else
		unbr = nbr;
	if (unbr > 9)
		nbrlen += ft_printnbr(unbr / baselen, base, baselen);
	nbrlen += write(1, &base[unbr % baselen], 1);
	return (nbrlen);
}

int	ft_printunbr(unsigned int unbr, char *base, int baselen)
{
	int				nbrlen;

	nbrlen = 0;
	if (unbr > 9)
		nbrlen += ft_printunbr(unbr / baselen, base, baselen);
	nbrlen += write(1, &base[unbr % baselen], 1);
	return (nbrlen);
}

int	ft_printptr(unsigned long int nbr)
{
	int				nbrlen;

	nbrlen = 0;
	if (nbr > 9)
		nbrlen += ft_printptr(nbr / 16);
	nbrlen += write(1, &"0123456789abcdef"[nbr % 16], 1);
	return (nbrlen);
}
