#include <iostream>
#include <string>
using namespace std;

int main(){

    string response;

    do
    {
        cout << "Would you like to order a cup of tea? (yes/no)" << endl;
        getline(cin, response);
    } while (response != "no");
    

    return 0;
}