#include <cs50.h>
#include <stdio.h>

int add(int x, int y); //prototype in order to use function declared later

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    int z = add(x, y);

    printf("%i\n", z);


}

int add(int x, int y)
{
    return x + y;
}