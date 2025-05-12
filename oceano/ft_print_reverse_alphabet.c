/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diandrade <diandrade@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 08:20:59 by diandrade         #+#    #+#             */
/*   Updated: 2025/05/11 11:17:40 by diandrade        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_reverse_alphabet(void);

int main(void)
{
    ft_print_reverse_alphabet();
    write(1, "\n", 1);
    return (0);
}

void    ft_print_reverse_alphabet(void)
{
    int i;

    i = 122;
    while (i > 96)
    {
        write(1, &i, 1);
        --i;
    }
}