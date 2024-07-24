#include <cs50.h>
#include <stdio.h>



int main(void) {

    int height;
    int column;
    string block = "#";


    do {
        height = get_int("Height: ");
    } while (height <= 0);


    for (int i=0; i < height; i++)
        {
            for (column = 0; column < i; column++){
                putchar('#');
            }
            printf("%s\n", block);
        }

}