/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:15:33 by miavrako          #+#    #+#             */
/*   Updated: 2026/02/08 23:23:15 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char const *s, char del)
{
    int count;

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

int len_word(char const *s, char del)
{
    int len;
    
    len = 0;
    while (s[len] && s[len] != del)
        len++;
    return (len);
}

char    *cpy(char const *s, int len)
{
    char    *word;
    int i;

    word = malloc(sizeof(char) * (len + 1));
    if (!word)
        return(NULL);
    i = 0;
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

void    free_all(char **arr, int new_word)
{
    int i;

    i = 0;
    while (i < new_word)
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}

char    **ft_split(char const *s, char c)
{
    char    **res;
    int total;
    int i;
    int len;

    if(!s)
        return(NULL);
    total = count_words(s, c);
    res = malloc(sizeof(char *) * (total + 1));
    if (!res)
        return(NULL);
    i = 0;
    while (*s)
    {
        while (*s && *s == c)
            s++;
        if (*s)
        {
            len = len_word(s, c);
            res[i] = cpy(s, len);

            if (!res[i])
                {
                    free_all(res, i);
                    return(NULL);
                }
            s = s + len;
            i++;
        }
    }
    res[i] = '\0';
    return (res);
}

#include <stdio.h>
int main()
{
    char **res;
    int i;
    
    res = ft_split("Coucou,tout,le,monde", ',');

    i = 0;
    while (res[i])
    {
        printf("res[%d] = %s\n", i, res[i]);
        free(res[i]);
        i++;
    }
    free(res);
    return(0);
}