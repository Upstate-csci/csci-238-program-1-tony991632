/********
 Author:
 Program: Money class - program assignment #1
 Due Date:
 Purpose:
 ********/
#include "money.h"

// convert current currency values to a string
string Money::toString() {
    return "";
}

// format amount as a local currency and return
string Money::toCurrency(double amount) {
    stringstream ss;

    ss << "$" << left << setfill('0') << setw(4) << amount;
    return ss.str();
}

// convert currency to float
// read currency values from stdin and compute value
// return results
string Money::processChange() { 
 int main()
 {
  float Money.h ;
  int change,quarters, dimes, nickels, pennies; 
  cout <<"Enter the amount of money: ";
   cin >> Money.h;
   change =Money.h * 100;
  quarters = change / 25;
  change = change % 25;
  dimes = change / 10;
  change = change % 10;
   nickels = change / 5;
  pennies = change % 5;
   cout << "\nQuarters: " << quarters << endl;
  cout << " Dimes: " << dimes << endl;
   cout << " Nickels: " << nickels << endl;
    return "";
  cout <<" Pennies: " << pennies << endl;
    system("Pause");
}

// read from stdin and process float command
// convert float to change
// return results
string Money::processFloat() {
    return "";
}

// read from stdin and process check command
// convert float to dollar words & cents
// return results
string Money::processCheck() {
  return "";
}

// read from stdin and process change-float command
// read float of customer payment
// read float of transaction cost
// calculate difference and compute change values
// return the results
string Money::processChangeFloat() {
  return "";
}

// read from stdin and process change-change command
// read change of customer payment
// read float of transaction cost
// calculate difference and compute change values
// output the results
string Money::processChangeChange() {
  return "";
}
