//fds lab assignment 5
#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

void checkorder(int A[100],int n)
{
	for(int i=1;i<n;i++)
	{
		if(A[i-1]>A[i])
		{cout<<"array is not sorted\n bye.... ";
		getch();
		exit(0);
		}
	}
}

int binaryrecursion(int A[],int l,int n,int m)
{
	int beg=l,end=n;
	if(beg<=end)
	{
		int mid=(beg+end)/2;
		if(A[mid]==m)
		return mid;
		if(A[mid]>m)
		{binaryrecursion(A,l,mid-1,m);}
		if(A[mid]<m)
		{binaryrecursion(A,mid+1,n,m);}
		else
		return -1;
		
	}
	//return -1;
}


void binarysearch(int arr[100],int n,int m)
{
	int beg=0,end=n-1,mid,flag=0;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(arr[mid]==m)
		{cout<<"element found at "<<mid+1;flag++;getch();return;}
		if(arr[mid]>m)
		end=mid-1;
		if(arr[mid]<m)
		beg=mid+1;
		
	}
	if(flag==0)
	cout<<"element not found";
}
void linearsearch(int arr[],int n,int m)
{
	int i=0,flag=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==m)
		{
			cout<<"\nelement found at pos "<<i+1;
			flag++;
		
		}
	}
	if(flag==0)
	{
		cout<<"element not found";
	}
}
//calling linear search function
void linear()
{
	int arr[100],n,i,m;
	cout<<"\n how many elements";
	cin>>n;
	cout<<"\nenter elements \n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nwhich data you have to search ";
	cin>>m;
	linearsearch(arr,n,m);
}
//calling binary search 
void binsearch()
{
	int arr[100],n,i,m;
	cout<<"\n how many elements";
	cin>>n;
	cout<<"\nenter elements in sorted manner(ascending only)\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nwhich data you have to search ";
	cin>>m;
	checkorder(arr,n);
	binarysearch(arr,n,m);
}
//calling for binary recursion function
void binrec()
{
	int arr[100],n,i,m,b=0;
	cout<<"\n how many elements";
	cin>>n;
	cout<<"\nenter elements in sorted manner(ascending only)\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nwhich data you have to search ";
	cin>>m;
	checkorder(arr,n);
b=binaryrecursion(arr,0,n-1,m);
if(b==-1)
cout<<"\nthe element is not present in array\n";
else
cout<<"element found at position "<<b+1;
}
main()
{int x;
	cout<<"enter your choice  \n1.linear search\n2.binary search (linear)\n3.binary search(recursion)";
	cin>>x;
	if(x==1)
	linear();
	if(x==2)
	binsearch();
	if(x==3)
	binrec();
}

