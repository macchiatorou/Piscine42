#include <unistd.h>

void _printchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i;
    int j;

    i = argc - 1; //hich is the index of the last command-line argument
    while (i >= 1) //to check if there are command-line arguments present other than the program name itself.
    { //this is a while loop that iterates through each command-line argument in reverse order, starting from the last argument.
        j = 0;
        while (argv[i][j] != '\0')
        {
            _printchar(argv[i][j]);
            j++;
        }
        write (1, "\n", 1);
        i--; //decremented to move to the previous argument in the next iteration
    }
    return (0);
}