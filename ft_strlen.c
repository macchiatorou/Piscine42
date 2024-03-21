#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    char str[] = "hello";
    int i = ft_strlen(str);
    printf("%d", i);
}