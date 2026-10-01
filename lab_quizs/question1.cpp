//question 1
/*devolop a simple calculator that takes two numbers as input 
from user and perform the following oprations*/

/*
1. bit wise opration
2. or opration 
3. bitwise x-or opration
*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "AND: " << (a & b) << endl;
    cout << "OR : " << (a | b) << endl;
    cout << "XOR: " << (a ^ b) << endl;
    return 0;
}



