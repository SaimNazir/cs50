#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


const int Alphabet_size = 26;

int main(void) {

    string user1 = "a";


    char letters[Alphabet_size]; //an array, which in memory is a contiguous block of characters

    int a = 0;
    int z = 0;


    while (a < Alphabet_size) {

    letters[a] = z+65;

    z++;
    a++;
    }


   const int scores[Alphabet_size] = {1, 3, 3, 1, 2, 2, 
                                4, 1, 4, 5, 8, 3, 
                                1, 1, 1, 10, 3, 1, 
                                1, 1, 1, 4, 4, 4, 
                                8, 10
                                };



    int user1_score = 0;

    for (int i=0; i < strlen(user1); i++) {

        char *ptr = strchr(letters, toupper(user1[i])); // memory address pointing to the location of the found character

        if (ptr) {
                int index = ptr - letters; // takes the memory address that ptr is pointing to, subtracts the memory address of the start of the array. Compiler automatically divides this by the size of the element type (char in this case) to give the index
                user1_score = user1_score + scores[index];
            }
    }

    printf("Score: %d\n", user1_score);
                            

 //for (int j = 0; j < Alphabet_size; j++) {
     //   printf("%c\n", letters[j]);
   // }
    
}
