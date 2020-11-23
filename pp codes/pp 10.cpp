#include<iostream>
#include<string.h>
using namespace std;

//base class ittem stores tittle and price of item
//anoter base class sale holds sales figures of 3 months
//derive 2 classes hwitem and switem from both sales and item 
//each class has its own get data and displaydata func

class item
{
private:char name[30];
     	int price;

public: /*item()
{strcpy(name,"");
price=0;
}*/
		void getdataitem()
		{fflush(stdin);
			cout<<"\n enter name of product ";
			gets(name);
			cout<<"\n enter price of product ";
			cin>>price;
		}
		void displaydataitem()
		{
			cout<<"\n name : "<<name<<"\n price: "<<price;
			
		}
		int returnprice()
		{return price;
		}
};
class sale
{
private:int totalsale;
		int item_sold;
public:	/*sale()
{
	totalsale=0;
	item_sold=0;
}*/
		void getdatasale()
		{
			cout<<"\n enter number of items sold in 3 months ";
			cin>>item_sold;
		}


		void displaydatasale()
		{
			cout<<"\n items sold : "<<item_sold;
			
		}
		int returnitem()
		{return item_sold;
		}
	
};

class hwitem:public item,public sale
{
private: int totalcost;

public: void getdatahw()
{item it;
sale sa;
it.getdataitem();
sa.getdatasale();
	totalcost=returnprice()*returnitem();
}
		void displaydata()
		{
			cout<<"\n The total cost is "<<totalcost;
		}
		
		int returncost()
		{
			return totalcost;
		}
};

class switem:public item,public sale,public hwitem
{private:int totalcost;
	public:
		void getdata()
		{
			//totalcost=returncost();
		}
		
		void displaydatasw()
		{item it;
		sale sa;
			it.item::displaydataitem();
			sa.sale::displaydatasale();
			//displaydata();
			
		}
};

main()
{
	switem itemsw;
	hwitem itemhw;
	
	itemhw.getdatahw();
	itemsw.displaydatasw();
	
}

	
