/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <ide-la-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:45:58 by ide-la-r          #+#    #+#             */
/*   Updated: 2024/08/13 15:52:27 by ide-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	a = 0;
	while (a < size)
	{
		i = tab[size - 1 - a];
		tab[size - 1 - a] = tab[a];
		tab[a] = i;
		a++;
		if (a >= size - 1 - a)
		{
			break ;
		}
	}
}
