#include <iostream>
using namespace std;
int main(){
	 int a; // int is a data type used for whole numbers "1234.....10"
     cout<<"Enter your day as a number to see if its a weekend or a week: "<<endl;
	 cout<<"Enter your day as a number: ";
	 cin>>a;
	
	 switch(a){   // switch is comparision statement
	
		case 1:{ // its like a condition 1 or day 1 in this program
		
			cout<<"Its a weekend day Sunday! ";
			break;}  // break is importent to stop the program here if the first case is true 
			
		 case 2:{
			cout<<"Its a week day monday! ";
			break;}
		
		
		 case 3:{
			cout<<"Its a week day tuesday! ";
			break;}
		
		
		 case 4:{
			cout<<"Its a week day wensday! ";
			break;}
		
		
		 case 5:{
			cout<<"Its a week day thursday! ";
			break;}
		
		
		 case 6:{
			cout<<"Its a week day friday! ";
			break;}
		
		
		 case 7:{
			cout<<"Its a weekend day saturday! ";
		    break;}
		    
	     default: // its like a else or last resort if the all cases are false this will run 
	     	cout<<"Invalid day! ";
		
		}
		return 0;	
	}

