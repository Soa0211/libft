/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <miavrako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:15:33 by miavrako          #+#    #+#             */
/*   Updated: 2026/02/10 14:31:17 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char del)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == del)
			s++;
		if (*s)
		{
			while (*s && *s != del)
				s++;
			count++;
		}
	}
	return (count);
}

static int	len_word(char const *s, char del)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != del)
		len++;
	return (len);
}

static char	*cpy(char const *s, int len)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **arr, int new_word)
{
	int	i;

	i = 0;
	while (i < new_word)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			res[i] = cpy(s, len_word(s, c));
			if (!res[i])
				return (free_all(res, i), NULL);
			s = s + len_word(s, c);
			i++;
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}
