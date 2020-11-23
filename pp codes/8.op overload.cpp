#include<iostream>
#include<conio.h>
using namespace std;

class complex{
	private:float real,img;
	
	public:
		complex()													//default constrcttor
		{real=0.0;img=0.0;}
		complex(float r,float i)									//parameterised constructor
		{real=r;img=i;}
		complex operator + (complex const &object)                   //addition operator overloading
		{
			complex tempobj;
			tempobj.real=real+object.real;
			tempobj.img=img+object.img;
			if(tempobj.img>=0)
			cout<<"\n The addition is "<<tempobj.real<<" + "<<tempobj.img<<"i";
			else
			cout<<"\n The addition is "<<tempobj.real<<" - "<<-tempobj.img<<"i";
			return tempobj;
		}
		complex operator - (complex const &object)                   //subtraction operator overloading
		{
			complex tempobj;
			tempobj.real=real-object.real;
			tempobj.img=img-object.img;
			if(tempobj.img>=0)
			cout<<"\n The subtraction is "<<tempobj.real<<" + "<<tempobj.img<<"i";
			else
			cout<<"\n The subtraction is "<<tempobj.real<<" - "<<-tempobj.img<<"i";
			return tempobj;
		}
		bool operator > (complex const &object)                   //comparison operator overloading
		{
			if(real>object.real)
			return true;
			if(real==object.real && img>object.img)
			return true;
			
			return false;
		}
		/*void display()
		{cout<<"\n the number  is "<<real<<" + "<<img<<"i";
		}/*/
		
};

int main()
{
	//complex c1,c2,c3,c4;
	float r1,r2,i1,i2,r3,i3;
	cout<<"enter real and imaginary part of first complex number ";
	cin>>r1>>i1;
	cout<<"enter real and imaginary part of second complex number ";
	cin>>r2>>i2;
	complex c1(r1,i1);
	complex c2(r2,i2);
	complex c3=c1+c2;
	complex c4=c1-c2;
	if(c1>c2)
	{cout<<"\nfirst number is greater than second";
	}
	else
	{
		cout<<"\n second number is greater";
	}
//	c3.display();
//	c4.display();
	
}
