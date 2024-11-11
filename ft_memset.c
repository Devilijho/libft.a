/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:27:51 by safuente          #+#    #+#             */
/*   Updated: 2024/11/11 14:32:56 by safuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char				*ptr;
	size_t				i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		*ptr = (unsigned char)c;
		ptr++;
		i++;
	}
	return (s);
}
