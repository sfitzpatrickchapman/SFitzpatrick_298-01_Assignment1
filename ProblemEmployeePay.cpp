// Scott Fitzpatrick, 2318196
#include <iostream>
using namespace std;

int main() {
  int hoursWorked;
  int grossPay;
  int withholdingAmount;
  int netTakeHomePay;

  /* Prompt and input */
  cout << endl << "Enter the amount of hours you worked this week: ";
  cin >> hoursWorked;

  /* Determines normal or overtime work and sets boundaries */
  if ((hoursWorked > 0) && (hoursWorked <= 42)) {
    grossPay = hoursWorked * 16;
  }
  else if (hoursWorked > 42 && hoursWorked < 85) {
    int overTimeHours = hoursWorked - 42;
    grossPay = 672 + (24 * overTimeHours); // max payment + overtime payment
  }
  else if (hoursWorked >= 85) {
    cout << endl << "That amount of work is probably illegal." << endl << endl;
    return 0;
  }
  else {
    cout << endl << "You should probably file for unemployment." << endl << endl;
    return 0;
  }

  /* Calculations (of witholding (tax) amount and take home pay) */
  withholdingAmount = grossPay / 4; // government tax
  netTakeHomePay = grossPay - withholdingAmount - 10; // $10 <-- insurance

  /* Output */
  cout << endl << "Your gross pay is $" << grossPay << "." << endl;
  cout << "The witholding amount is $" << withholdingAmount << "." << endl;
  cout << "Your net take-home pay is $" << netTakeHomePay << "." << endl << endl;

}
