/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <miavrako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 08:33:55 by miavrako          #+#    #+#             */
/*   Updated: 2026/01/27 11:21:29 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	ldest;
	unsigned int	lsrc;

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

#include <stdio.h>
int main ()
{
	char	dest [] = "Bonjour";
	char	src [] = "tout le monde";
	//int	a = strlcat(dest, src, 6);
	//printf("Result : %d, %s", a, dest);
	int	a = ft_strlcat(dest, src, 0);
	printf("Length : %d\n %s\n", a, dest);
	int	b = ft_strlcat(dest, src, 5);
	printf("Length : %d\n %s\n", b, dest);
	int	c = ft_strlcat(dest, src, 9);
	printf("Length : %d\n %s\n", c, dest);
	return (0);
}
