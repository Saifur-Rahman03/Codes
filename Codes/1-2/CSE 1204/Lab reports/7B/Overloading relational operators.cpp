#include <iostream>
using namespace std;
class Distance {
private:
	int feet;
	int inches;
public:
	Distance() {
		feet = 0;
		inches = 0;
	}
	Distance(int f, int i) {
		feet = f;
		inches = i;
	}
	void displayDistance() {
		cout << "F: " << feet << " I:" << inches <<endl;
	}
	bool operator <(const Distance& d) {
		if(feet < d.feet) {
			return true;
		}
		if(feet == d.feet && inches < d.inches) {
			return true;
		}
		return false;
	}
	bool operator >(const Distance& d) {
		if(feet > d.feet) {
			return true;
		}
		if(feet == d.feet && inches > d.inches) {
			return true;
		}
		return false;
	}
	bool operator ==(const Distance& d) {
		if(feet == d.feet && inches == d.inches) {
			return true;
		}
		return false;
	}
};
int main() {
	Distance D1(11, 10), D2(5, 11), D3(11, 10), D4(20, 5);

	if( D1 > D2 )
		cout << "D1 is greater than D2 " << endl;
	if(D4 > D2)
		cout << "D2 is less than D4 " << endl;
	if(D1 == D3)
		cout << "D1 is equals to D3 " << endl;
	return 0;
}
