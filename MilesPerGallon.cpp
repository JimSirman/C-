#include <iostream>

using namespace std;
int main()
{


double tankCapacity = 12;
double totalMiles = 350;
double milesPerGallon;


 milesPerGallon = totalMiles / tankCapacity; 
 cout << "The miles per gallon are approximately  "<< static_cast<int>(milesPerGallon) << endl;
 
 
 system ("pause");
 return 0;
 
}







