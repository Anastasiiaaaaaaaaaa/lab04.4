#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    const double PI = 3.14159265358979323846;
    double R, x, xp, xk, dx, y;

    cout << "R = ";
    cin >> R;

    cout << "xp = ";
    cin >> xp;

    cout << "xk = ";
    cin >> xk;

    cout << "dx = ";
    cin >> dx;

    cout << fixed;

    cout << "---------------------------------------" << endl;
    cout << "|" << setw(12) << "x" << "|" << setw(14) << "y" << "|" << endl;
    cout << "---------------------------------------" << endl;

    x = xp;

    while (x <= xk + dx / 2.0)
    {
        if (x <= -7.0 - R)
        {
            y = R;
        }
        else if (x <= -7.0 + R)
        {
            y = R - sqrt(R * R - (x + 7.0) * (x + 7.0));
        }
        else if (x <= -4.0)
        {
            y = R;
        }
        else if (x <= 0.0)
        {
            y = -R * x / 4.0;
        }
        else if (x <= PI)
        {
            y = sin(x);
        }
        else
        {
            y = x - PI;
        }

        cout << "|" << setw(12) << setprecision(2) << x
            << "|" << setw(14) << setprecision(5) << y
            << "|" << endl;

        x += dx;
    }

    cout << "---------------------------------------" << endl;

    return 0;
}
