#include <iostrteam>
using namespace std;
double X[6] = {0.20, 0.22, 0.24, 0.26, 0.28, 0.30};
double fx[6] = {1.6596, 1.6698, 1.6804, 1.6912, 1.7024, 1.7139};
int main()
{

}
void del(int i, int j)
{
	del()
	for(i = 1; i <= n; i++){
		for(j = 0; j < n - i; j++){
			del(i, j) = del(i - 1, j + 1) - del(i - 1, j);
		}
	}
}
