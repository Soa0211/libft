/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <miavrako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:34:36 by miavrako          #+#    #+#             */
/*   Updated: 2026/02/10 16:32:33 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;

	d = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			d = (char *)s;
		s++;
	}
	if (*s == (char)c)
		d = (char *)s;
	return (d);
}
