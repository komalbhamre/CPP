#include<iostream.h>
#include<conio.h>
class demo
{
	int x;
	public:
		demo()//default
	{
	cout<<"\n\t the constructor with no parameter";
	}
demo(int a)//parameterised
	{
	x=a;
	cout<<"\n\tthe constructor with one parameter x="<<x;
	cout<<"\n\t suare of x is"<<x*x;
	}
demo(int a,int b)//parametrised
	{
	cout<<"\n\tthe constructor with two parameter a="<<a<<"b="<<b;
	cout<<"\n\t addition is a+b="<<a+b;
	}
demo(demo & d)//copy
	{
	cout<<"\n\copy of constuctor is x=d.x="<<d.x;
	x=d.x;
	cout<<"\n\t the constructor is "<<x;
	}
	~demo()
	{
	cout<<"destructor is invoke\n";
	}
};
void main()
{
	clrscr();
	demo d1;
	demo d2 (10);
	demo d5 (d2);
	getch();

}