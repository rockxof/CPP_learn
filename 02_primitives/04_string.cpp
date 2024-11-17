#include <iostream>
#include <string>
// you should include string file here

using namespace std;

int main(){

    string name = "Ayush \n";
    string biodata = "A brilliant \"Student\" \t nd \"ProCoder\" ";

    // Escape Sequences
    //  ----    \n, \t, \, \b, \a  
    // this backslash known as escape sequences compiler ignores there existence

    cout << name << biodata << endl;
    
    return 0;
}