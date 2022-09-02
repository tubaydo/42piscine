/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan < taydogan@student.42istanbu      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:44:16 by taydogan          #+#    #+#             */
/*   Updated: 2022/09/02 18:11:46 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str [i] <= 'Z'))
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
	char str[] = "qwer";
	printf("%d", ft_str_is_uppercase(str));
	return 0;
}
*/
