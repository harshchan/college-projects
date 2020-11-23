//pp assignment 5 
/*
student callss to calculate percent of marks obtained by students
variables-prn,name,branch,batch,5 sub8
membaer functions getdata(),displaydata(),calculate perc()*/

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int n,i,b[4]={17,18,19,20};
class student
{
		private:	
            char prn[20];
	        char name[20];
			char branch[10];
			int batch;
			int sub1,sub2,sub3,sub4,sub5;
			
		public:
			void getdata();
			void displaydata();
			float calcperc();
			
}S[100];

void student::getdata()
{int x,y;
fflush(stdin);
	cout<<"\n Enter PRN of student ";
	cin.getline(S[i].prn,20);
	fflush(stdin);
	cout<<"\n Enter Name ";
	cin.getline(S[i].name,100);
	cout<<"\n Choose Branch \n1. Computer Science \n2. Information Technology \n3. Mechanical \n4. Electronics and Telecommunication \n5. Civil \n ";
	cin>>x;
	if(x==1){strcpy(S[i].branch,"CS");}
	else if(x==2){strcpy(S[i].branch,"IT");}
	else if(x==3){strcpy(S[i].branch,"Mech");}
    else if(x==4){strcpy(S[i].branch,"ENTC");}
    else if(x==5){strcpy(S[i].branch,"Civil");}
    else {cout<<"Wrong Input... please enter again ";exit(0);}
    cout<<"\nChoose Batch Year \n1.2017\n2.2018\n3.2019\n4.2020\n";
    cin>>y;
    if(y>4||y<1){cout<<"Wrong Input... please enter again ";exit(0);}
    S[i].batch=b[y-1];
    cout<<"Enter Marks of 5 Subjects";
    cin>>S[i].sub1>>S[i].sub2>>S[i].sub3>>S[i].sub4>>S[i].sub5;
    
}
float student::calcperc()
{float avg;
avg=(S[i].sub1+S[i].sub2+S[i].sub3+S[i].sub4+S[i].sub5)/5;
return (avg);
}

void student::displaydata()
{cout<<"----------------------------"<<endl;  	
    cout<<"PRN  :  "<<S[i].prn<<endl;
	cout<<"Name :  "<<S[i].name<<endl;
	cout<<"Branch :"<<S[i].branch<<endl;
	cout<<"Batch  :"<<S[i].batch<<endl;
	cout<<"Percentage : "<<calcperc()<<endl;
	if(calcperc()>90&&calcperc()<=100)
	cout<<"Grade : A(pass)\n";
    if(calcperc()>80&&calcperc()<=90)
	cout<<"Grade : B(pass)\n ";
	if(calcperc()>70&&calcperc()<=50)
	cout<<"Grade : C(pass)\n";
	if(calcperc()>50&&calcperc()<=33)
	cout<<"Grade : D(just pass)\n";
	if(calcperc()>33&&calcperc()<=0)
	cout<<"Grade not generated(failed)\n";
	
}
menu()
{int x,y,z;
student S[100];
	//cout<<"enter your choice 1.input data \n2.display data";
	cout<<"How Many Records ";
	cin>>n;
	for(i=0;i<n;i++)
	{S[i].getdata();}
	
	for(i=0;i<n;i++)
	{S[i].displaydata();}
	
}
main()
{menu();
}


