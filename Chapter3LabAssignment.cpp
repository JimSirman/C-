#include <iostream>
using namespace std;
  int main()
     {
         	double totalCaloriesEaten;
         	double cookiesEaten;
         	double bagOCookies = 40;
double servings = 10;
         	double caloriesPerServing = 300;         
         cout << "please tell me how many cookies you ate: \n";
         cin >> cookiesEaten;         
         	double servingSize;
         	double caloriesPerCookie;
         	double individualCookie;
         	servingSize = bagOCookies / servings;
         	caloriesPerCookie = caloriesPerServing / servingSize;
 totalCaloriesEaten = cookiesEaten * caloriesPerCookie;
         cout << "you ate " << cookiesEaten << " cookies so the total calories are " 
         << totalCaloriesEaten <<endl;
           system ("pause");
           return 0;
           }
