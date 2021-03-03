#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    char a;
    int x, y, z;
start:
    cin >> x;
    cin >> a;
    cin >> y;
    if (a == '+' | a == '-' | a == '*' | a == '/' ) {
        if (a == '+')
        {
            z = x + y;
        }
        if (a == '-')
        {
            z = x - y;
        }
        if (a == '*')
        {
            z = x * y;
        }  
        if (a == '/')
        {
            if (y == 0) { cout << "Деление на 0" << endl; goto end; }
            else { z = x / y; }
        }
    }
    else {
        cout << "Неверная операция";
    }
    cout << "=" << z << endl;
end:
    goto start;
    return 0;
}