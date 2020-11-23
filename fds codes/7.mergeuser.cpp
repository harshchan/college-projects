#include<conio.h>
#include<iostream>
using namespace std;
int n;
int c=1;
void printArray(int* ,int);
void merge(int arr[], int l, int m, int r)
{	int n1 = m - l + 1;
	int n2 = r - m;
	
	int L[n1], R[n2];
	for(int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for(int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
	int i = 0; 
	int j = 0; 
	int k = l;
	
	while (i < n1 && j < n2)
	{if (L[i] <= R[j]) 
		{arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	 
	while (i < n1) 
	{arr[k] = L[i];
		i++;
		k++;
	}

	
	while (j < n2)
	{arr[k] = R[j];
		j++;
		k++;
	}
	cout<<"\n pass  "<<c<<"  -->  ";
	printArray(arr,n);
	c++;
}


void mergeSort(int arr[], int l, int r)
{//printarray(arr,r);
	if (l < r)
	{
	int m = l + (r - l) / 2;
	mergeSort(arr, l, m);
	mergeSort(arr, m + 1, r);
	merge(arr, l, m, r);
	}
}

 
void printArray(int A[], int size)
{
for(int i = 0; i < size; i++)
cout << A[i] << "  ";
}


int main()
{
	int arr[10];
	
cout<<"\n Enter the number of elements ";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<"\n Enter elements  ";
cin>>arr[i];
}
	cout << "\n\n Given array is    -->";
	printArray(arr,n);
	cout<<"\n";

	mergeSort(arr, 0,n-1);

	cout << "\n\n\n Sorted array is  --> ";
	printArray(arr,n);
	return 0;
}



