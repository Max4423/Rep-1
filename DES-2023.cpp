#include <iostream>
#include <cmath>
#include<Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double  x1, y1, x2, y2, x3, y3, x4, y4, a, b, c, d, e, f, p, s, s2, s3, s4, sum;
    x1 = 1;
    y1 = 1;
    x2 = 3;
    y2 = 3;
    x3 = 4;
    y3 = 1;
    cout << "Введіть координати 4 - тої точки(x,y) : ";
    cin >> x4 >> y4;
    a = sqrt(((x3 - x1)*(x3 - x1)) + ((y3 - y1)*(y3 - y1)));
    b = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
    c = sqrt(((x3 - x2) * (x3 - x2)) + ((y2 - y3) * (y2 - y3)));
    d = sqrt(((x4 - x1) * (x4 - x1)) + ((y4 - y1) * (y4 - y1)));
    e = sqrt(((x4 - x2) * (x4 - x2)) + ((y2 - y4) * (y2 - y4)));
    f = sqrt(((x3 - x4) * (x3 - x4)) + ((y4 - y3) * (y4 - y3)));

    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    p = (a + d + f) / 2;//p2
    s2 = sqrt(p * (p - a) * (p - d) * (p - f));
    p = (d + b + e) / 2;//p3
    s3 = sqrt(p * (p - b) * (p - d) * (p - e));
    p = (e + f + c) / 2;//p4
    s4 = sqrt(p * (p - e) * (p - f) * (p - c));
    sum = s2 + s3 + s4;
    sum = round(sum * 10) / 10;
    s = round(s * 10) / 10;

    if (s2 == 0 || s3 == 0 || s4 == 0)
    {
        if ((x4 == x1 && y4 == y1) || (x4 == x2 && y4 == y2) || (x4 == x3 && y4 == y3))
        {
            cout << "Точка є вершиною трикутника" << endl;
        }
        else
        {
            cout << "Точка лежить на стороні" << endl;
        }
        
    }
        else if (s == sum)
        {
            cout << "Точка лежить в трикутнику" << endl;
        }

          else
    {
        cout << "Точка лежить поза трикутником" << endl;
    }

    
}
