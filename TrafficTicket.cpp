#include <iostream>
using namespace std;
int main()
{
    
    
    double speedLimit;
    double clockedSpeed;
    double MPH;
    double fine;
    
    cout << "What is the posted speed limit?";
    cin >> speedLimit;
    
    cout << "What was the clocked speed?";
    cin >> clockedSpeed;
    MPH = (clockedSpeed - speedLimit);
    
    if (MPH >= 6 && MPH <= 20)
    {
        
        fine = MPH * 5.00;
        cout << "Your fine will be $" << fine <<endl; 
    }
    else if (MPH >= 21 && MPH <= 39)
    {
        
        fine = MPH * 10.00;
        cout << "Your fine will be $" << fine <<endl; 
    }
    else if (MPH >= 40 && MPH <= 99)
    {
        
        fine = MPH * 25.00;
        cout << "Your fine will be $" << fine <<endl; 
    }
    else if (MPH >= 100 && MPH < 500)
    {
        
        fine = ((MPH * 25.00) + 200.00) ;
        cout << "Your fine will be $" << fine <<endl; 
    }
    else 
    {
        cout << "No fine today!"; 
    }

    system("pause");
    return 0;
}
