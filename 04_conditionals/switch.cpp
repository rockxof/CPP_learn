#include <iostream>
using namespace std;

int main (){

    int days;

    cout << "Enter a day (choose beetween 1 to 7) \n";
    cin >> days;

    switch(days){
        case 1:
            cout << "Monday \n";
            break;
        case 2:
            cout << "Tuesday \n";
            break;
        case 3:
            cout << "Wednesday \n";
            break;
        case 4:
            cout << "Thrusday \n";
            break;
        case 5:
            cout << "Friday \n";
            break;
        case 6:
            cout << "Saturday \n";
            break;
        case 7:
            cout << "Sunday \n";
            break;
    }
    

    return 0;
}