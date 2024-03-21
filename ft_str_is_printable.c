#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        if (!(str[i] >= 32 && str[i] <= 126))
        {
            return 0;
        }

        i++;
    }
    return 1;
}

int main ()
{
    char *str = "ABa#dg";
    int result = ft_str_is_printable(str);

    if (result)
    {
        printf("%s contains only printables.\n", str);
    }
    else
    {
        printf("%s unable to print\n", str);
    }
    return 0;
}