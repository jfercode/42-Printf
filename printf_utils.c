/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <jaferna2@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:22:10 by jaferna2          #+#    #+#             */
/*   Updated: 2024/10/22 10:51:24 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_putstr(int fd, char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i += write(fd, &s[i], 1);
	return (i);
}

int	ft_putnbr_base(int fd, int n, char *base)
{
	int		len_base;
	int		count;
	char	temp_n;

	count = 0;
	len_base = 0;
	while (base[len_base])
		len_base++;
	if (n < 0)
	{
		write (fd, "-", 1);
		count++;
		if (n == -2147483648)
		{
			write(fd, "2147483648", 11);
			return (12);
		}
		n = -n;
	}
	if (n >= len_base)
		count += ft_putnbr_base(fd, n / len_base, base);
	temp_n = base[(n % len_base)];
	write(fd, &temp_n, 1);
	count++;
	return (count);
}

int	ft_putnbr_u_base(int fd, int n, char *base)
{
	if (n < 0)
		return (ft_putstr(fd, "4294967292"));
	return (ft_putnbr_base(fd, n, base));
}
