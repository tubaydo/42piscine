/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan < taydogan@student.42istanbu      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:01:29 by taydogan          #+#    #+#             */
/*   Updated: 2022/08/31 16:26:29 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int main ()
{ 
	int	a;
	int	b;
	
	a = 23;
	b = 44;
	ft_swap(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return 0;
}
*/
