#include <iostream>
using namespace std;
int main( )
{
    int numberOfPods, peasPerPods, totalPeas;

    cout << "Press return after entering a number. \n";
    cout << "Enter the number of pods: \n";
    cin >> numberOfPods;
    cout << "Enter the number of peas in pod: \n";
    cin >> peasPerPods;

    totalPeas = numberOfPods * peasPerPods;

    cout << "If you have " << numberOfPods << " pea pods\n" << "and " << peasPerPods << " peas in each pod, then \n" << "you have " << totalPeas << " peas in all the pod\n";

    return 0;
}
