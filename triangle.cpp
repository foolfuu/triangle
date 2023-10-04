#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	long a,
		 b,
		 c;
	
	cout<<"side 1 ";
	cin>>a;
	cout<<endl;
	cout<<"side 2 ";
	cin>>b;
	cout<<endl;
	cout<<"side 3 ";
	cin>>c;
	cout<<endl;
	
	long mode_1,
		 mode_2,
		 mode_3;
	
	
	//Pythagorean modes
	mode_1 = (a*a) + (b*b);
	mode_2 = (a*a) + (c*c);
	mode_3 = (b*b) + (c*c);
	
	if( (c*c) == mode_1 )
	{
		cout<<"Its side is 90 degrees"<<endl;
	}
	
	else if( (b*b) == mode_2 )
	{
		cout<<"Its side is 90 degrees"<<endl;
	}
	
	else if( (a*a) == mode_3 )
	{
		cout<<"Its side is 90 degrees"<<endl;
	}
	
	else if(a == b or a == c or b == c)
	{
		cout<<"It has 2 equal sides"<<endl;
	}
	
	else if(a == b and a == c and b == c)
	{
		cout<<"It has 3 equal sides"<<endl;
	}
	
	else
	{
		cout<<"It has 0 equal sides"<<endl;
	}
	
	getch();
	return 1;
}