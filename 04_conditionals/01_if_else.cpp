#include <iostream>
using namespace std;

int main (){
    // Write a program that checks if a number is even or odd.
    
    int num;
    cout << "Enter the number" << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Even no." << endl;
    }   else
    {
        cout << "Odd no." << endl;
    }
    
        

    return 0;
}