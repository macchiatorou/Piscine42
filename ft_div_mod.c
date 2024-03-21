#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int a = 10;
    int b = 5;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);
    printf("Div is %i, Mod is %i\n", div, mod);

    /*write(1, div, 1);
    write(1, "\n", 1);
    write(1, mod, 1);*/
}