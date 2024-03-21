#include <stdio.h>
#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && i < n) 
    {
        if (s1[i] == s2[i])
        {
            i++;
        }
        else if (s1[i] > s2[i])
        {
            return 1;
        }
        else 
        {
            return -1;
        }
    }
    if (i == n)  // Check if the loop terminated because of reaching the limit 'n'
        return 0;
    
    return s1[i] - s2[i];
}

int main() {
    // Example usage
    char s1[] = "hollo"; //104 111 
    char s2[] = "he"; //104 101 

    int result = ft_strncmp(s1, s2, 4);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String 1 is less than String 2.\n");
    } else {
        printf("String 1 is greater than String 2.\n");
    }
    return 0;
}