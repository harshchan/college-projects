/*Assignment 6:C++ program using class to process shopping list for a departmental store. The list include details such as code no and price of each item and perform the operations like adding, deleting items to the list and printing the total value of an order.*/
#include<iostream>
#include<stdio.h>
using namespace std;
int n=0,i=0;
void menu();
class shop
{
	private:int itemcode;
	        char itemname[100];
	        float itemprice;
	        int quantity;
	public:
	        void additems();
			void removeitems();
			void displayitems(); 
			int calcbill();
			       
}S[100];

void shop::additems()
{
cout<<"\nenter item code ";
cin>>S[i].itemcode;
fflush(stdin);
cout<<"\nenter item name ";
cin.getline(S[i].itemname,100);
cout<<"\nenter item price ";
cin>>S[i].itemprice;
cout<<"\nenter quantity ";
cin>>S[i].quantity;
}

void shop::removeitems()
{int x,flag=0;
	cout<<"\n enter item code of product to be removed  ";
	cin>>x;
	for(i=0;i<n;i++)
	{
		if(S[i].itemcode==x)
		{
			for(int j=i;j<n-1;j++)
			{S[j]=S[j+1];flag++;
			}
			
		}
	}
	n=n-1;
	menu();
}
void shop::displayitems()
{cout<<"\n\n";
	for(i=0;i<n;i++)
	{
		cout<<S[i].itemcode<<"  |  "<<S[i].itemname<<"  |  "<<S[i].itemprice<<"  |  "<<S[i].quantity<<endl;
	}
menu();
}
int shop::calcbill()
{int bill=0;
for(i=0;i<n;i++)
{
	bill=(S[i].itemprice*S[i].quantity)+bill;
	}
return bill;	
}

void menu()
{
	int x,t;
	cout<<"\n1.add items\n2.remove items\n3.display items \n4.calculate final bill \n5.exit\n";
	cin>>x;
	if(x==1)
	{
		cout<<"\n how manyy items you have to enter ";
		cin>>t;
	
		for(i=n;i<n+t;i++)
		{S[i].additems();
		}
		n=n+t;
		menu();
	}
	if(x==2)
	{
		S[i].removeitems();
	}
	if(x==3)
	S[i].displayitems();
	if(x==4)
	{
		cout<<"your total bill is "<<S[0].calcbill()<<endl;
		menu();
	}
	else
	exit(0);
	
	
}
 
main()
{
	menu();
}

