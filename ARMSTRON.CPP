#include<iostream.h>
#include<conio.h>
class arm
{
	private:
		int n,rev,rem,temp;
	public:
	void get();
	void cal();
	void put();
};
void arm::get()
{
	cout<<"\nenter the number:\t";
	cin>>n;
}
void arm::cal()
{
rev=0;
temp=n;
while(n!=0)
{
rem=n%10;
rev=rev+rem*rem*rem;
n=n/10;
}
}
void arm::put()
{
if(temp==rev)
{
cout<<"\n number is armstrong";
}
else
{
cout<<"\n number is not armstrong";
}
}
void main()
{
clrscr();
arm a1;
a1.get();
a1.cal();
a1.put();
getch();
}