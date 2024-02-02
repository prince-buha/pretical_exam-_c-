/*
	/*


2. Array Of Object (Bank Management System) Requirements(A/C Number , A/C Name , A/C Type , A/C Branch , A/C Balance)
 Search Record By A/C Number.
 
 output:-
Enter your A/C Name :-prince
Enter your A/C type :-minor
enter your A/C branch :-motavrachha
Enter your A/C balance :-2330000
number is 1000000
name is prince
type is minor
beanch is motavrachha
balance is 2330000
Enter your A/C Number :-90000000
Enter your A/C Name :-princ
Enter your A/C type :-mejer
enter your A/C branch :-varchha
Enter your A/C balance :-4500000
number is 90000000
name is princ
type is mejer
beanch is varchha
balance is 4500000
Enter your A/C Number :-4000000
Enter your A/C Name :-prin
Enter your A/C type :-minor
enter your A/C branch :-varchha
Enter your A/C balance :-4500000
number is 4000000
name is prin
type is minor
beanch is varchha
balance is 4500000
*/
	
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
	

