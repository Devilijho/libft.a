/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:14:42 by safuente          #+#    #+#             */
/*   Updated: 2024/11/11 11:49:10 by safuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s) - 1;
	while (0 <= l)
	{
		if (s[l] == (char)c)
		{
			s += l;
			return ((char *)s);
		}
		l--;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
