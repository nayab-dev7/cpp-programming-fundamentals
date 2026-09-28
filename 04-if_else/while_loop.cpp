// the same login logic but in infinite times of attempts 
// here im using while loop for login page if the user entred the corccet pass the loop will end itslef
// else the loop repeats again and again 


#include <iostream>
#include <string>
using namespace std;
int main(){
	
	string pass;
	string user;
	
	while(!(pass=="1234" && user=="admin"))
	{
		cout<<"Aror login portal____________:"<<endl;
		cout<<"Enter your Name: ";
		cin>>user;
		cout<<"Enter your password: ";
		cin>>pass;
		if(pass=="1234" && user=="admin")
			cout<<"Wellcome sir: ";
			
		else{
			cout<<"Login failed: ";
		}
			
		
	}
		

	
	
	
	return 0;
		

}
