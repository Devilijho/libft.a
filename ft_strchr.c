/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safuente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:59:00 by safuente          #+#    #+#             */
/*   Updated: 2024/11/10 18:33:05 by safuente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = NULL;
	i = 0;
	while (s[i++])
	{
		if (s[i] == c)
		{
			*ptr = *s;
			return (ptr);
		}
	}
	if (s[i] == c)
		return (ptr);
	return (NULL);
}
