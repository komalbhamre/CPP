#include<iostream.h>
#include<conio.h>
class a
{
	public:
		void show()
		{
			cout<<"\n base class";
		}
};
class b:public a
{
	public:
	void show()
	{
		cout<<"\nDerived class";
	}
};
void main()
{
	clrscr();
	A c;
	a.show();
	c.show();
	c.A::show();
	getch();
}