#include <iostream>
using namespace std;


void pourChai(int cups){

    cups = cups + 5;
    cout << "Poured " << cups << " cups of tea" << endl;
    
}


int main(){

    int teaCups = 3;
    pourChai(teaCups);
    // here i passed the value of teacups as a argument
    cout << teaCups << endl;
    // if i will print this teacups, the value will be same 3,
    // because i passed it through 'passByValue'

    return 0;
}


