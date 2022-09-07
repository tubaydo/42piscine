/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:21:45 by taydogan          #+#    #+#             */
/*   Updated: 2022/09/07 21:28:18 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_atoi(char *str)
{
	int i;
	int e;
	int nb;

	nb = 0;
	i = 0;
	e = 1;

	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\r')
	{
		i++;
	}
	while(str[i] == '-' || str[i] == '+')
		{
			if(str[i] == '-')
				e *= -1;
			i++;
		}
	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	
	return (nb*e);
}
int main (void)
{
	char str[] = " ---+--+1234ab567";
	printf("%d",ft_atoi(str));
}
