#include <iostream>
#include <string>
using namespace std;


int main()
{

    // break keyword

    string response;

    while (true)
        // i have putted true here because i wanna run this loop on any condition
        {
            cout << "Do you want to stop this loop? (yes or no)" << endl;
            cin >> response;

            if (response == "yes")
            {
                break;
                // this break keyword will exit this loop whenever the statements matches
            }
            cout << "loop will be continued" << endl;
        }

        cout << "You exited the loop" << endl;

    return 0;
} 


