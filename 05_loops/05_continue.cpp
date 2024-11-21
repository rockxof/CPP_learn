#include <iostream>
#include <string>
using namespace std;


int main()
{
    string exams[5] = {"maths", "hindi", "biology", "science", "english"};

    for (int i = 0; i < 5; i++)
    {
        if (exams[i] == "biology")
        {   
            cout << "Skipping " << exams[i] << " exam" << endl;
            continue;
            // this keywords will skip the biology
        }
        
        cout << "Taking " << exams[i] << " exam" << endl;
    }
    

    return 0;
} 


