#include <iostream>
#include <cmath>
using namespace std;
int main()
    {
          double sliceArea = 14.125;
          int numPeople;
          double diameter;
          double slices;
          double pizzaArea;
          const double PI = 3.14159;
          double radius; 
          double pizzas;
          const int slicesPerPerson = 4;
 //Ask the user for the number of people in their party      
              cout << "Please enter the number of people in your party:\n";
              cin >> numPeople;
 //Ask the user for the diameter of the pizza
              cout << "What is the diameter of the pizza: (in inches please)\n";
              cin >> diameter;
 //calculate the number of slices that may be taken from a pizza of that size
    radius = diameter / 2;
    pizzaArea = PI * (radius * radius);
    cout << pizzaArea;
    slices = (pizzaArea / sliceArea);
    pizzas = (slicesPerPerson * numPeople / slices);
    
 //display message telling the number of slices
              cout << "The number of slices per pizza are: " << ceil(slices) << endl;
 //display the number of pizzas to order(4 slices per person)
              cout << "You should order " << ceil(pizzas) << " pizzas for your party." << endl; 
 system ("pause");
    return 0;   
    
}
