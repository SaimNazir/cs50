#include <cs50.h>
#include <stdio.h>

void hi(void);
void yo();


int main(void)

{
    int i = 3;

    while (i>0)
        {
            hi();
            i--;
        } 

    for (int j=0; j < 3; j++)
        {
            printf("Stahp\n");
        }
        
    yo(3);
}



void hi(void)
{
    printf("hi, mom\n");
}

void yo(int n)
{
    for (int i=0; i<n; i++)
    {
    printf("ddd\n");

    }
}