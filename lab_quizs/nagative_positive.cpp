/*"Take a number. Print whether it is positive or negative."*/
#include <iostream>
using namespace std;
int main(){
//	int num;
//	cout<<"Enter your number: ";cin>>num;
//	if(num>0){
//		cout<<"Positive: ";
//	}
//	else if(num<0){
//		cout<<"Negative";
//	}
//	else{
//		cout<<"Zero";
//	}

// input marks and if the student is pass or fail 

    int s1, s2, s3, s4;

    cout << "Enter marks of student 1: "; cin >> s1;
    cout << "Enter marks of student 2: "; cin >> s2;
    cout << "Enter marks of student 3: "; cin >> s3;
    cout << "Enter marks of student 4: "; cin >> s4;

    if (s1 >= 50) cout << "Student 1: Pass" << endl;
    else cout << "Student 1: Fail" << endl;

    if (s2 >= 50) cout << "Student 2: Pass" << endl;
    else cout << "Student 2: Fail" << endl;

    if (s3 >= 50) cout << "Student 3: Pass" << endl;
    else cout << "Student 3: Fail" << endl;

    if (s4 >= 50) cout << "Student 4: Pass" << endl;
    else cout << "Student 4: Fail" << endl;

    return 0;
}

