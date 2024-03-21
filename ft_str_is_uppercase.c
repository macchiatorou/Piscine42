#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
        {
            return 0;
        }

        i++;
    }
    return 1;
}

int main ()
{
    char *str = "ABasbD";
    int result = ft_str_is_uppercase(str);

    if (result)
    {
        printf("%s contains only uppercase alphabets.\n", str);
    }
    else
    {
        printf("%s contains any other characters.\n", str);
    }
    return 0;
}