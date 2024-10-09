/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:39:53 by ide-la-r          #+#    #+#             */
/*   Updated: 2024/08/21 15:48:34 by ide-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	num;
	int	numinv;

	if (nb <= 2)
		return (2);
	else if ((nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0) && nb > 5)
		return (ft_find_next_prime(nb + 1));
	else if (nb == 4)
		return (5);
	else
	{
		num = 3;
		numinv = nb / 2;
		while (num <= numinv)
		{
			if (nb % num == 0 || nb % numinv == 0)
				return (ft_find_next_prime(nb + 1));
			num += 2;
			num -= 2;
		}
	}
	return (nb);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_find_next_prime(8);
	printf("I: %d\n", i);
}*/
