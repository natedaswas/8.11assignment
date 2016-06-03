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
  line* line1 = new line();
  line* line2 = new line();
  line* line3 = new line();
  line* line4 = new line();
  line* line5 = new line();

  bool again = true;
  for (int i = 0;again;i++)
  {
    //output the user menu
    cout << "Welcome to the grocery store.\nThe store is just opening and it's going to be great.\nWe have 5 lines which customers will enter and exit from and random intervals.\nAll you have to do is hit enter and watch the action." << endl;
    cout << "Line 1 has: " << line1->getNumCustomers() << " customers." << endl;
    cout << "Line 2 has: " << line2->getNumCustomers() << " customers." << endl;
    cout << "Line 3 has: " << line3->getNumCustomers() << " customers." << endl;
    cout << "Line 4 has: " << line4->getNumCustomers() << " customers." << endl;
    cout << "Line 5 has: " << line5->getNumCustomers() << " customers." << endl;

    //universal and better practice equivalent to system("PAUSE")
    cout << "Press enter to continue...";
    cin.get();

    //ok so no we need to randomize a number of customers to add to the lines
    int add = rand() % 5;
    cout << "Oh look there are " << add << " new customers getting in line." << endl;

    //loop for the shortest line will be repeated

    //ADD FUNCTION BASICALLY
    for(add;add > 0;add--)
    {
      //now need a loop to look for the shortest line
      line *shortest;
      shortest = line1;
      if (line2->getNumCustomers() < line1->getNumCustomers())
        shortest = line2;
      if (line3->getNumCustomers() < line2->getNumCustomers())
        shortest = line3;
      if (line4->getNumCustomers() < line3->getNumCustomers())
        shortest = line4;
      if (line5->getNumCustomers() < line4->getNumCustomers())
        shortest = line5;

      shortest->addCustomer();
    }

    //REMOVE FUNCTION BASICALLY
    //this is the number of customers that could possibly be removed
    int less = rand() % 10;
    for(less; less > 0;less--)
    {
      int choice = rand() % 20;
      if (choice == 1)
      {
        line1->removeCustomer();
      }
      if (choice == 2)
      {
        line2->removeCustomer();
      }
      if (choice == 3)
      {
        line3->removeCustomer();
      }
      if (choice == 4)
      {
        line4->removeCustomer();
      }
      if (choice == 5)
      {
        line5->removeCustomer();
      }

    }
  }
  return 0;
}


line::line()
{

}
line::~line()
{

}

int line::getNumCustomers()
{
  return numCustomers.size();
}

void line::addCustomer()
{
  cout << "Looks like we are adding a customer: " << endl;
  int stuff = 5;
  numCustomers.push(stuff);
  return;
}

void line::removeCustomer()
{
  cout << "Looks like someone is all done shopping!" << endl;
  //numCustomers.front();
  numCustomers.pop_front();
  //numCustomers.back();
  return;

}
