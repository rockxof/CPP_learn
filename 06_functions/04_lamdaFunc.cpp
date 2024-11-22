#include <iostream>
using namespace std;

int main()
{

    // lamda function syntax;

    // here i used auto datatype for declare the lamda func.
    // you should use auto data type;
    // and also lamda func don't have any name so we have to put it in a variable.
    auto lamdaFunc = [](int num)
    {
        cout << "This is lamda function" << endl;
    };
    // don't forget to put semicolon at the end of lamda func.

    lamdaFunc(5);

    return 0;
}