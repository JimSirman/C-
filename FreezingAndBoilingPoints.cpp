#include <iostream>
using namespace std;
int main()
{
    double temp;
    
    cout << "What is the temperatue?\n" ;
    
    cin >> temp;
    
        if (temp >= -500 && temp <= -362)
        {        
                 cout << "Ethyl alcohol will freeze\n";   
                 cout << "Mercury will freeze\n";
                 cout << "Oxygen will freeze\n";
                 
                 cout << "Oxygen will boil\n";
                        
                 cout << "Water will freeze\n";
        }      
        else if (temp >= -361 && temp <= -306)
        {   
                 cout << "Oxygen will boil\n";
                 cout << "Ethyl alcohol will freeze\n";
                 cout << "Mercury will freeze\n";
                 cout << "Water will freeze\n";
        }   
           
        else if (temp >= -307 && temp <= -173)   
        {   
                 cout << "Ethyl alcohol will freeze\n";
                 cout << "Mercury will freeze\n";
                 cout << "Water will freeze\n";
        }  
        else if (temp >= -172 && temp <= -38)
        {   
                 cout << "Mercury will freeze\n";
                 cout << "Water will freeze\n";
        }   
        else if (temp >= -37 && temp <= 32)
        {
                 cout << "Water will freeze\n";
        }
        
        else if (temp >= 33 && temp <= 211)
        {
                cout << "Ethyl alcohol will boil\n"; 
                
        } 
        else if (temp >= 212 && temp <= 675)
        { 
                cout << "Ethyl alcohol will boil\n"; 
                cout << "Water will boil\n";
                
        }
        else if (temp >= 676)
        {
                cout << "Mercury will boil\n";
                cout << "Ethyl alcohol will boil\n"; 
                cout << "Water will boil\n";
        }    
        else 
        {
                cout << "Wrong input";
        }
           
            // cout << "Ethyl alcohol will boil";
            // cout << "Water will boil";
            // cout << "Oxygen will freeze\n";
            // cout << "Mercury will boil";
            // cout << "Water will freeze";
            // cout << "Mercury will freeze";
            // cout << "Ethyl alcohol will freeze";
        
    system ("pause");
    return 0;
 }
 
