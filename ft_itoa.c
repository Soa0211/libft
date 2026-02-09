/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <miavrako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 23:54:15 by miavrako          #+#    #+#             */
/*   Updated: 2026/02/09 15:23:43 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_dig(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*result;
	int				len;
	unsigned int	nb;

	len = count_dig(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	len--;
	if (n < 0)
	{
		result[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	if (nb == 0)
		result[0] = '\0';
	while (nb > 0)
	{
		result[len--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (result);
}
