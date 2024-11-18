#include <iostream>
using namespace std;

int main(){
    // Arithmetic Operators : + , - , * , / , %(modulas) , ++(increment) , --(decrement)
    

    int cups;
    double pricePerCup, totalPrice, dicountedPrice;

    cout << "How much cupt of tea would you like to order? " << endl;
    cin >> cups;

    cout << "Please enter the price of Tea! " << endl;
    cin >> pricePerCup;

    // apply 5% discount if price is above 100.
    totalPrice = (pricePerCup * cups);

    if ( totalPrice >= 100){
        dicountedPrice = totalPrice - (totalPrice * 0.05);
        cout << " Your discounted Price is : "<< dicountedPrice << endl;
    }   else{
        cout << "Your total price is : " << totalPrice << endl;
    }

    return 0;
}