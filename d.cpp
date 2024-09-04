//Experiment 3 d
//Write a program to find last 5 digits of PRN no. and reverse it
//Aditya Kumar 23070123009
#include <iostream>
using namespace std;

int main() {
    int n, a, b, reversed= 0, digit;
    cout<<"enter last 5 digits of PRN No: ";
    cin>>n;
   
   while (n != 0) {
        digit = n % 10;
        n=n/10;
        reversed = reversed * 10 + digit;  
       
    }
    cout << "Reversed last 5 digits: " << reversed << endl;
   
   return 0;
 }
