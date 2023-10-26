#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double hemisRadius;
   double hemisVolume;
   
   cin >> hemisRadius;
   
   hemisVolume = (2.0 / 3.0) * M_PI * (hemisRadius * hemisRadius * hemisRadius);

   cout << "Radius is " << fixed << setprecision(4) << hemisRadius << endl;
   cout << "Volume is " << fixed << setprecision(3) << hemisVolume << endl;

   /* Your code goes here */

   return 0;
}