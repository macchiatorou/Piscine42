#include <unistd.h>

void _printchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = 1;
    while (i < argc) //to check if there are command-line arguments present other than the program name itself.
    {
        j = 0; // Reset j for each new argument
        while (argv[i][j] != '\0')
        {
            _printchar(argv[i][j]);
            j++;
        }
        write (1, "\n", 1);
        i++;
    }
    return (0);
}