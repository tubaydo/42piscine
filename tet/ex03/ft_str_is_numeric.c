/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan < taydogan@student.42istanbu      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 07:21:15 by taydogan          #+#    #+#             */
/*   Updated: 2022/09/01 07:36:40 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str [i] <= '9')
				i++;
		else
			return (0);
	}
	return (1);
}
/*
int main ()
{
	char str[] = "0123456789";
	printf("%d", ft_str_is_numeric(str));
	return 0;
}
*/
