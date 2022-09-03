/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan < taydogan@student.42istanbu      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:03:28 by taydogan          #+#    #+#             */
/*   Updated: 2022/08/31 16:29:27 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (b != 0)
	{
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
	}
}
/*
int		main(void)
{
	int a, b, *ptr1, *ptr2;

	a = 15;
	b = 3;
	ptr1 = &a;
	ptr2 = &b;
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("%d\n", a);
	printf("%d\n", b);
}
*/
