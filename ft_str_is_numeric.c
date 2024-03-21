#include <unistd.h>
#include <stdio.h>


int ft_str_is_numeric(char *str)
{
    int i = 0;
    
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            i++;;
        }
        else
        {
            return 0;
        }
    }
    return 1;     
}


int main ()
{
    char *str = "1234abs789";
    int result = ft_str_is_numeric(str);

    if (result)
    {
        printf("%s contains only digits\n", str);
    }
    else
    {
        printf("%s contains alphanumerics.\n", str);
    }
    return 0;
}