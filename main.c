/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:44:44 by hgeissle          #+#    #+#             */
/*   Updated: 2022/10/31 17:18:00 by hgeissle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int				ptrtest[5];

	ptrtest[2] = 6;
	printf("\n             TESTS :\n\n");

	printf("Chars :\n\n");
	printf("len = %d\n\n", printf("io_printf : je m'appelle %c%c%c%c%c%c%c\n", 'H', 'a', 'd', 'r', 'i', 'e', 'n', '?'));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : je m'appelle %c%c%c%c%c%c%c\n", 'H', 'a', 'd', 'r', 'i', 'e', 'n', '?'));

	printf("String :\n\n");
	printf("len = %d\n\n", printf("io_printf : %s m'appelle %s\n", "Je", "Hadrien"));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : %s m'appelle %s\n", "Je", "Hadrien"));
	printf("len = %d\n\n", printf("io_printf : Je m'appelle %s\n", NULL));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : Je m'appelle %s\n", NULL));
	printf("len = %d\n\n", printf("io_printf (empty string) : Je m'appelle %s\n", ""));
	ft_printf("len = %d\n\n", ft_printf("ft_printf (empty string) : Je m'appelle %s\n", ""));

	printf("Int :\n\n");
	printf("len = %d\n\n", printf("io_printf : J'ai %d ans\n", 24));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : J'ai %d ans\n", 24));
	printf("len = %d\n\n", printf("io_printf : J'ai %d ans vu que je viens d'un futur lointain\n", INT_MIN));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : J'ai %d ans vu que je viens d'un futur lointain\n", INT_MIN));

	printf("Unsigned int :\n\n");
	printf("len = %d\n\n", printf("io_printf : J'ai %u ans\n", UINT_MAX));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : J'ai %u ans\n", UINT_MAX));

	printf("Hexadecimal :\n\n");
	printf("len = %d\n\n", ft_printf("io_printf : J'ai %x ans\n", UINT_MAX));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : J'ai %x ans\n", UINT_MAX));
	printf("len = %d\n\n", ft_printf("io_printf : J'ai %X ans\n", UINT_MAX));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : J'ai %X ans\n", UINT_MAX));
	printf("- - - - - - - - - - - - - - -\n\n");
	printf("len = %d\n\n", ft_printf("io_printf : J'ai %x ans\n", -42));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : J'ai %x ans\n", -42));
	printf("len = %d\n\n", ft_printf("io_printf : J'ai %X ans\n", -42));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : J'ai %X ans\n", -42));

	printf("Pointers :\n\n");
	printf("len = %d\n\n", printf("io_printf : Voici mon adresse %p\n", ptrtest));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : Voici mon adresse %p\n", ptrtest));
	printf("len = %d\n\n", printf("io_printf : %p\n", ""));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : %p\n", ""));

	printf("Percent\n\n");
	printf("len = %d\n\n", printf("io_printf : 100%%%%\n"));
	ft_printf("len = %d\n\n", ft_printf("ft_printf : 100%%%%\n"));

}
