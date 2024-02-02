/*
4. Write a Program which illustrates Method Overriding by using three classes.

the number of a:-2
the number of b:-2
the sum of a and b is2
*/
#include<iostream>
using namespace std;

class A{
	public :
		void illustrates(){
			int a;
			cout<<"the number of a:-";
			cin>>a;
		}
};
class B {
	public :
		void illustrates(){
			int b;
			cout<<"the number of b:-";
			cin>>b;
		}
};
class C : public A,public B{
	public :
		void illustrates(){
			int c;
			cout<<"the sum of a and b is :"<<c;
			
		}
};
int main(){
	C c1;
	
	c1.A::illustrates();
	c1.B::illustrates();
	c1.C::illustrates();
	
	
	return 0;
}
