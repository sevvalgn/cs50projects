#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("ERROR! Enter one word.\n");
        return 1;
    }
    for(int i = 0, s = strlen(argv[1]); i < s; i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int number = atoi(argv[1]);
    if(number<0 || number>pow(2 , 32) - 26)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("plaintext:  ");
    string text = get_string("");
    printf("ciphertext: ");
    char cipher;
    for(int n = 0, l = strlen(text); n < l; n++)
    {
       if(isalpha(text[n]))
        {
            if(isupper(text[n]))
            {
                cipher = ((text[n] - 'A' + number) % 26) + 'A';
            }
            else
            {
                cipher = ((text[n] - 'a' + number) % 26) + 'a';
            }
            printf("%c", cipher);
        }
        else
        {
            printf("%c", text[n]);
        }
    }
    printf("\n");
    return 0;
}


