#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// convert the key to integer
// request plaintext
// check for upper and lower case
// apply formula
// output cipher

int main(int argc, char *argv[])
{
    // check if command line argument exists
    if (argc == 2)
    {
        int key = atoi(argv[1]);
        bool valid_key = false;

        for (int i = 0; i < strlen(argv[1]); i++)
        {
            // check if command line argument is int
            if (isdigit(argv[1][i]))
            {
                valid_key = true;
            }
            else
            {
                printf("Usage: ./vigenere-cipher <key>\n");
                return 1;
            }
        }
    }
    else
    {
        printf("Usage: ./vigenere-cipher <key>\n");
        return 1;
    }
}