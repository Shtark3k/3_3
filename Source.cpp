#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, R, y;
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    if (x <= -7 - R) {
        y = R;
    }
    else if ((x > -7 - R) && (x <= -7 + R)) {
        y = R - (sqrt(R * R - (x + 7) * (x + 7)) / 2);
    }
    else if ((x > -7 + R) && (x <= -4)) {
        y = R;
    }
    else if ((x > -4) && (x <= 0)) {
        y = R + (((x + 4) + (-R)) / 4);
    }
    else if ((x > 0) && (x <= 3.14)) {
        y = sin(x);
    }
    else {
        y = x - 3.14;
    }

    cout << "y = " << y << endl;
    system("pause");
    return 0;
}