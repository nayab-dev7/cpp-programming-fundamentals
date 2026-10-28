/*returnType functionName(parameters) {
     code
    return value;
}*/

#include <iostream>
using namespace std;

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int result = add(5, 3);
    cout << "Sum = " << result << endl;
    return 0;
}


