/*
/*


1. Write a C++ program to print factorial series using recursion.

output:-
enter your factorial  number:-4
number is factorial number

*/
*/

#include<iostream>
using namespace std;

class Factorial{
	private:
		int n;
		public :
			void number(){
				cout<<"enter your factorial  number:-";
				cin>>n;
				
				if(n!=0){
					cout<<"number is factorial number";
				}else{
					cout<<"number is non factorial number";
				}
			}
	
};
int main(){
	Factorial f1;
	
	f1.number();
	
	return 0;
	
}
