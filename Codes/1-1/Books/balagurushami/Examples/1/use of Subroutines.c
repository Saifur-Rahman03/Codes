int mul (int a, int b);
main()
{
     int a=5;
     int b=10;
     int c = mul(a, b);

     printf("Multiplication of %d and %d is %d\n",a, b, c);

}
int mul (int x, int y)
{
     int p;
     p = x*y;
     return (p);
}
