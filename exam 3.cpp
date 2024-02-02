#include<iostream>
using namespace std;

int main(){
	int a=5;
	int b=0;
	int c;
	
	try{
		if(b==0){
			throw 45;
		}else{
			c=a/b;
			cout<<"divison is :"<<c<<endl;
		}
	}
	catch(int a){
		cout<<"divison is not possible";
	}
	return 0;
}
