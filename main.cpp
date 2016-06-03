#include "header.h"

int doAllTheThings();

int main()
{
  doAllTheThings();

  return 0;
}

int doAllTheThings()
{
  //declare 5 lines
  //lets make a loop that on each loop will add a customer or several
  //and it will randomly select a number between 1 and 20
  //1 - 5 will empty out the line
  //we will display the line statistics each time

  //declare them 5 line objects
  line line1;
  line line2;
  line line3;
  line line4;
  line line5;

  bool again = true;
  for (int i = 0;again;i++)
  {
    //output the user menu
    cout << "Welcome to the grocery store. The store is just opening and it's going to be great. We have 5 lines which customers will enter and exit from and random intervals. All you have to do is hit enter and watch the action." << endl;
    cout << "Line 1 has: " << line1.getNumCustomers() << " customers." << endl;
    cout << "Line 2 has: " << line2.getNumCustomers() << " customers." << endl;
    cout << "Line 3 has: " << line3.getNumCustomers() << " customers." << endl;
    cout << "Line 4 has: " << line4.getNumCustomers() << " customers." << endl;
    cout << "Line 5 has: " << line5.getNumCustomers() << " customers." << endl;

    //universal and better practice equivalent to system("PAUSE")
    cout << "Press enter to continue...";
    cin.get();

    //ok so no we need to randomize a number of customers to add to the lines
    int add = rand() % 5;
    cout << "The random number is: " << add << endl;

  }
  return 0;
}
