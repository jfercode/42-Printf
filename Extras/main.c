#include "../intra-uuid-53b41e81-5179-49fa-a809-c89c46b9f9a1-6123810-jaferna2/printf.h"

int	main (void)
{
	printf("---Case 00 - No rules given---\n");
	int ft_int_value_00, int_value_00;

	ft_int_value_00 = ft_printf("HOLA MUNDO || ");
	int_value_00 = printf("HOLA MUNDO\n");

	if (ft_int_value_00 != int_value_00)
		printf("Valor de ft_printf: %d || valor de printf: %d\n", ft_int_value_00, int_value_00);
	else 
		printf ("\nCoinciden ft_printf y printf\n");
	
	printf("---Case 01 - %%c rule---\n");
	int ft_int_value_01, int_value_01;

	ft_int_value_01 = ft_printf("%c || ", 'c');
	int_value_01 = printf("%c\n", 'c');

	if (ft_int_value_01 != int_value_01)
		printf("Valor de ft_printf: %d || valor de printf: %d\n", ft_int_value_00, int_value_00);
	else 
		printf ("\nCoinciden ft_printf y printf\n");

	printf("---Case 02 - %%s rule---\n");
	int ft_int_value_02/*, int_value_02*/;

	ft_int_value_02 = ft_printf("%s ", "Manzana");
	// int_value_02 = printf("%s\n", "Hello world!");

	// if (ft_int_value_02 != int_value_02)
	// 	printf("Valor de ft_printf: %d || valor de printf: %d\n", ft_int_value_00, int_value_00);
	// else 
	// 	printf ("\nCoinciden ft_printf y printf\n");

	return (0);
}