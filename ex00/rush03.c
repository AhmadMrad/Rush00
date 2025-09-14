#include <unistd.h>

void ft_putchar(char c);

void rush(int x, int y)
{
    int row;
    int col;

    if (x <= 0 || y <= 0)
        return;

    for (row = 0; row < y; row++)
    {
        for (col = 0; col < x; col++)
        {
            if ((row == 0 && col == 0) || (row == y - 1 && col == 0))
                ft_putchar('A');
            else if ((row == 0 && col == x - 1) || (row == y - 1 && col == x - 1))
                ft_putchar('C');
            else if (row == 0 || row == y - 1)
                ft_putchar('B');
            else if (col == 0 || col == x - 1)
                ft_putchar('B');
            else
                ft_putchar(' ');
        }
        ft_putchar('\n');
    }
}