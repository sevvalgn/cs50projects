#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main( int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Error. Please enter one word.\n");
        return 1;
    }

    if(strlen(argv[1]) != 26)
    {
        printf("Error. Please enter 26 letters.\n");
        return 1;
    }

    int i;
    for(i = 0; i < 26; i++)
    {
        if(!isalpha(argv[1][i]))
        {
            printf("Error. Just alphabetic character.\n");
            return 1;
        }
        for(int r = i + 1; r < 27; r++)
        {
            if(toupper(argv[1][i]) == toupper(argv[1][r]))
            {
                printf("Error. Please enter diffrent letter.\n");
                return 1;
            }
        }
    }

        printf("plaintext: ");
        string text = get_string("");
        printf("ciphertext: ");
        
        int t;
        int x;
        for(t = 0, x = strlen(text); t < x; t++)
        {
            if(isalpha(text[t]))
            {
                if(isupper(text[t]))
                {
                    int y = text[t] - 'A';
                    text[t] = toupper(argv[1][y]);
                }
                else
                {
                    int y = text[t] - 'a';
                    text[t] = tolower(argv[1][y]);
                }
                printf("%c", text[t]);
            }
            else
            {
                printf("%c", text[t]);
            }
        }
    printf("\n");
    return 0;
}
