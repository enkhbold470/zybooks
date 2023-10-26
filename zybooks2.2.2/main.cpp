#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

   double soundPower = 0;
   double distanceTraveled = 0;
   double soundIntensity = 0;

   cin >> soundPower;
   cin >> distanceTraveled;
   soundIntensity = soundPower / (4 * M_PI * pow(distanceTraveled, 2));
   cout << "Sound wave intensity is " << fixed << setprecision(5) << soundIntensity << endl;
   /* Your code goes here */

   return 0;
}
