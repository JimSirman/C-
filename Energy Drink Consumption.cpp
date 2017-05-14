//This program shows the energy drink consumption
#include <iostream>
using namespace std;
int main()
{
    int surveyedPeople = 12467;    
    int customersWhoPurchase;
    int customersWhoPreferCitrus;
    customersWhoPurchase = surveyedPeople * .14;
    customersWhoPreferCitrus = customersWhoPurchase * .64;
    cout << "The approximate number of customers in the survey" <<endl 
    << "who purchase one or more energy drinks per week are: " <<endl
    << customersWhoPurchase << endl;
    cout << "The approximate number of customers in the survey" <<endl
    << "who prefer citrus flavored energy drinks are: " <<endl
    << customersWhoPreferCitrus << endl;
    system ("pause");
    return 0;  
     }
