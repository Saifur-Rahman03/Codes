#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i;
struct cdcollection
{
   char title[30];
   char artist[30];
   int numSongs;
   float price;
   char dateBought[10];
}cd1 = {"Red Moon Men","Sam and the sneeds",12,11.95,"02/02/07"};

int main()
{
   struct cd;
   int i;

   printf("Here is the CD info\n\n");
   printf("TItle: %s\n",cd1.title);
   printf("Artist: %s\n",cd1.artist);
   printf("Songs: %d\n",cd1.numSongs);
   printf("Price: %.2f\n",cd1.price);
   printf("Date Bought: %s\n",cd1.dateBought);

   printf("\n\n\n");

   system("PAUSE");

   return 0;
}

