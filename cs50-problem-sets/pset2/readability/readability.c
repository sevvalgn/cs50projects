#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void)
{   //kullanıcıdan metin girmesini istersin
    string text = get_string("Text: ");
    // boşluk sayısı = kelime-cümle
   // cümle sayısı
 float sentencecount = 0;
 for(int n = 0 , s = strlen(text); n < s; n++)
 {
   if(text[n] == '.')
   {
      sentencecount++;
   }
   else if(text[n] == '?')
   {
      sentencecount++;
   }
   else if(text[n] == '!')
   {
      sentencecount++;
   }
 }
 int punctuation = 0;
 for(int p = 0 , s = strlen(text); p < s; p++)
 {
   if(ispunct(text[p]))
   {
      punctuation++;
   }
 }
   //boşluk saysısı
 int spacecount = 0;
 for(int i = 0 , s = strlen(text); i < s; i++)
 {
   if(isblank(text[i]))
   {
      spacecount++;
   }
 }
 //harf sayısı
 float letter = strlen(text) - spacecount - punctuation;

 //kelime sayısı
 float wordcount = spacecount + 1;

    // girdiği metindeki L ve S değerlerini bulursun
// Burada Lmetindeki her 100 kelimeye düşen ortalama harf sayısı ve Smetindeki her 100 kelimeye düşen ortalama cümle sayısıdır.
 float L;
 L = letter * 100 / wordcount;
 float S;
 S = sentencecount * 100 / wordcount;
    // colleman liau indeksi index = 0.0588 * L - 0.296 * S - 15.8. Bu işlemle X değerini bulursun.
 float grade;
 grade = 0.0588 * L - 0.296 * S - 15.8;
    // X hesaplanan not seviyesini en yakın tam sayıya yuvarla
 int X;
 X = round(grade);
 //X sınıfı çıktısı yaz
// 1. sınıf önce, 16+,2.,3..
 if(X < 2)
 {
    printf("Before Grade 1\n");
 }
 else if(X > 15)
 {
    printf("Grade 16+\n");
 }
 else
 {
    printf("Grade %i\n", X);
 }
}
