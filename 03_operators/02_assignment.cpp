#include <iostream>
using namespace std;

int main(){

    int teaBags;

    cout << "How many teabags do you have? " << endl;
    cin >> teaBags;

    if (teaBags < 10){
        teaBags += 5;
        // it will add 5 to existing value of teabags;
        
        cout << " You have total " << teaBags << " teabags!" << endl;

    }   else{
        cout << "You have total "<< teaBags << " teabags!" << endl;
    }

    return 0;
}