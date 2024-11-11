/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:20:57 by safuente          #+#    #+#             */
/*   Updated: 2024/11/11 14:28:59 by safuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;

	ptr = s;
	while (*ptr && n && (unsigned char)*ptr != (unsigned char)c)
	{
		ptr++;
		n--;
	}
	if (n == 0)
		return (NULL);
	return ((char *)s);
}
