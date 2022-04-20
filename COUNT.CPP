#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
class count
{
		char name[25];
		int i,vowle,space,n,l;
	public:void get();
		void call();
};
void count::get()
{
	cout<<"\tEnter string to count length space and vowle\n\t";
	gets(name);
}
void count::call()
{
	vowle=0;
	space=0;
	n=0;
	l=strlen(name);
	for(i=0;i<l;i++)
	{
		switch(name[i])
		{
			case'a':vowle++;
				break;
			case'e':vowle++;
				break;
			case'i':vowle++;
				break;
			case'o':vowle++;
				break;
			case'u':vowle++;
				break;
			case' ':space++;
				break;
				default:n++;
		}
	}
	cout<<"\n vowel in sentence are:"<<vowle;
	cout<<"\n space in sentence are:"<<space;
	cout<<"\n consonant in sentence are:"<<n;
	cout<<"\n length in sentence are:"<<l;
}
void main()
{
	clrscr();
	count c;
	c.get();
	c.call();
	getch();
}




