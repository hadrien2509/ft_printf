/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:44:44 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/30 20:18:30 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	const char		chartest[] = "Hadrien";
	int				nbrtest = -2147483648;
	unsigned int	unbrtest = 2147483653;
	int				ptrtest[5];

	ptrtest[2] = 6;
	printf("\n          TESTS :\n\n");

	printf("String :\n\n");
	printf("len = %d\n\n", printf("io_printf : je m'appelle %s\n", chartest));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : je m'appelle %s\n", chartest));

	printf("Int :\n\n");
	printf("len = %d\n\n", printf("io_printf : J'ai %d ans\n", nbrtest));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : J'ai %d ans\n", nbrtest));
	printf("len = %d\n\n", printf("io_printf : J'ai %d ans vu que je viens d'un futur lointain\n", nbrtest));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : J'ai %d ans vu que je viens d'un futur lointain\n", nbrtest));

	printf("Unsigned int :\n\n");
	printf("len = %d\n\n", printf("io_printf : J'ai %u ans\n", unbrtest));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : J'ai %u ans\n", unbrtest));

	printf("Hexadecimal :\n\n");
	printf("len = %d\n\n", ft_printf("io_printf : J'ai %x ans\n", unbrtest));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : J'ai %x ans\n", unbrtest));
	printf("len = %d\n\n", ft_printf("io_printf : J'ai %X ans\n", unbrtest));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : J'ai %X ans\n", unbrtest));

	printf("Pointers :\n\n");
	printf("len = %d\n\n", printf("io_printf : Voici mon adresse %p\n", ptrtest));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : Voici mon adresse %p\n", ptrtest));

	printf("Percent\n\n");
	printf("len = %d\n\n", printf("io_printf : 100%%\n"));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : 100%%\n"));	
}
