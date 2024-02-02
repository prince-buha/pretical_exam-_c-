#include<iostream>
using namespace std;

class Bank{
	private :
		long long int number;
		char name[30];
		char type[30];
		char branch[30];
		long int balance;
		
	public :
		void setdata(){
			cout<<"Enter your A/C Number :-";
			cin>>number;
			cout<<"Enter your A/C Name :-";
			cin>>name;
			cout<<"Enter your A/C type :-";
			cin>>type;
			cout<<"enter your A/C branch :-";
			cin>>branch;
			cout<<"Enter your A/C balance :-";
			cin>>balance;
		}
		void getdata(){
			cout<<"number is "<<number<<endl;
			cout<<"name is "<<name<<endl;
			cout<<"type is "<<type<<endl;
			cout<<"beanch is "<<branch<<endl;
			cout<<"balance is "<<balance<<endl;
		}
		
	
};
int main(){
	int i;
	int n;
	Bank b[n];
	
	cout<<"enter any number you want";
	cin>>n;
	
	for(i=0;i<=n;i++){
	
	
	b[i].setdata();
	b[i].getdata();
	b[i].setdata();
	b[i].getdata();
	b[i].setdata();
	b[i].getdata();
	b[i].setdata();
	b[i].getdata();
	b[i].setdata();
	b[i].getdata();
}
	
	return 0;
}
	

