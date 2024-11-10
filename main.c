/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:36:13 by safuente          #+#    #+#             */
/*   Updated: 2024/11/10 11:55:48 by safuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "libft.h"

int	main(int ac, char **av)
{
	(void)ac;
	char c;
	c = av[1][0];
	printf("c->%i\n",c);
	printf("ft_isalpha\n");
	printf("og->%i\n",isalpha(c));
	printf("mio->%i\n",ft_isalpha(c));
	printf("ft_isdigit\n");
	printf("og->%i\n",isdigit(c));
	printf("mio->%i\n",ft_isdigit(c));
	printf("ft_isalnum\n");
	printf("og->%i\n",isalnum(c));
	printf("mio->%i\n",ft_isalnum(c));
	printf("ft_isascii\n");
	printf("og->%i\n",isascii(c));
	printf("mio->%i\n",ft_isascii(c));
	printf("ft_isprint\n");
	printf("og->%i\n",isprint(c));
	printf("mio->%i\n",ft_isprint(c));
}
