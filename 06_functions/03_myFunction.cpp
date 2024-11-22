#include <iostream>
using namespace std;

// passByReference;

void pourChai(int &cups){
    // here this '&' sign is know as passbyreference it will change the original value;

    cups = cups + 5;
    cout << "Poured " << cups << " cups of tea" << endl;
    
}


int main(){

    int teaCups = 3;
    // this value will be update to 8.
    
    pourChai(teaCups);
    // here i passed the value of teacups as a argument
    cout << teaCups << endl;
    // if i will print this teacups, the value will be changed,
    // because i passed it through 'passByReference'

    return 0;
}


