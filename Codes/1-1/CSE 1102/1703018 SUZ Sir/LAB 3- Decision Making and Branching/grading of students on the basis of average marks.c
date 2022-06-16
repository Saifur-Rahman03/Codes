#include<stdio.h>
int main ()

{
    int m;
    printf("Enter obtained average marks: ");
    scanf("%d",&m);

    if(m>=0 && m<=100){

    if(m>=80 && m<=100){
        printf("\nHonors\n");}

    if(m>=60 && m<=79){
        printf("\nFirst Division\n");}

    if(m>=50 && m<=59){
        printf("\nSecond Division\n");}

    if(m>=40 && m<=49){
        printf("\nThird Division\n");}

    if(m>=0 && m<=40){
        printf("\nFail\n");}
    }

    else
        printf("\nInvalid Marks... Please Try Again Later...\n");
    return 0;

}
