#include<iostream>
using namespace std;
class complex
{
	float real,imag;
public:
	complex()						//default constructorr
	{cout<<"\n default constructor is called  ";
		real=0.0;
		imag=0.0;
		cout<<real<<" + "<<imag<<"i\n";
	}
	complex(float x)  				// one parameter constructor
	{cout<<"\n one parameter constructor is called  ";
		real=x;
		imag=x;
		
		if(imag>=0)
		cout<<real<<" + "<<imag<<"i";
		else
		cout<<real<<"  "<<imag<<"i";
	}
	complex(float x,float y)  		// two parameter constructor
	{cout<<"\n two parameter constructor is called  ";
		real=x;
		imag=y;
		if(imag>=0)
		cout<<real<<" + "<<imag<<"i";
		else
		cout<<real<<"  "<<imag<<"i";
	}
	void print();                       //public function of class complex
	friend complex sum(complex,complex);//friend function should be declared in publicc only
	                                    //complex,complex where complex is datatype like int,int
};
complex sum(complex c1,complex c2)      //funcion definition of friend function
{
	complex c3;
	c3.real=c1.real+c2.real;
	c3.imag=c1.real+c2.imag;
	return c3;
}
void complex::print()          			//declaring function def outside class using scope res op
{if(imag>=0)
	cout<<"\nsum of two num is "<<real<<" + "<<imag<<"i";
else
cout<<"\n sum of two num is "<<real<<"  "<<imag<<"i";
}

main()
{
	float x,y,z;
	complex c1;//default parameter
	cout<<"\n enter one value \n";
	cin>>x;   							//1 parameter
	complex c2(x);                      //calling 1 parameter constructor
	cout<<"\n enter two values\n";
	cin>>y>>z;
	complex c3(y,z);    				//2 parameter constructor
	complex c4=sum(c2,c3);              //object=object
	c4.print(); 						//printing the final sum
}
