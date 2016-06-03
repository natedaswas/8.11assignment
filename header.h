#include <iostream>
#include <vector>
#include <cstdlib>
#include <queue>
using namespace std;

//how to randomize the things
//v1 = rand() % 100;         // v1 in the range 0 to 99


class line
{
public:
  //We don't have to keep customers in an array,
  //only need to know how many in line, so it can just be an int
  //and then we can randomly lower the number
  //actually I think I have to use a queue
  queue<int> numCustomers;

private:
  //getters
  int getNumCustomers;
  void addCustomer;

};
