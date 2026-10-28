#include <iostream>
using namespace std;
int main(){
	int rows=3, cols=3;
	int arr[3][3]={
	 	{10,20,30},	
	 	{70,60,90},
	 	{50,70,33}
	};
	
	cout<<"Row\\cols\| ";
	for(int j=0; j<cols; j++){
		cout<<"col "<<j<<"\t";
	}
	cout<<"\n---------------------------------------\n";
	
	for(int i=0; i<rows; i++){
		cout<<"Row "<<i<<"\t| ";
		for(int j=0; j<cols; j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
	
}