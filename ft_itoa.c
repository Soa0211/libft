/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 23:54:15 by miavrako          #+#    #+#             */
/*   Updated: 2026/02/08 23:57:40 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_dig(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	
	if (n < 0)
		n = -n;
	
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		is_negative;
	long	nb; 

	if (n == 0)
	{
		result = malloc(2); 
		if (!result)
			return (NULL);
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		nb = -(long)n;
	}
	else
		nb = n;
	
	len = count_dig(n);
	if (is_negative)
		len++; 

	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	
	result[len] = '\0';
	len--;  
	while (nb > 0)
	{
		result[len] = (nb % 10) + '0'; 
		nb = nb / 10;
		len--;
	}
	if (is_negative)
		result[0] = '-';
	
	return (result);
}

#include <stdio.h>
int main()
{
    printf("%s", ft_itoa(-548));
}