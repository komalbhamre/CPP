#include<iostream.h>
#include<conio.h>
int max(int x,int y,int z);
void main()
{
	int a,b,c,d;
	clrscr();
	cout<<"Enter the three no.:\n";
	cin>>a>>b>>c;
	d=max(a,b,c);
	cout<<"The maximum number is:\n"<<d;
	getch();
}
int max(int x,int y,int z)
{
	if(x>y&&x>z)
	{
		return x;
	}
	else if(y>z&&y>z)
	{
		return y;
	}
	else
	{
		return z;
	}
}