/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 11:28:15 by diandrade         #+#    #+#             */
/*   Updated: 2025/05/11 11:34:23 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}

void	ft_print_numbers(void)
{
	char	i;

	i = 48;
	while (i < 58)
	{
		write(1, &i, 1);
		i++;
	}
}
