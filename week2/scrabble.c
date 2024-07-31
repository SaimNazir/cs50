#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//  

const int Alphabet_size = 26;
int get_score(string player, char letters[], int scores[]);

int main(void) {

    string player_1 = get_string("Player 1: ");
    string player_2 = get_string("Player 2: ");



    char letters[26]; //an array, which in memory is a contiguous block of characters

    int a = 0;
    int z = 0;


    while (a < 26) {

    letters[a] = z+65;

    z++;
    a++;
    }


   int scores[26] = {1, 3, 3, 1, 2, 2, 
                                4, 1, 4, 5, 8, 3, 
                                1, 1, 1, 10, 3, 1, 
                                1, 1, 1, 4, 4, 4, 
                                8, 10
                                };

                                

    int player_1_score = get_score(player_1, letters, scores);
    int player_2_score = get_score(player_2, letters, scores);

    if (player_1_score > player_2_score) {
        printf("Player 1 wins!\n");
    } 
    
    else if (player_1_score < player_2_score) {
        printf("Player 2 wins!\n");
    } 
    
    else {
        printf("It's a tie!\n");
    }


    
}

int get_score(string player, char letters[], int scores[]) {

int player_score = 0;

    for (int i=0; i < strlen(player); i++) {

        char *ptr = strchr(letters, toupper(player[i])); // memory address pointing to the location of the found character

        if (ptr) {
                int index = ptr - letters; // takes the memory address that ptr is pointing to, subtracts the memory address of the start of the array. Compiler automatically divides this by the size of the element type (char in this case) to give the index
                player_score = player_score + scores[index];
            }
    }

    return player_score;


}