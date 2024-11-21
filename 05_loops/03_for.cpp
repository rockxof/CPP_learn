#include <iostream>
using namespace std;

int main(){

    int cups;
    cout << "How much cups of coffee you wanna order?" << endl;
    cin >> cups;

    for (int i = 1; i <= cups ; i++)
    {
        cout << "Here is your cofee #" << i << endl;
    }
    
    cout << "Your order has been Served!" << endl;
    

    return 0;
}