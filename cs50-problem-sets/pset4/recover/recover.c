#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

const int BLOCK = 512;
typedef uint8_t  BYTE;

int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("Usage: ONLY ONE IMAGE\n");
        return 1;
    }
    FILE *cardraw = fopen(argv[1], "r");
    if(cardraw == NULL)
    {
        printf("Invalid image.\n");
        return 1;
    }

    char recover[8];
    BYTE bytes[BLOCK];
    FILE *image = NULL;
    int filecounter = 0;
    while(fread(&bytes, BLOCK, 1, cardraw))
    {
        if(bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff && (bytes[3] & 0xf0) == 0xe0)
        {
            if(image != NULL)
            {
                fclose(image);
            }

            sprintf(recover, "%03i.jpg", filecounter);
            image = fopen(recover, "w");
            filecounter++;
        }

        if(image != NULL)
        {
            fwrite(&bytes, BLOCK, 1, image);
        }
    }
    fclose(image);
    fclose(cardraw);

}
