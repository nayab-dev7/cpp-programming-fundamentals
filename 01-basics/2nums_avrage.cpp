//Average of 2 numbers given by the user in cpp
#include <iostream>
using namespace std;
int main(){
	float num1,num2,avg; //float is a data type used for decimal numbers with 3 veriables named "num1" "num2" and "avg"
	
	cout<<"finding the average of 2 numbers given by the user: "<<endl; // this line is a title of this program
	
	cout<<"Enter your first number: ";  // this line ask user to end a first number
	
	cin>>num1;  // this line store the value that user enterd in num1 veriable
	
	cout<<"Enter your second number: "; // again asked for second number
	
	cin>>num2;  // second number value stored in num2 veriable
	
	avg=(num1+num2)/2; // this is a formula of finding average of 2 numbers 1+2/2
	
	cout<<"The Average is: "<<avg; // this line prints the final answere 
	
	return 0;  // program ended
}
