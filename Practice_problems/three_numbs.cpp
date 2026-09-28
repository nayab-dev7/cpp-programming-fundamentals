#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Enter your fisrt number: ";
	cin>>a;
	cout<<"Enter your second number: ";
	cin>>b;
	cout<<"Enter your third number: ";
	cin>>c;
	
	if(a>b && a>c){
		cout<<a;
	}
	else if(b>a && b>c){
		cout<<b;
	}
	else if(c>a && c>b){
		cout<<c;
	}
	
	else{
		cout<<"Equal numbers or invalid choice! ";
	}
	
	return 0;
}

