/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:52:55 by safuente          #+#    #+#             */
/*   Updated: 2024/11/11 15:21:52 by safuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const char	*ptr1;
	const char	*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	i = 0;
	while (i < n && (unsigned char)ptr1[i] == (unsigned char)ptr2[i])
		i++;
	return ((unsigned char)ptr1[i] - (unsigned char)ptr2[i]);
}
