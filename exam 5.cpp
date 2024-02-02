
	/*
5. Write a Program to handle ambuigity error in Hybrid inheritance.

output:-
	method from class A
	method from class B
	method from class C
	method from class D

*/


#include<iostream>
using namespace std;

class A{
	public :
		void hybrid(){
			cout<<"method from class A"<<endl;
		}
};
class B :  public A{ 
	public :
		void hybrid(){
			cout<<"method from class B"<<endl;
		}
};
class C : virtual public B{
	public :
		void hybrid(){
			cout<<"method from class C"<<endl;
		}
};
class D : virtual public C{
	public :
		void hybrid(){
			cout<<"method from class D"<<endl;
		}
};

int main(){
	D d1;
	
	
	d1.A::hybrid();
	d1.B::hybrid();
	d1.C::hybrid();
	d1.D::hybrid();
	
	
	return 0;
}

