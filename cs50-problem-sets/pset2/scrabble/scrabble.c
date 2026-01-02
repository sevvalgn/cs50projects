#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{ //oyunculardan kelime iste
    string word = get_string("Player 1: ");
    string words = get_string("Player 2: ");
  //kelimelerdeki harfleri tespit et ve harflere karşılık gelen numaraları topla
  int score = 0;
    for(int i = 0 , n = strlen(word); i < n; i++)
  {
    if(word[i] == 'a' ||  word[i] == 'e' || word[i] == 'i' || word[i] == 'l' || word[i] == 'n' || word[i] == 'o'
      ||  word[i] =='r' || word[i] == 's' || word[i] == 't' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E'
      || word[i] == 'I' || word[i] == 'L' || word[i] == 'N' || word[i] == 'O' || word[i] == 'R' || word[i] == 'S' || word[i] == 'T' || word[i] == 'U')
    {
      score += 1;
    }
    else if(word[i] == 'd' || word[i] == 'g' || word[i] == 'D' || word[i] == 'G')
    {
      score += 2;
    }
    else if(word[i] == 'b' || word[i] == 'c' || word[i] == 'm' || word[i] == 'p' || word[i] == 'B' || word[i] == 'C' ||  word[i] =='M' || word[i] == 'P')
    {
      score += 3;
    }
    else if(word[i] == 'f' || word[i] == 'h' || word[i] == 'v' || word[i] == 'w' || word[i] == 'y' || word[i] == 'F' ||  word[i] == 'H' ||  word[i] == 'V'|| word[i] == 'W' || word[i] == 'Y')
    {
      score += 4;
    }
    else if( word[i] == 'k' ||  word[i] == 'K')
    {
      score += 5;
    }
    else if( word[i] == 'j' ||  word[i] == 'x' ||  word[i] == 'J' ||  word[i] == 'X')
    {
      score += 8;
    }
    else if( word[i] == 'q' || word[i] == 'z' || word[i] == 'Q' || word[i] == 'Z')
    {
      score += 10;
    }
  }

    int scores = 0;
    for(int r = 0 , d = strlen(words); r < d; r++)
    {
      if(words[r] == 'a' ||  words[r] == 'e' || words[r] == 'i' || words[r] == 'l' || words[r] == 'n' || words[r] == 'o'
        ||  words[r] =='r' || words[r] == 's' || words[r] == 't' || words[r] == 'u' || words[r] == 'A' || words[r] == 'E'
        || words[r] == 'I' || words[r] == 'L' || words[r] == 'N' || words[r] == 'O' || words[r] == 'R' || words[r] == 'S' || words[r] == 'T' || words[r] == 'U')
    {
      scores += 1;
    }
    else if(words[r] == 'd' || words[r] == 'g' || words[r] == 'D' || words[r] == 'G')
    {
      scores += 2;
    }
    else if(words[r] == 'b' || words[r] == 'c' || words[r] == 'm' || words[r] == 'p' || words[r] == 'B' || words[r] == 'C' ||  words[r] =='M' || words[r] == 'P')
    {
      scores += 3;
    }
    else if(words[r] == 'f' || words[r] == 'h' || words[r] == 'v' || words[r] == 'w' || words[r] == 'y' || words[r] == 'F' ||  words[r] == 'H' ||  words[r] == 'V'|| words[r] == 'W' || words[r] == 'Y')
    {
      scores += 4;
    }
    else if( words[r] == 'k' ||  words[r] == 'K')
    {
      scores += 5;
    }
    else if( words[r] == 'j' ||  words[r] == 'x' ||  words[r] == 'J' ||  words[r] == 'X')
    {
      scores += 8;
    }
    else if( words[r] == 'q' || words[r] == 'z' || words[r] == 'Q' || words[r] == 'Z')
    {
      scores += 10;
    }
  }
  //kazananı yazdır
if(score > scores)
{
  printf("Player 1 wins!\n");
}
else if(scores > score)
{
  printf("Player 2 wins!\n");
}
else if(scores == score)
{
  printf("Tie!\n");
}
}

