/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <miavrako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:18:12 by miavrako          #+#    #+#             */
/*   Updated: 2026/01/27 13:32:13 by miavrako         ###   ########.fr       */
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
