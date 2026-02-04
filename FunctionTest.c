/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FunctionTest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <miavrako@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 09:49:58 by miavrako          #+#    #+#             */
/*   Updated: 2026/01/27 15:40:01 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main ()
{
	printf ("%d", isdigit('a'));
	return(0);

}

#include <string.h>
int main()
{
	char dest [] = "Hello World";
	char src [] = "coucou";
	memmove(dest, src, 5);
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
