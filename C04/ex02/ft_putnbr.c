/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <ide-la-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:31:06 by ide-la-r          #+#    #+#             */
/*   Updated: 2024/08/15 18:06:30 by ide-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
	else if (nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

/*int	main(void)
{
	ft_putnbr(2147483647);
	ft_putnbr(-2147483648);
	ft_putnbr(42);
	ft_putnbr(-42);
}*/
