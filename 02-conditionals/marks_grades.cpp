#include<iostream>
using namespace std;
int main(){
	float total_marks;
	float eng,math,ict,pro;
	
	cout<<"Enter your marks for english: ";
	cin>>eng;
	cout<<"Enter your marks for maths: ";
	cin>>math;
	cout<<"Enter your marks for ICT: ";
	cin>>ict;
	cout<<"Enter your marks for programming: ";
	cin>>pro;
	
	total_marks=eng+math+ict+pro;   // formula
	float perc=(total_marks/400)*100;
	cout<<"Your percentage is: "<<perc<<"%"<<endl;
	
	if(perc>=80 && perc<=100)   // if/else conditions 
		cout<<"Your grade is     A";
		
	else if(perc>=70 && perc<=80)
		cout<<"Your grade is    B";
		
	else if(perc>=60 && perc<=70)
		cout<<"Your grade is    C";
		
	else if(perc>=1 && perc<=60)
		cout<<"Nice try! but the passing marks are 60+";
		
	else if(perc<=0 || perc>=100)
		cout<<"Enter a valid number: ";
		
	else                                // final else if the any of if or else if conditions are not ture this is a final resort
		cout<<"You may use symbols or words please Enter your marks again: ";
		
		
		
		
		
		
		return 0; // program ended
}
