#include<iostream.h>
#include<conio.h>
int adult,child,handicap,citizen,fair;
void person()
{
	cout<<"\n enter no of Adult:";
	cin>>adult;
	cout<<"\n enter no Childs:";
	cin>>child;
	cout<<"\n enter no of Handicap:";
	cin>>handicap;
	cout<<"\n enter no of citizen:";
	cin>>citizen;
}
void main()
{
	float sum=0;
	sum=(fair*adult)+(fair/2*child)*((33.33*fair)/100*handicap)+(fair/2*citizen);
	adult=(fair*adult);
	child=(fair/2*child);
	handicap=((33.33*fair)/100*handicap);
	citizen=(fair*citizen);
	cout<<"\n The fair is"<<fair;
	cout<<"\n\t"<<adult;
	cout<<"\n\t"<<child;
	cout<<"\n\t"<<handicap;
	cout<<"\n\t"<<citizen;
	cout<<"\n\t total"<<sum;
}
void add()
{
	int city,mumbai,pune,dhule,jalgoan;
	clrscr();
	cout<<"\n Press number for city:\n\tmumbai\n\tpune\n\tdhule\n\tjalgoan";
	cin>>city;
	switch(city)
	{
		case 1:
		cout<<"\nTo go mumbai fair=450\n\tEnter pasengers list:";
		person();
		mumbai=450;
		fair=mumbai;
		add();
		break;
	  case 2:
	       cout<<"\n To go pune fair=400\n\tEnter pasenger list:";
	       person();
	       mumbai=400;
	       fair=pune;
	       add();
	       break;
	  case 3:
		 cout<<"\n To go dhule fair=60\n\tEnter pasenger list:";
	       person();
	       mumbai=60;
	       fair=dhule;
	       add();
	       break;
	  case 4:
	       cout<<"\n To go jalgoan fair=450\n\tEnter pasenger list:";
	       person();
	       mumbai=120;
	       fair=jalgoan;
	       add();
	       break;
	  default:
		cout<<"\nEnter correct no:\t";
		break;
	  }
	getch();
}