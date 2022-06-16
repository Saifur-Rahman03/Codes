   #include<stdio.h>
   #include<string.h>
   int main(){
    int i=4;
    double d=4.0;
    char s[]="HackerRank ";
    // Declare second integer, double, and String variables.
    int x,sum=0;
    double n,sum2=0;
    char s2[1000];

    // Read and save an integer, double, and String to your variables.
    scanf("%d %lf %[^\n]s",&x,&n,s2);
    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+x);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",n+d);
    // Concatenate and print the String variables on a new line
    printf("%s\n",strcat(s,s2));
    // The 's' variable above should be printed first.
   }
