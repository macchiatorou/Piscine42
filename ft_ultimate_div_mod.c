#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int result_div = *a / *b;
    int result_mod = *a % *b;

    *a = result_div;
    *b = result_mod;
}

int main()
{
    int a = 10;
    int b = 5;

    ft_ultimate_div_mod(&a,&b);
    printf("%i, %i", a, b);
    return 0;
}