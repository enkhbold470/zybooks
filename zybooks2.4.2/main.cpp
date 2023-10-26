#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x;
    double y;
    double z;

    cin >> x;
    cin >> y;
    z = sqrt(pow(y, 4) + pow(x, 3));
    /* Your code goes here */

    cout << fixed << setprecision(1); // setprecision(1) outputs z with 1 decimal place.
    cout << z << endl;

    return 0;
}