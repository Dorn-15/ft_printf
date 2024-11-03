/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoireau <adoireau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:28:30 by adoireau          #+#    #+#             */
/*   Updated: 2024/10/28 12:56:21 by adoireau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	int				d;
	char			c;
	char			*s;
	void			*p;
	unsigned int	u;
	int				x;
	int				X;

	d = -42;
	c = 'A';
	s = "Hello, world!";
	p = &d;
	u = 4294967295;
	x = 255;
	X = 255;

	ft_printf("Test de tous les spécificateurs de format :\n");
	printf("Test de tous les spécificateurs de format :\n");

	printf(": %d \n", ft_printf("ft_%%c : |%c|", c));
	printf(": %d \n", printf("in_%%c : |%c|", c));
	printf("\n");
	printf(": %d \n", ft_printf("ft_%%s : |%s|", s));
	printf(": %d \n", printf("in_%%s : |%s|", s));
	printf("\n");
	printf(": %d \n", ft_printf("ft_%%p : |%p|", p));
	printf(": %d \n", printf("in_%%p : |%p|", p));
	printf("\n");
	printf(": %d \n", ft_printf("ft_%%d : |%d|", d));
	printf(": %d \n", printf("in_%%d : |%d|", d));
	printf("\n");
	printf(": %d \n", ft_printf("ft_%%i : |%i|", d));
	printf(": %d \n", printf("in_%%i : |%i|", d));
	printf("\n");
	printf(": %d \n", ft_printf("ft_%%u : |%u|", u));
	printf(": %d \n", printf("in_%%u : |%u|", u));
	printf("\n");
	printf(": %d \n", ft_printf("ft_%%x : |%x|", x));
	printf(": %d \n", printf("in_%%x : |%x|", x));
	printf("\n");
	printf(": %d \n", ft_printf("ft_%%X : |%X|", X));
	printf(": %d \n", printf("in_%%X : |%X|", X));
	printf("\n");
	printf(": %d \n", ft_printf("ft_%%%% : |%%|"));
	printf(": %d \n", printf("in_%%%% : |%%|"));
	printf("\n");
	ft_printf("\nTest avec des valeurs limites :\n\n");
	printf("\nTest avec des valeurs limites :\n\n");

	printf(": %d \n", ft_printf("INT_MAX     : |%d|", INT_MAX));
	printf(": %d \n", printf("INT_MAX     : |%d|", INT_MAX));
	printf(": %d \n", ft_printf("INT_MAX     : |%d|", INT_MIN));
	printf(": %d \n", printf("INT_MAX     : |%d|", INT_MIN));
	ft_printf("UINT_MAX    : |%u|\n", UINT_MAX);
	printf("UINT_MAX    : |%u|\n", UINT_MAX);
	ft_printf("Pointeur NULL : |%p|\n", NULL);
	printf("Pointeur NULL : |%p|\n", NULL);
	ft_printf("\nTest de précision et de largeur :\n\n");
	printf("\nTest de précision et de largeur :\n\n");

	ft_printf("Nombre négatif : |%d|\n", -42);
	printf("Nombre négatif : |%d|\n", -42);
	ft_printf("Zéro           : |%d|\n", 0);
	printf("Zéro           : |%d|\n", 0);

	ft_printf("\nTest de chaînes spéciales :\n\n");
	printf("\nTest de chaînes spéciales :\n\n");
	ft_printf("Chaîne vide    : |%s|\n", "");
	printf("Chaîne vide    : |%s|\n", "");
	ft_printf("Chaîne NULL    : |%p|\n", NULL);
	printf("Chaîne NULL    : |%p|\n", NULL);

	printf(": %d \n", ft_printf("ft_%%c : |%c|", c));

	return (0);
}
