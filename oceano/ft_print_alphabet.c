/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 08:08:50 by diandrade         #+#    #+#             */
/*   Updated: 2025/05/09 08:08:52 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	int	i;

	i = 96;
	while (++i <= 122)
	{
		write(1, &i, 1);
	}
}
