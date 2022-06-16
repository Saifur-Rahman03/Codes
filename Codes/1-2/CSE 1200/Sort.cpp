#include <iostream>
#include <cstdlib>
#include <ctime>

void bubble_sort(int a, int x[]);
void selection_sort(int b, int y[]);
void insertion_sort(int c, int z[]);


using namespace std;

int main( )
{
       int arr[30000], arr1[30000], arr2[30000], arr3[30000];
       int i, j, n = 30;

       srand( (unsigned) time(0));
       for(i = 0; i < n; i++)
              arr[i] = rand( );

       cout << "Array:\n";

       for(i = 0; i < n; i++)
              cout << arr[i] << "\t";
       cout<< endl << endl;
       for(i = 0; i < n; i++)
              arr1[i] = arr[i];
       bubble_sort(n, arr);

       for(i = 0; i < n; i++)
              arr2[i] = arr1[i];
       insertion_sort(n, arr1);

       for(i = 0; i < n; i++)
              arr3[i] = arr2[i];
       selection_sort(n, arr2);


       return 0;
}
void bubble_sort(int a, int x[])
{
       int i, j, count_b = 0;
       int temp;
       clock_t s1 = clock( );
       for(i = 0; i < a - 1; i++){
              for(j = 0; j < a - 1 - i; j++){
                     if(x[j] > x[j + 1]){
                            temp = x[j];
                            x[j] = x[j + 1];
                            x[j + 1] = temp;
                            count_b++;
                     }
              }
       }
       clock_t e1 = clock( );
       double diff1 = (double) (e1 - s1) / 2400000000;
       cout << "Bubble Sort:\n\n";

       for(i = 0; i < a; i++)
              cout << x[i] << "\t";
       cout << endl;
       cout << "No. of bubble swaps = " << count_b << endl;
       cout << "Time: " << diff1 << endl;
       cout << endl << endl << endl;

       return;
}
void insertion_sort(int b, int y[])
{
       int i, j, key, count_i = 0;
       clock_t s2 = clock( );
       for(i = 1; i < b; i++)
       {
              key = y[i];
              j = i - 1;

              while(j >= 0 && y[j] > key){
                     y[j + 1] = y[j];
                     j = j - 1;
                     count_i++;
              }
              y[j + 1] = key;
       }
       clock_t e2 = clock( );
       double diff2 = (double) (e2 - s2) / 2400000000;
       cout << "Insertion Sort:\n\n";

       for(i = 0; i < b; i++)
              cout << y[i] << "\t";
       cout << endl;
       cout << "No. of insertions = " << count_i << endl;;
       cout << "Time: " << diff2 << endl;
       cout << endl << endl << endl;

       return;
}
void selection_sort(int c, int z[])
{
       int i, j, p;
       int temp, count_s = 0;

       clock_t s3 = clock( );
       for(i = 0; i < c - 1; i ++){
              p = i;
              for(j = i + 1; j < c; j++)
              if(z[p] > z[j])
                     p = j;
                     if(p != i){
                            temp = z[i];
                            z[i] = z[p];
                            z[p] = temp;
                            count_s++;
                     }
              }
       clock_t e3 = clock( );
       double diff3 = (double) (e3 - s3) / 2400000000;
       cout << "Selection Sort:\n\n";

       for(i = 0; i < c; i++)
              cout << z[i] << "\t";
       cout << endl;
       cout << "No. of selection swaps = " << count_s << endl;
       cout << "Time: " << diff3 << endl;
       cout << endl << endl << endl;

       return;

}
