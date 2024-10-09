/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:34:06 by ide-la-r          #+#    #+#             */
/*   Updated: 2024/08/21 15:53:11 by ide-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	num = nb;
	nb--;
	while (nb > 1)
	{
		num = num * nb;
		nb--;
	}
	return (num);
}
