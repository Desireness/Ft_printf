#include "ft_printf.h"

int main()
{   
    int x;
    int *pointer = &x;    
    
    ft_printf("Hola %c!\n", 'A');
    ft_printf("Caràcter: %c %c %c\n", 'X', 'Y', 'Z');
    ft_printf("Hola, prueba\n%s", "Prueba1\n");
    ft_printf("XDDDDD\n%p\n", (void *)pointer);
    ft_printf("Numero: %d\n", 10);
    ft_printf("Numero unsigned: %u\n", 10);
    ft_printf("Hexadecimal (minúsculas): %x\n", 255);
    ft_printf("Hexadecimal (mayúsculas): %X\n", 255);
    
    return (0);
}
