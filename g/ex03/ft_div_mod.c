/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan < taydogan@student.42istanbu      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:45:14 by taydogan          #+#    #+#             */
/*   Updated: 2022/08/31 16:27:35 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main ()
{
	int k;
	int l;

	ft_div_mod(9, 3, &k, &l);
	printf("%d\n", k);
	printf("%d", l);
}
*/
