# include <iostream >
using namespace std;
class coord3D{
	int x, y, z;
public :
	coord3D ( ) { x = 0; y = 0, z = 0; };
	coord3D (int i, int j, int k) { x = i; y = j, z = k; }
	void get_xy (int &i, int &j, int &k) { i = x; j = y, k = z; }
	int operator &&( coord3D ob2);
};
int coord3D :: operator &&( coord3D ob2){
	return (x && ob2.x) && (y && ob2.y) && (z && ob2.z);
	}
int main (){
	coord3D o1 (10 , 10, 10), o2 (5, 3, 2);
	if(o1 && o2)
		cout << "o1 && o2 is true \n";
	else
		cout << "o1 && o2 is false \n";
	return 0;
}
