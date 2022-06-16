#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct cdcollection
{
   char title[30];
   char artist[30];
   int numSongs;
   float price;
   char dateBought[10];
}cd[10];

int main()
{
   struct cd;
   int i;

   for(i=0;i<3;i++){

   strcpy(cd[i].title,"Red Moon Men");
   strcpy(cd[i].artist,"Sam and the sneeds");
   cd[i].numSongs = 12;
   cd[i].price = 11.95;
   strcpy(cd[i].dateBought,"02/02/07");

   printf("Here is the CD info\n\n");
   printf("TItle: %s\n",cd[i].title);
   printf("Artist: %s\n",cd[i].artist);
   printf("Songs: %d\n",cd[i].numSongs);
   printf("Price: %.2f\n",cd[i].price);
   printf("Date Bought: %s\n",cd[i].dateBought);

   printf("\n\n\n");}
   system("PAUSE");

   return 0;
}
