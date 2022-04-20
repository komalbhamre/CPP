#include<iostream.h>
#include<conio.h>
class emp
{
	private:
	char name[20],dept[40],add[40],gen[7];
	int sal,age;
	public:
	void get();
	void put();
};
	void emp::get()
{
	cout<<"name of employee\n";
	cin>>name;
	cout<<"name of deparment\n";
	cin>>dept;
	cout<<"enter the address of employee\n";
	cin>>add;
	cout<<"salary of employee\n";
	cin>>sal;
	cout<<"age of employee\n";
	cin>>age;
	cout<<"enter gender of employee\n";
	cin>>gen;
	cout<<"\n\n";
}
	void emp::put()
{
	cout<<"\nname\t"<<name<<"\ndeparment\t"<<dept<<"\nage\t"<<"\naddress\t"<<add<<"\ns alary\t"<<sal<<"\ngender\t"<<gen;
}
	void main()
{
	int i,no;
	cout<<"enter number of employee";
	cin>>no;
	emp e[no];
	cout<<"enter detail of three employee\n";
	emp e[no];
	cout<<"enter detail of three employee\n";
	emp e[3];
	fori=0;i<3;i++)
{
	e[i].get();
	clrscr();
}
	cout<<"\n\tdetails of employees\n\n";
	for(i=0;i<3;i++)
{
	e[i].put();
	cout<<"\n";
}
	getch();
}

