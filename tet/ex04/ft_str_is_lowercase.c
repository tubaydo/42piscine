/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan < taydogan@student.42istanbu      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:37:13 by taydogan          #+#    #+#             */
/*   Updated: 2022/09/02 21:10:37 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str [i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main ()
{
	char str[] = "q4er";
	printf("%d", ft_str_is_lowercase(str));
	return 0;
}
*/
