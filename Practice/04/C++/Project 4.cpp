#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int a=3, b=5, c;

    c = a;
	a = b;
	b = c;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl <<endl;

	int s = 2, f = 1;
	s = s + f;
	f = f - s;
	f = -f;
	s = s - f;
	cout << s << endl;
	cout << f << endl;

	return 0; 


}