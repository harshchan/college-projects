#include<iostream>
#include<stdio.h>
using namespace std;
//void menu(int,int);
void input();
void bubblesort(int A[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				t=A[j];
				A[j]=A[j+1];
				A[j+1]=t;
				//cout<<"\n swapped "<<A[j+1]<<" and "<<A[j];
				for(int x=0;x<n;x++)
				cout<<"  "<<A[x];
				cout<<"\n";
			}
		}
		cout<<"\n pass = "<<i+1<<endl;
	}
	
}

void insertion(int A[100],int n)
{
	int i,j,t,k;
	for(i=0;i<n;i++)
	{
		j=i;
		while(j<=i && j>=0)
		{
			if(A[j]<A[j-1])
			{
				t=A[j];
				A[j]=A[j-1];
				A[j-1]=t;
				//cout<<" \ninserted "<<A[j]<<" at pos "<<j;
				
				
			}
			j--;
		}
		for(int x=0;x<n;x++)
		cout<<"   "<<A[x];
		cout<<"\n";
		cout<<"\n pass = "<<i+1<<endl;
	}
}


void selection(int A[100],int n)
{
	int i,j,t,min;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(A[min]=A[j])
			{
				min=j;
			}
		}
		t=A[i];
		A[i]=A[min];
		A[min]=t;
		//cout<<" \nswapped "<<A[i]<<" and "<<A[min];
		for(int x=0;x<n;x++)
		cout<<"  "<<A[x];
		cout<<"\n";
		cout<<"\n pass = "<<i+1<<endl;
	}
}
void print(int arr[30],int n)
{cout<<"\n the elements after sorting are ";
	int i=0;
	for(i=0;i<n;i++)
	{cout<<"\n"<<arr[i];}
}

main()
{
	int arr[20],n,x,i,y=1;
	do{
		
		if(y==1)
	{
	cout<<"\n how many elements \n";
	cin>>n;
	cout<<"\nenter elements\n";
	for(i=0;i<n;i++)
	{cin>>arr[i];}
	cout<<"\n\n1.BUBBLE SORT\n2.INSERTION SORT\n3.SELECTION SORT\n";
	cin>>x;
	if(x==1)
	{bubblesort(arr,n);print(arr,n);}
	if(x==2)
	{insertion(arr,n);print(arr,n);}
	if(x==3)
	{selection(arr,n);print(arr,n);}
}
cout<<"\n \nto continue press 1 to exit press 2  ";
		cin>>y;
	}while(x<=4&&y==1);
}
