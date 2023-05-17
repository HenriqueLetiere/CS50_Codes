#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start_size, end_size, c = 0;

    do
    {
        start_size = get_int("\nStart Size: ");
    }
    while (start_size < 9);

    do
    {
        end_size = get_int("End Size: ");
    }
    while (end_size < start_size);


    while (start_size < end_size)
    {
        start_size = start_size + start_size / 3 - start_size / 4;

        c++;
    }


    printf("Years: %i\n\n", c);
}