/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan < taydogan@student.42istanbu      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:06:01 by taydogan          #+#    #+#             */
/*   Updated: 2022/08/31 16:33:30 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (i < (size / 2))
	{
	c = tab[i];
	tab[i] = tab[size - i -1];
	tab[size - i -1] = c;
	i++;
	}
}
/*
int main (void)
{
	int tab[] = {1,2,3};
	int size = 3;

	ft_rev_int_tab(tab, size);
	printf("%d,%d,%d", tab[0],tab[1],tab[2]);
}
*/
