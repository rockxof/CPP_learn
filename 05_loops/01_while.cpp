// #include <iostream>
// using namespace std;

// int main()
// {

//     int teaCups;
//     cout << "How many cups of tea you wanna order?" << endl;
//     cin >> teaCups;

//     while(teaCups > 0){
//         cout << "Here is your tea order #" << teaCups << endl;
//         teaCups --;
//     }

//     cout << "We have served your order, enjoy your Tea!" << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main(){

    // Write a program that keeps asking the user to input a positive number until they do so.

    int num;
    cout << "enter a positive no." << endl;
    cin >> num;

    while (num < 1)
    {
        cout << "Please enter positive no." << endl;
        cin >> num;
    }
    

    return 0;
}