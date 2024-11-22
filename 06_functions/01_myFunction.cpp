#include <iostream>
using namespace std;

int temperature(int temp)
{
    return temp;
}

// declaration of function...
void declareFunc(string name);
// here i have declared the function but later i can define it and use it;

// function overloading;
void declareFunc(int age = 22)
{
    // here i have passed the value of age which is known as default parameter;

    // here i'm doing function overloading, yes in c++ you can create multiple function
    // for same name and pass different parameters depends on the situations.

    cout << "my age is " << age << endl;
}

int main()
{
    cout << temperature(50) << endl;
    declareFunc();
    return 0;
}

// defination of declared function;
void declareFunc(string name)
{
    // void means this function will not return anything or empty;
    cout << "My name is " << name << endl;
}