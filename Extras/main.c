#include "../intra-uuid-53b41e81-5179-49fa-a809-c89c46b9f9a1-6123810-jaferna2/ft_printf.h"


int	main (void)
{
	printf("\n---Case 00 - No rules given---\n");
	int ft_int_value_00, int_value_00;

	ft_int_value_00 = ft_printf("HOLA MUNDO");
	ft_printf(" || ");
	int_value_00 = printf("HOLA MUNDO");
	printf("\n");
	if (ft_int_value_00 != int_value_00)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_00, int_value_00);
	else 
		printf ("\nCoinciden ft_printf y printf\n");
	
/*----------------------------------------------------------------------------------------------*/

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

/*----------------------------------------------------------------------------------------------*/

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

/*----------------------------------------------------------------------------------------------*/
	
	printf("\n---Case 03 - %%p rule---\n");
	int ft_int_value_03, int_value_03;
	int num = 10;
	int *ptr = &num;
	ft_int_value_03 = ft_printf("%p ", ptr);
	ft_printf(" || ");
	int_value_03 = printf("%p ", ptr);
	printf("\n");

	if (ft_int_value_03 != int_value_03)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_03, int_value_03);
	else 
		printf ("\nCoinciden ft_printf y printf\n");
	
/*----------------------------------------------------------------------------------------------*/

	printf("\n---Case 04 - %% %% rule---\n");
	int ft_int_value_04, int_value_04;
	
	ft_int_value_04 = ft_printf("%%");
	ft_printf(" || ");
	int_value_04 = printf("%%");
	printf("\n");

	if (ft_int_value_04 != int_value_04)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_04, int_value_04);
	else 
		printf ("\nCoinciden ft_printf y printf\n");

/*----------------------------------------------------------------------------------------------*/
	
	printf("\n---Case 05 - %%d rule---\n");
	int ft_int_value_05, int_value_05;
	
	ft_int_value_05 = ft_printf("%d", -42);
	ft_printf(" || ");
	int_value_05 = printf("%d", -42);
	printf("\n");


	if (ft_int_value_05 != int_value_05)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_05, int_value_05);
	else 
		printf ("\nCoinciden ft_printf y printf\n");

/*----------------------------------------------------------------------------------------------*/
	
	printf("\n---Case 06 - %%i rule---\n");
	int ft_int_value_06, int_value_06;
	
	ft_int_value_06 = ft_printf("%i", 42);
	ft_printf(" || ");
	int_value_06 = printf("%i", 42);
	printf("\n");

	if (ft_int_value_06 != int_value_06)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_06, int_value_06);
	else 
		printf ("\nCoinciden ft_printf y printf\n");

/*----------------------------------------------------------------------------------------------*/

	printf("\n---Case 07 - %%u rule---\n");
	int ft_int_value_07, int_value_07;
	
	ft_int_value_07 = ft_printf("%u", -4);
	ft_printf(" || ");
	int_value_07 = printf("%u", -4);
	printf("\n");

	if (ft_int_value_07 != int_value_07)
		printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_06, int_value_06);
	else 
		printf ("\nCoinciden ft_printf y printf\n");

/*----------------------------------------------------------------------------------------------*/
	
	printf("\n---Case 08 - %%x rule---\n");
    int ft_int_value_08, int_value_08;
    
    ft_int_value_08 = ft_printf("%x", -1);
    ft_printf(" || ");
    int_value_08 = printf("%x", -1);
    printf("\n");

    if (ft_int_value_08 != int_value_08)
        printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_07, int_value_07);
    else 
        printf ("\nCoinciden ft_printf y printf\n");

/*----------------------------------------------------------------------------------------------*/

    printf("\n---Case 09 - %%X rule---\n");
    int ft_int_value_09, int_value_09;
    
    ft_int_value_09 = ft_printf("%X", 255);
    ft_printf(" || ");
    int_value_09 = printf("%X", 255);
    printf("\n");

    if (ft_int_value_09 != int_value_09)
        printf("\nValor de ft_printf: %d || valor de printf: %d\n", ft_int_value_09, int_value_09);
    else
		ft_printf ("\nCoinciden ft_printf y printf\n");
	return (0);
}