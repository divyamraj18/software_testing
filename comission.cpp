#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int lock;
	int stock;
	int barrel;
	int lock_p=45;
	int stock_p=30;
	int barrel_p=25;
	float comission;
	cout<<"enter the fesible values of lock stock and barrel"<<endl;
	cin>>lock>>stock>>barrel;
	while((lock<1||lock>70)||(stock<1||stock>80)||(barrel<1||barrel>90))
	{
		cout<<"enter the fesible values of lock stock and barrel"<<endl;
		cin>>lock>>stock>>barrel;
	}
	int total_sales=lock*lock_p+stock*stock_p+barrel*barrel_p;
	cout<<total_sales<<endl;
	if(total_sales<=1000)
	{
		comission=0.1*total_sales;
	}
	else if(total_sales>1000&&total_sales<=1800)
	{
		comission=0.1*1000+.15*(total_sales-1000);
	}
	else
	{
		comission=0.1*1000+0.15*800+.2*(total_sales-1800);
	}
	cout<<comission<<endl;
return 0;
}
