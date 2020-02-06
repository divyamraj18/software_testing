#include<iostream>
using namespace std;
int maxdays(int month,int year)
{
	int max=-1;
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		max=31;
	}
	else if(month==4||month==6||month==9||month==11)
	{
		max=30;
	}
	else{
		if((year%4==0&&year%100!=0)||year%400==0)
			max=29;
		else
			max=28;
	}
	return max;
}

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
	day=day+1;
	if(day>maxdays(month,year))
	{
		day=1;
		month=month+1;
	}
	if(month>12)
	{
		month=1;
		year=year+1;
	}
	cout<<day<<"-"<<month<<"-"<<year<<endl;

	
	
	
return 0;
}
