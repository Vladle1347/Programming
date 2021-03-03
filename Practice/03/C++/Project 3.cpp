

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, s;
    cout << "Введите два числа: ";
    cin >> a >> b;
    s = a + b;
    cout << a << "+" << b << "=" << s << endl;
    s = a - b;
    cout << a << "-" << b << "=" << s << endl;
    s = a * b;
    cout << a << "*" << b << "=" << s << endl;
    s = a / b;
    cout << a << "/" << b << "=" << s << endl;
   
    double n, m, c;
    cin >> n >> m;
    c = n + m;
    cout << n << "+" << m << "=" << c << endl;
    c = n - m;
    cout << n << "-" << m << "=" << c << endl;
    c = n * m;
    cout << n << "*" << m << "=" << c << endl;
    c = n / m;
    cout << n << "/" << m << "=" << c << endl;
    int p; 
    double  x, l;
    cin >> p >> x;
    l = p + x;
    cout << p << "+" << x << "=" << l << endl;
    l = p - x;
    cout << p << "-" << x << "=" << l << endl;
    l = p * x;
    cout << p << "*" << x << "=" << l << endl;
    l = p / x;
    cout << p << "/" << x << "=" << l << endl;

    double e;
    int y, h;
    cin >> e >> y;
    h = e + y;
    cout << e << "+" << y << "=" << h << endl;
    h = e- y;
    cout << e << "-" << y << "=" << h << endl;
    h = e * y;
    cout << e << "*" << y << "=" << h << endl;
    h = e / y;
    cout << e << "/" << y << "=" << h << endl;
    return 0;
    
    
}