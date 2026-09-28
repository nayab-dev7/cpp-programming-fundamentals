#include <iostream>
using namespace std;
int main(){
	int num=2;
//	for(int i=1; i<=10; i++) // it only prints 2 table
//		cout<<"2x"<<i<<"="<<num*i<<endl;





//    for (int num = 2; num <= 10; num++) {          // outer loop: number 2 to 10
//        for (int i = 1; i <= 10; i++) {             // inner loop: 1 to 10 multiply
//            cout << num << " x " << i << " = " << num * i << endl;
//        }
//        cout << "-------------------" << endl;      // this line will seprate each table 
//    }

	  for(int num =2;num<=10; num++){ // outer loop starts from 2 to 10
	  	for(int i=1; i<=10; i++){  // inner loop starts from 1 to 10
	  		cout<<num<<"x"<<i<<"="<<num*i<<endl; // formula for tables (num*i) 
	  		
		  }
		  cout<<"_________________________________<<"<<endl;
	  }
    
}
