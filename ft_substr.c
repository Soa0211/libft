/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <miavrako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:36:00 by miavrako          #+#    #+#             */
/*   Updated: 2026/02/04 12:33:00 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (s == '\0')
		return (NULL);
	j = 0;
	while (s[j])
		j++;
	if (j < (size_t) start)
		len = 0;


}
