#include <cs50.h>
#include <stdio.h>
//prototip eklenir
void print_row(int height, int rows);
int main(void)
{
  //pozitif n sayısı için
   int n;
    do
    {
        n = get_int("height: ");
    }
    while(n<1);

    for(int h = 0; h<n; h++)
     {
       print_row(n,h+1);
    }
}
// rowu space ile birleştirmek için ayırdık
void print_row(int height, int rows)
{
  //space bas
  //önemli olan s değeri değil, fonksiyonun kaç kez çalıştığı! Çünkü s değerini kullanmıyoruz.
    for(int s = height-rows; s>0; s--)
    {
      printf(" ");
    }
  //kare bas
  for(int r = 0; r<rows; r++)
  {
    printf("#");
  }
    printf("\n");
}
