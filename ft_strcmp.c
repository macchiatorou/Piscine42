#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2) 
{
    int i;
    
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) 
    {
        i++;
    }
    return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int main() {
    // Example usage
    char s1[] = "He";
    char s2[] = "Hello";

    int result = ft_strcmp(s1, s2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }

    return 0;
}