#include <iostream>
using namespace std;
int main(){
	
	for(int i=1; i<=20; i++){ // i will starts from 1 to 20
		if(i>15){ // if i is greater then 15 the loop will stop itself
			break;
		}
		
		if(i%2==0){ // formula for even numbers (i%2==0) a number multiply to 2 with 0 reminder
			cout<<i<< "\tis even number! "<<endl;
		}
		
		else{ // else will automaticlly pick odd numbers 
			cout<<i<< "\tis odd number! "<<endl;
		}
	}
	return 0;
}
