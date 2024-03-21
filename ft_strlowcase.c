#include <unistd.h>
#include <stdio.h>

char *ft_strlowcase(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}

int main()
{
    char str[] = "HELLO WORLo";
    *ft_strlowcase(str);
    printf("%s", str);

    return 0;
}