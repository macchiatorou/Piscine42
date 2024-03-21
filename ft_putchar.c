#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
    char myCHAR = 'c';
    ft_putchar(myCHAR);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}