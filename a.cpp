//Experiment 3 a
//write a program if number is negative or positive
//Aditya Kumar 23070123009

#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Enter any number: "; 
    cin >> a;

    if (a > 0)
        cout << "Number is positive" << endl;
    else if (a < 0)
        cout << "Number is negative" << endl;
    else
        cout << "Number is 0" << endl;

    return 0;
}
