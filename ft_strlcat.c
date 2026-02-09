/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <miavrako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:33:55 by miavrako          #+#    #+#             */
/*   Updated: 2026/02/09 14:48:56 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	i;
	size_t	ldest;
	size_t	lsrc;

	i = 0;
	j = 0;
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	if (size < 1 || size <= ldest)
	{
		return (size + lsrc);
	}
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < size - ldest - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (ldest + lsrc);
}
