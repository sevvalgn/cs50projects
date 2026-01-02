#include <cs50.h>
#include <stdio.h>

void print_cont(int row);
void print_row(int number,int row);
int main(void)
{
    int n;
    do
    {
        n = get_int("Height:");
    }
    while(n < 1 || n > 8);

    for(int i = 0; i < n; i++)
    {
       print_row(n,i+1);
       printf("  ");
       print_cont(i+1);
       printf("\n");
    }
}

void print_row(int number,int row)
{
    for(int s = number - row; s > 0; s--)
    {
        printf(" ");
    }

    for(int r = 0; r < row; r++)
    {
        printf("#");
    }
}

void print_cont(int row)
{
        for(int r = 0; r < row; r++)
        {
            printf("#");
        }
}
