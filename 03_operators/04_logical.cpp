#include <iostream>
using namespace std;

int main()
{

    bool isStudent;
    int cups;

    cout << "Are you a Student? (type 1 for yes and 0 for no) " << endl;
    cin >> isStudent;

    cout << "How many cups did you puchased? " << endl;
    cin >> cups;

    if (isStudent || cups > 15)
    {
        cout << "You are Eligible for Tea Subscription discount" << endl;
    }
    else
    {
        cout << "You are not Eligible" << endl;
    }

    return 0;
}