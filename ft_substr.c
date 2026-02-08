/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavisoa <miavisoa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:36:00 by miavrako          #+#    #+#             */
/*   Updated: 2026/02/06 16:03:29 by miavisoa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	j = 0;
	while (s[j])
		j++;
	if (j < (size_t) start)
		len = 0;
	if (len > j - start)
		len = j - start;
	result = malloc((sizeof(char)) * len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i++] = s[start++];
	}
	result[i] = '\0';
	return (result);
}
