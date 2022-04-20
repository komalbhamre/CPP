#include<iostream.h>
#include<conio.h>
class art
{
	protected:
		    char name[20];
		    int mark;
	public:
		    void geta()
	{
	cout<<"\nenter the name of art student:\n";
	cin>>name;
	cout<<"\n enter the mark of art student:\n";
	cin>>mark;
	}
};
class science:public art
{
	protected:
		char name 1[20];
		int mark 1;
	public:
		void get b()
		{
		cout<<"\n enter the name of science student:\n";
		cin>>mark1;
		cout<<"\n enter the mark of science student:\n";
		cin>>mark1;
		}
	};
	class comma
	{
	protected:
		char name2[20];
		int mark2;
	public:
		void getc()
		{
		cout<<"\n enter the name of commerce student:\n";
		cin>>mark2;
		cout<<"\n enter the mark of commerce student:\n";
		cin>>mark2;
		}
	};
	class result:public science,public comma
	{
	public:
		void display();
	};
	void result::display()
	{
	get a();
	get b();
	get c();
	cout<<"\n name of art student:"<<name;
	cout<<"\n mark of art student:"<<mark;
	cout<<"\n name of science student:"<<name1;
	cout<<"\n mark of science student:"<<name1;
	cout<<"\n name of commerce student:"<<name2;
	cout<<"\n mark of commerce student:"<<name2;
	getch();
	}
	void main()
	{
	clrscr();
	result r;
	r.display();
	getch();
	}