#include <stdio.h>
#include <unistd.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;

    // Move to the end of the destination string
    while (dest[i] != '\0') 
    {
        i++;
    }
    // Copy the characters from source to destination
    while (src[j] != '\0') 
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    // Null-terminate the resulting string
    dest[i] = '\0';
    return (dest);
}

int main() {
    // Example usage
    char dest[20] = "Hello, ";
    char src[] = "World!";

    *ft_strcat(dest, src);

    printf("Concatenated string: %s\n", dest);

    return 0;
}