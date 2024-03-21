#include <unistd.h>

void _printchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 1)
    {

        while (argv[0][i] != '\0')
        {
            _printchar(argv[0][i]);
            i++;
        }
        write (1, "\n", 1);
    }
    (void)argc; //explicitly indicate that argc is intentionally unused in this function.
    return (0);
}
//write(1, &argv[0][i], 1);