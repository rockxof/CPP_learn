#include <iostream>
using namespace std;

int main(){

    float shoePrice = 499.99;
    int roundedPrice = (int) shoePrice;

    int shoeQuantity = 3;
    // int totalPrice = shoePrice * shoeQuantity;
    // this will explicitly change the value due to int

    double totalPrice = shoePrice * shoeQuantity;
    // but here it will give you precise value

    // in casting you can change data types from one to another but do it with carefully with posssible outcomes
    

    cout << totalPrice << endl;
    
    
    return 0;
}