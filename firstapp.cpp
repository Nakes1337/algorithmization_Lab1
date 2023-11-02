#include <iostream>

using namespace std;

float autofunc(float x) {
	float y = 0;
	if (x < -4) y = -2;
	else if (x < 0) y = x / 4;
	else if (x < 2) y = x * x;
	else y = (x - 10) / -2;
	return y;
}


int main() {
	for (float x = -6; x <= 12; x++) 
		cout << "X:= " << x << "\tY:= " << autofunc(x) << endl;
	return 0;
}