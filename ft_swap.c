#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10;
    int b = 12;
    ft_swap(&a, &b);
    printf("%d %d", a, b);
}