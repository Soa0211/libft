/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <miavrako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:33:30 by miavrako          #+#    #+#             */
/*   Updated: 2026/02/09 14:48:51 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*s;
	size_t			i;

	dst = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (dst > s)
	{
		i = 0;
		while (i < n)
		{
			dst[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (n--)
		{
			dst[i] = s[i];
		}
	}
	return (dest);
}
