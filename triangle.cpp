#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"enter the three sides of triangle"<<endl;
	cin>>a>>b>>c;
	while((a<1||a>10)||(b<1||b>10)||(c<1||c>10))
	{
		cout<<"enter the three sides of triangle"<<endl;
		cin>>a>>b>>c;
	}
	if((a+b>c)&&(b+c>a)&&(a+c>b))
	{
		if(a==b&&b==c)
			cout<<"equilateral triangle"<<endl;
		if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
			cout<<"right angled triangle"<<endl;
		else if(a==b&&b!=c||b==c&&c!=a||a==c&&c!=b)
			//cout<<"=c||b==c&&c!=a||a==c&&c!=b)
			cout<<"isoscales triangle"<<endl;
		else{
			int max;
			cout<<"scalene triangle"<<endl;
		}	
	}
	else
	{
		cout<<"its not a triangle"<<endl;
	}
return 0;
}
