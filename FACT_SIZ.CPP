//factorial program with data size increase(5/3/2022)

#include<iostream.h>
#include<conio.h>
void main()
{
	unsigned long int fact=1;
	int no,i;
	clrscr();

	cout<<"enter number";
	cin>>no;
	for(i=1;i<=no;i++)
	{
	      fact=fact*i;
	}
	cout<<"factorial of number => "<<fact;
	getch();
}