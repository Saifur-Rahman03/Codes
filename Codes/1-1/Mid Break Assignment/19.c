#include<stdio.h>
int main()

{
    int n,guess[100],i=0,tries=0;
    srand(time(NULL));
    n= rand ()%11;
    while (i<100){
    printf("\nGuess the number: ");
    scanf("%d",&guess[i]);
    if(n==guess[i]){
        printf("\nCongrats... You guessed right\n");
        tries++;
        break;
        }
    else if(n>guess[i]){
        printf("\nToo low\n");
        tries++;
        }
    else if(n<guess[i]){
        printf("\nToo high\n");
        tries++;
        }
        printf("You have tried %d times\n",tries);
        i++;
    }
    return 0;
}
