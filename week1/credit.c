#include <cs50.h>
#include <stdio.h>


int main(void){

    long visa = 4003600000000014;
    //long visa = 6176292929;
    long reversed = 0;
    long digits = 0;
    char my_str[21]; // Buffer to hold the string representation of the long

    sprintf(my_str, "%ld", visa); // Long to str conversion


    for (int i=0; i < strlen(my_str); i++){

        reversed = reversed * 10 + visa % 10; // Add the last digit to the reversed number
        visa = visa / 10; // Remove the last digit from the original number

    }

    char reversed_str[21];
    sprintf(reversed_str, "%ld", reversed); // Long to str conversion

    int multiplied_digits;
    int non_multi_digits;

 
    for (int i=0; i < strlen(reversed_str); i++){

        if (i % 2 != 0){

            int digit = reversed_str[i] - '0';
            
            digit = digit*2;
            multiplied_digits = multiplied_digits * 10 + digit;

        }

        else {
            int digit = reversed_str[i] - '0';
            non_multi_digits = non_multi_digits * 10 + digit;


        }
    }


    char multi_str[21];
    char non_multi_str[21];

    sprintf(multi_str, "%d", multiplied_digits); // Long to str conversion
    sprintf(non_multi_str, "%d", non_multi_digits); // Long to str conversion

    strcat(multi_str, non_multi_str); // Concatenate str


    int numbers_to_add = 0;
    for (int i=0; i < strlen(multi_str); i++){

            int digi = multi_str[i] - '0';

            numbers_to_add = numbers_to_add + digi;
        }

    //printf("%d\n", numbers_to_add);

    char final_string[21];
    sprintf(final_string, "%d", numbers_to_add); // Long to str conversion





    if (final_string[(strlen(final_string)-1)] != '0'){
        printf("%s\n", "Invalid");
    }

    else if (strncmp(my_str, "34", 2) == 0 || strncmp(my_str, "37", 2) == 0) {
        printf("%s\n", "AMEX");
    }

    else if (strncmp(my_str, "51", 2) == 0 || 
                strncmp(my_str, "52", 2) == 0 || 
                strncmp(my_str, "53", 2) == 0 || 
                strncmp(my_str, "54", 2) == 0 || 
                strncmp(my_str, "55", 2) == 0) {

        printf("%s\n", "MASTERCARD");
    }

    else if (strncmp(my_str, "4", 1) == 0) {
        printf("%s\n", "VISA");
    }

    else {
        printf("%s\n", "Unidentified card");
    }         


}