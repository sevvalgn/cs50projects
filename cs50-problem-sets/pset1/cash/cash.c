#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Cash Owed: ");
    }
    while(n < 0);

    int i = 0;//Eğer i değerini 0a eşitlemezsek if(n>25) fonksiyonu çalışmadığında i değerimiz olmaz(print alamayız) ve dolaysıyla r değerimiz de olmaz(kod durur).
    int r = n;
    if(n >= 25)
    {
       i = n / 25;

       r = n - 25*i;
    }

    int k = 0;
    int l = r;
    if(r >= 10 && n >= 10)
    {
        k = r / 10;

        l = r - 10 * k;
    }

    int m = 0;
    int z = l;
    if(l >= 5 && r >= 5 && n >= 5)
    {
        m = l/5;

        z = l -5*m;
    }

    int x = 0;
    if(z >= 1 && l >= 1 && r >= 1 && n >= 1)
    {
        x = z / 1;
    }

    printf("%i\n", i+k+m+z);
}
