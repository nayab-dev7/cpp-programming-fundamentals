// this is a login page code which loops 4 times and then ends the program 
// if the login is true the program will end and let the user login 
// else the loop repeats 4 times and if the attmepts are ended the account will be locked 


#include <iostream>
#include <string>
using namespace std;
int main(){
	string user,pass;
	bool loggedIn=false;
	
	for(int trys=1; trys<=4; trys++)
		{
			cout<<"Enter your name: ";
			cin>>user;
			cout<<"Enter your password: ";
			cin>>pass;
			if(pass=="1234" && user=="admin"){
				cout<<"Welcome sir: ";
				loggedIn=true;
				break;}
				
			else
				cout<<"Wrong! Attempts left"<<4-trys<<endl;
				
		
			
		}
	if(!loggedIn){
		cout<<"too many wrong attempts! account locked: ";
	}
	return 0;
}

