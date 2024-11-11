/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:36:13 by safuente          #+#    #+#             */
/*   Updated: 2024/11/11 11:48:32 by safuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "libft.h"

int	main(int ac, char **av)
{
	char	c;
	//char	*s;
	//char	*str;
	char	*str1 = "abecedrio";
	char	*str2 = "abecedrio";
	/*char	dest1[10] = "hola";	
	char	dest2[10] = "hola";
	int	l1;
	int	l2;*/

	(void)ac;
	c = av[1][0];
	//s = av[1];
	//str = av[2];
	/*printf("c->%i\n", c);
	printf("ft_isalpha\n");
	printf("og ->%i\n", isalpha(c));
	printf("mio->%i\n", ft_isalpha(c));
	printf("ft_isdigit\n");
	printf("og ->%i\n", isdigit(c));
	printf("mio->%i\n", ft_isdigit(c));
	printf("ft_isalnum\n");
	printf("og ->%i\n", isalnum(c));
	printf("mio->%i\n", ft_isalnum(c));
	printf("ft_isascii\n");
	printf("og ->%i\n", isascii(c));
	printf("mio->%i\n", ft_isascii(c));
	printf("ft_isprint\n");
	printf("og ->%i\n", isprint(c));
	printf("mio->%i\n", ft_isprint(c));
	printf("ft_strlen\n");
	printf("og ->%lu\n", strlen(s));
	printf("mio->%zu\n", ft_strlen(s));
	printf("ft_memset\n");
	memset(str2, c, atoi(&av[2][0]));
	ft_memset(str1, c, atoi(&av[2][0]));
	printf("og ->%s\n", str2);
	printf("mio->%s\n", str1);
	printf("ft_memcpy\n");
	memcpy(str2, src, atoi(&av[2][0]));
	ft_memcpy(str1, src, atoi(&av[2][0]));
	printf("og ->%s\n", str2);
	printf("mio->%s\n", str1);
	printf("ft_bzero\n");
	bzero(str2, atoi(&av[2][0]));
	ft_bzero(str1, atoi(&av[2][0]));
	printf("og ->%s\n", str2);
	printf("mio->%s\n", str1);
	printf("ft_strlcpy\n");
	l2 = strlcpy(str2, av[1], atoi(&av[2][0]));
	l1 = ft_strlcpy(str1, av[1], atoi(&av[2][0]));
	printf("og ->%s\n", str2);
	printf("mio->%s\n", str1);
	printf("og ->%i\n", l2);
	printf("mio->%i\n", l1);	
	printf("ft_strlcat\n");
	l2 = strlcat(dest2, av[1], atoi(&av[2][0]));
	l1 = ft_strlcat(dest1, av[1], atoi(&av[2][0]));
	printf("og ->%s\n", dest2);
	printf("mio->%s\n", dest1);
	printf("og ->%i\n", l2);
	printf("mio->%i\n", l1);
	printf("ft_toupper\n");
	printf("og ->%i\n", toupper(c));
	printf("mio->%i\n", ft_toupper(c));
	printf("ft_tolower\n");
	printf("og ->%i\n", tolower(c));
	printf("mio->%i\n", ft_tolower(c));
	printf("ft_strchr\n");
	printf("og ->%s\n", strchr(str2, c));
	printf("mio->%s\n", ft_strchr(str1, c));*/
	printf("ft_strrchr\n");
	printf("og ->%s\n", strrchr(str2, c));
	printf("mio->%s\n", ft_strrchr(str1, c));	
}
