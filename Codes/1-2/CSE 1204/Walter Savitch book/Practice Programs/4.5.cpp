#include <iostream>

using namespace std;

double MarkAsPercentage(int correct, int wrong);

int main( )
{
       int n, ca, wa, i = 0, tag;
       double marks, mark[100];
       double hm = 0, lm = 0, sum = 0, avg;
       cout << "No. of students: ";
       cin >> n;
       cout << endl;

       while(n){
              cout << "Student no. " << i + 1 << endl;
              cout << "No. of questions that answered correctly: ";
              cin >> ca;

              cout << "No. of incorrect answer: ";
              cin >> wa;

              marks = MarkAsPercentage(ca, wa);
              mark[i] = marks;
              i++;
              cout << "Obtained Marks: " << marks << endl << endl;
              n--;
              }

              tag = i;

              for(i = 0; i < tag; i++)
                     if(mark[i] > hm)
                            hm = mark[i];

              for(i = 0; i < tag; i++)
                     if(mark[i] < lm)
                            lm = mark[i];

              for(i = 0; i < tag; i++)
                     sum += mark[i];
              avg = sum / tag;

              cout << "Highest marks: " << hm << endl;
              cout << "Lowest marks: " << lm << endl;
              cout << "Average: " << avg << endl;

              return 0;
}

double MarkAsPercentage(int correct, int wrong)
{
       double m;
       m = (1 * correct) - (0.25 *wrong);
       if(m < 0)
              m = 0;

       return m;
}

