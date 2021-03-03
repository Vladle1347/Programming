#include <iostream>
#include <math.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    double d;
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    if (d > 0) {
        int x1, x2;
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << "Два корня: " << ((x1 > x2) ? x2 : x1) << " " << ((x1 > x2) ? x1 : x2);
    }
    else
        if (d == 0) {
            cout << "Один корень:" << " " << -b / (2 * a) << endl;
        } 
        else
            cout << "Нет корней" << endl;
    return 0;
}