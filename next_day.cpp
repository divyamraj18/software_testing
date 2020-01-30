#include<iostream>
using namespace std;
int main()
{
	int day,month,year;
	cout<<"enter date in dd mm yyyy format";
	cin>>day>>month>>year;
	while((day<1||day>31)||(month<1||month>12)||(year<1800||year>2020))
	{
		cout<<"enter valid date in dd mm yyyy format";
		cin>>day>>month>>year;
	}
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		maxdays=31;
	}
	else if(month==4||month==6||month==9||month==11)
	{
		maxdays=30;
	}
	else{
		if((year%4==0&&year%100!=0)&&year%400==0)
			maxdays=29;
		else
			maxdays=28;
	}

return 0;
}
