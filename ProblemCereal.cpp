// Scott Fitzpatrick, 2328196
#include <iostream>
using namespace std;

int main() {
  float cerealWeightOunces;
  float cerealWeightTons;

  /* Prompt and user input */
  cout << endl << "Enter the weight of breakfast cereal in ounces: ";
  cin >> cerealWeightOunces;

  /* Calculates ounces to tons conversion and prints */
  cerealWeightTons = cerealWeightOunces / 35273.92;
  cout << "The weight of the cereal in tons is: " << cerealWeightTons << endl << endl;
}
