#include <iostream>
using namespace std;

int main(){

    int teaCups;
    cout << "how many cups did you purchased? " << endl;
    cin >> teaCups;

    if(teaCups > 20){
        cout << "You will recieve a GOLD badge" << endl;
    } else if (teaCups >= 10 && teaCups <= 20){
        // here we r using && as logical operator
        
        cout << "You will recieve a SILVER badge " << endl;
    }   else{
        cout << "You don't have any badge" << endl;

    }



    return 0;
}