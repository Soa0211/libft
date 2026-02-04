/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <miavrako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:18:12 by miavrako          #+#    #+#             */
/*   Updated: 2026/01/28 09:27:10 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main ()
{
	printf("%d", ft_isdigit('a'));
}


#include <string.h>
int main()
{
	char str [] = "Hello World";
	ft_bzero(str, 4);
	printf("%s", str);
}

#include <string.h>
int main()
{
	char dest [] = "Hello World";
	char src [] = "coucou";
	ft_memcpy(dest, src, 5);
	printf("%s", dest);
}
#include <string.h>
int main()
{
	char dest [] = "abc";
	char src [] = "abcdef";
	ft_memmove(dest, src, 2);
	printf("%s", dest);
}

#include <stdio.h>
#include <bsd/string.h>

int main ()
{
	char dest[] = "Bonjour";
	char src [] = "Coucou" ;
	int r;
	r = ft_strlcpy(dest, src, 4);
	printf("%d", r);
}


#include <stdio.h>
int main ()
{
	int b;
	int a;

	a = 'A';
	b = ft_toupper(a);
	printf("%d", b);
}


#include <stdio.h>
int main()
{
    char phrase[] = "Bonjour tout le monde";
    char recherche = 'o';
    char *result;
    result = ft_strchr(phrase, recherche);
    printf("%s", result);
}


#include <stdio.h>
int main()
{
    char phrase[] = "Bonjour tout le monde";
    char recherche = ' ';
    char *result;
    result = ft_strrchr(phrase, recherche);
    printf("%s", result);
}


#include <stdio.h>
int main()
{
    char s1[] = "Hello";
    char s2[] = "world";
    int r;
    r = ft_strncmp(s1, s2, 3);
    printf("%d", r);
}
