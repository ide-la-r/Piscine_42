/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-la-r <ide-la-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:38:37 by ide-la-r          #+#    #+#             */
/*   Updated: 2024/08/27 15:44:32 by ide-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alp;

	alp = 'a';
	while (alp <= 'z' )
	{
		write(1, &alp, 1);
		alp += 1;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
}*/
