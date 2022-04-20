//program to demonstrate encapculationn   or
//program to demonstrate object and class  or
//arrey of object

#include<iostream.h>
#include<conio.h>
class student
{
   private:
	    int rollno;
	    char sname[22];
	    char sclass[22];
   public:
	    void get();
	    void put();
};

void student ::get()
{
     cout<<"enter roll no =>";
     cin>>rollno;
     cout<<"enter name =>";
     cin>>sname;
     cout<<"enter class =>";
     cin>>sclass;

}

void student ::put()
{
     cout<<rollno<<"\t\t"<<sname<<"\t\t"<<sclass<<endl;
}

void main()
{
     clrscr();
     student s[5];
     int i;

      for(i=0;i<5;i++)
     {
	 s[i].get();
     }

     cout<<"***************************************"<<endl;
     cout<<"rollno\t\tname\t\tclass"<<endl;
     cout<<"***************************************"<<endl;

       for(i=0;i<5;i++)
     {
	 s[i].put();
     }

     getch();
}
