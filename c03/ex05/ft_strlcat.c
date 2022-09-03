/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 05:07:51 by taydogan          #+#    #+#             */
/*   Updated: 2022/09/03 08:09:00 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		if (j < size - 1)
		{
			dest[j] = src[i];
		}
		j++;
		i++;
	}
	dest[j - 1] = '\0';
	return (j);
}
/*
int main (void)
{
	char src[] = "selamlar";
    	char dest [] = "hepinize ";
    printf("%i \n", ft_strlcat(dest, src, 17));
    printf("%s \n", dest);
}
*/
