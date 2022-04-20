#include<iostream.h>
#include<conio.h>
void swap(int &x,int &y);
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter the two no.:\n";
	cin>>a>>b;
	swap(a,b);
	getch();
}
void swap(int &x,int &y)
{
	int a;
	cout<<"\nThe value of x & y before swap is \tx="<<x<<" \ty="<<y;
	a=x;
	x=y;
	y=a;
	cout<<"\nThe value of x & y after swap is \tx="<<x<<" \ty="<<y;

}