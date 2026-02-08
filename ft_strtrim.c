/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 23:23:44 by miavrako          #+#    #+#             */
/*   Updated: 2026/02/08 23:47:24 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_set(char c, char const *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *res;
    int start;
    int end;
    int i;
    int len;

    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && is_set(s1[start], set))
        start++;
    end = 0;
    while (s1[end])
        end++;
    end--;
    while(end >= start && is_set(s1[end], set))
        end--;
    if (start > end)
        len = 0;
    else
        len = end - start + 1;
    res = malloc(sizeof(char) * (len +1));
    if (!res)
        return(NULL);
    i = 0;
    while (i < len)
    {
        res[i] = s1[start + i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

#include <stdio.h>
int main()
{
    printf("%s", ft_strtrim("xxxHiiixx", "x"));
    return(0);
}
