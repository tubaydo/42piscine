/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:14:30 by taydogan          #+#    #+#             */
/*   Updated: 2022/09/08 19:46:02 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb != 0)
	{
	i *= nb;
	nb--;
	}
	return (i);
}
/*
int main ()
{
	printf("%d",ft_iterative_factorial(-2));
}
*/
