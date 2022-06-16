#define PERIOD 10
#define PRINCIPAL 5000.00
main()
{
     int year;
     float amount,value,inrate;

     amount = PRINCIPAL;
     inrate = 0.11;
     year = 0;

     printf("year\tamount\n");

     while(year<=PERIOD)
     {
          printf("%2d\t%6.2f\n",year,amount);
          value = amount + (amount*inrate);
          year += 1;
          amount = value;
     }
}
