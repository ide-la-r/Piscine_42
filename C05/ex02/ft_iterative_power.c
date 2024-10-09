/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:42:08 by ide-la-r          #+#    #+#             */
/*   Updated: 2024/08/20 18:44:57 by ide-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	num = nb;
	power--;
	while (power > 0)
	{
		num = num * nb;
		power--;
	}
	return (num);
}
