//login page code for 3 users only using if else 
// if else are the condtions lader if fisrt if is not true then the next will run and so on
//and the last else is the ending conditon if the all ifs fails then else will run 
// the compiler checks every if and else if line by line 
// and here i use & attribute its a AND attribute that means inside if both conditions must be true 
#include <iostream>
#include <string>
using namespace std;
int main(){
	string user,pass;
	
	cout<<"______________AROR PORTAL LOGIN ONLY ADMINS ARE ALLOWED________________ "<<endl;
	cout<<"__________________   +++++++++++++++++++++++         _____________________"<<endl;
	cout<<"____________________  ++++++++++++++++++++++       _______________________"<<endl;
	cout<<"Enter your username: ";
	cin>>user;
	cout<<"Enter your password: ";
	cin>>pass;
	
	if(pass=="1234" && user=="admin"){
		cout<<"Wellcome sir: ";
		
	}
	else if(pass=="4321" && user=="nayab"){
		cout<<"Hello Nayab! ";
	  }
	else if(pass=="1122" && user=="harry"){
		cout<<"Hey there! you are not a admin but can use this portal for now";
	  }
	else
		cout<<"The login is blocked by admin: ";
		

return 0;
}

