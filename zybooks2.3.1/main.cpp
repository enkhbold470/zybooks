#include <iostream>
using namespace std;

int main() {
   int shipWeightPounds = 0;
   int shipCostCents = 0;
   const int FLAT_FEE_CENTS = 75;
   const int CENTS_PER_POUND = 25;
   /* Your solution goes here  */
   cin >> shipWeightPounds;
   shipCostCents = FLAT_FEE_CENTS + (shipWeightPounds * CENTS_PER_POUND);

   cout << "Weight(lb): " << shipWeightPounds;
   cout << ", Flat fee(cents): " << FLAT_FEE_CENTS;
   cout << ", Cents per lb: " << CENTS_PER_POUND << endl;
   cout << "Shipping cost(cents): " << shipCostCents << endl;

   return 0;
}