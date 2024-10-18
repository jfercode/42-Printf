/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:22:10 by jaferna2          #+#    #+#             */
/*   Updated: 2024/10/15 12:22:11 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_putstr(int fd, char* c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		ft_putchar(1, c[i]);
		i++;
	}
	return (i);
}