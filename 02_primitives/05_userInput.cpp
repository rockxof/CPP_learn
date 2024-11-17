#include <iostream>
#include <string>

using namespace std;

int main()
{

    string name;
    int num1;
    int num2;

    cout << "Please Enter Your Name \n";
    getline(cin, name);
    // getline method is mostly used to store string value as per userinput;

    cout << "Please Give first Number" << endl;
    cin >> num1;

    cout << "Please Enter Second Number \n";
    cin >> num2;

    cout << name << "Your Multiplication Result is " << (num1 * num2);

    return 0;
}