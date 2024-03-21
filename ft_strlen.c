#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0; // Initialize counter to 0 
    while(str[i] != '\0') // Loop until null terminator is encountered 
    {
        i++; // Increment the counter 
    }

    return i;
}

int main(void)
{
    char *str = "hello";
    ft_strlen(str);
    printf("Length of the string: %d\n", str);
}