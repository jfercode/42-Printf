/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:21:43 by jaferna2          #+#    #+#             */
/*   Updated: 2024/10/15 12:21:44 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

/**
 * @brief  Funcion que sirve para obtener el tipo de variable, escribirla y 
 * aumentar el valor de len
 * @param  especifier especificador mediante un char del tipo de variable a
 * escribir.
 * @param  args argumento en este caso el valor de la variable especificada.
 * @return devuelve el total de caracteres impresos.
 */

/*• %c Imprime un solo carácter.
• %s Imprime una string (como se define por defecto en C).
• %p El puntero void * dado como argumento se imprime en formato hexadecimal.
• %d Imprime un número decimal (base 10).
• %i Imprime un entero en base 10.
• %u Imprime un número decimal (base 10) sin signo.
• %x Imprime un número hexadecimal (base 16) en minúsculas.
• %X Imprime un número hexadecimal (base 16) en mayúsculas.
• % % para imprimir el símbolo del porcentaje.
*/
static int	parser(char especifier, va_list args)
{
	int	len_writted;

	len_writted = 0;
	if (especifier == 'c')
		len_writted += ft_putchar(1, va_arg(args, int));
	else if (especifier == 's')
		len_writted += ft_putstr(1, va_arg(args, char *));
	return (len_writted);
}

/**
 * @brief  Replica de la funcion printf original
 * @param  format_string cadena de caracteres que especifica como deben presentar
 * los datos en la funcion
 * @return devuelve el total de caracteres impresos.
 */
int	ft_printf(char const *format_string, ...)
{
	int			len;
	int			next_arg;
	va_list		vargs;

	va_start (vargs, format_string);
	len = 0;
	while (format_string[len])
	{
		next_arg = format_string[len];
		if (next_arg != '%')
			len += ft_putchar(1, next_arg);
		else
		{
			next_arg = format_string[len++];
			len += parser(format_string[len], vargs);
		}
	}
	va_end(vargs);
	return (len);
}
