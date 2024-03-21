#include <stdio.h>

char *ft_strstr(char *str, char *to_find) {

unsigned int i; 
unsigned int j;

    if (to_find[0] == '\0') 
    {
        return str; // If the substring is an empty string, return the original string
    }

    i = 0;
    while (str[i] != '\0') 
    {
        j = 0;

        while (to_find[j] != '\0' && str[i + j] == to_find[j]) {
            j++;
        }

        if (to_find[j] == '\0') {
            return str + i; // Substring found, return the pointer to the start of the substring
        }
        i++;
    }

    return NULL; // Substring not found
}

int main() {
    char str[] = "Hello, world!";
    char to_find[] = "eere";
    char *result = ft_strstr(str, to_find);

    if (result) {
        printf("Found: %s\n", result);
    } else {
        printf("%s\n", str+7);
    }

    return 0;
}

/*
#include <string.h>
#include <stdio.h>
 
int main(void)
{
   char *string1 = "needle in a haystack";
   char *string2 = "dle";
   char *result;
 
   result = strstr(string1,string2);
   /* Result = a pointer to "haystack"
   printf("%s\n", result);
}*/