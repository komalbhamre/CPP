#include<iostream.h>
#include<conio.h>
class art
{
      protected:
	char name[20];
	int mark;
      public:
	void get()
	{
	cout<<"\nenter the name of student";
	cin>>name;
	cout<<"\n enetr the mark of student";
	cin>>mark;
	}
      };
      class result:public art
      {
      public:
	void display()
	{
	cout<<"\n name of student"<<name;
	cout<<"\n mark of student"<<mark;
	}
      };
      void main()
      {
	clrscr();
	result r;
	r.get();r.display();
	getch();
      }