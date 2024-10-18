#include "../printf.h"

int	main (void)
{
	printf("\n---Case 00 - No rules given---\n");
	int ft_int_value_00, int_value_00;

	ft_int_value_00 = ft_printf("HOLA MUNDO");
	ft_printf(" || ");
	int_value_00 = printf("HOLA MUNDO");
	ft_printf("\n");
	if (ft_int_value_00 != int_value_00)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_00, int_value_00);
	else 
		printf ("\nCoinciden ft_printf y printf\n");
	
	printf("\n---Case 01 - %%c rule---\n");
	int ft_int_value_01, int_value_01;

	ft_int_value_01 = ft_printf("%c", 'c');
	ft_printf(" || ");
	int_value_01 = printf("%c", 'c');
	printf("\n");

	if (ft_int_value_01 != int_value_01)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_01, int_value_01);
	else 
		printf ("\nCoinciden ft_printf y printf\n");

	printf("\n---Case 02 - %%s rule---\n");
	int ft_int_value_02, int_value_02;
	
	ft_int_value_02 = ft_printf("%s", "Hello world");
	ft_printf(" || ");
	int_value_02 = printf("%s", "Hello world");
	printf("\n");

	if (ft_int_value_02 != int_value_02)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_02, int_value_02);
	else 
		printf ("\nCoinciden ft_printf y printf\n");

	printf("\n---Case 03 - %% %% rule---\n");
	int ft_int_value_03, int_value_03;
	
	ft_int_value_03 = ft_printf("%%");
	ft_printf(" || ");
	int_value_03 = printf("%%");
	printf("\n");

	if (ft_int_value_03 != int_value_03)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_03, int_value_03);
	else 
		printf ("\nCoinciden ft_printf y printf\n");

	printf("\n---Case 04 - %%d rule---\n");
	int ft_int_value_04, int_value_04;
	
	ft_int_value_04 = ft_printf("%d", -42);
	ft_printf(" || ");
	int_value_04 = printf("%d", -42);
	printf("\n");

	if (ft_int_value_04 != int_value_04)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_04, int_value_04);
	else 
		printf ("\nCoinciden ft_printf y printf\n");

	printf("\n---Case 05 - %%i rule---\n");
	int ft_int_value_05, int_value_05;
	
	ft_int_value_05 = ft_printf("%i", 42);
	ft_printf(" || ");
	int_value_05 = printf("%i", 42);
	printf("\n");

	if (ft_int_value_05 != int_value_05)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_05, int_value_05);
	else 
		printf ("\nCoinciden ft_printf y printf\n");

	printf("\n---Case 06 - %%u rule---\n");
	int ft_int_value_06, int_value_06;
	
	ft_int_value_06 = ft_printf("%u", 42);
	ft_printf(" || ");
	int_value_06 = printf("%u", 42);
	printf("\n");

	if (ft_int_value_06 != int_value_06)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_06, int_value_06);
	else 
		printf ("\nCoinciden ft_printf y printf\n");

	return (0);
}