/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <miavrako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:00:35 by miavrako          #+#    #+#             */
/*   Updated: 2026/02/09 13:46:44 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;
	size_t	ln1;
	size_t	ln2;

	i = 0;
	j = 0;
	ln1 = ft_strlen(s1);
	ln2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ln1 + ln2 + 1));
	if (!res)
		return (NULL);
	while (i < ln1)
		res[i++] = s1[i++];
	while (j < ln2)
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}
