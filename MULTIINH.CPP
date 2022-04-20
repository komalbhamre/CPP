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
    cout<<"\n enter the name of art student:\n";
    cin>>name;
    cout<<"\n enter the marks of student:\n";
    cin>>mark;
    }
};
class science
{
  protected:
    char name1[20];
     int mark1;
  public:
  void getdata()
  {
  cout<<"\n enter the name of  science student:";
 cin>>name1;
  cout<<"\n enter the mark of science student:";
  cin>>mark1;
  }
};
class result:public art,public science
{
 public:
 void display()
 {
    cout<<"\n name of art student:\t"<<name;
    cout<<"\n mark of art student:\t"<<mark;
    cout<<"\n name of science student:\t"<<name1;
    cout<<"\n mark of science student:\t"<<mark1;
 }
 };
 void main()
 {
 clrscr();
 result r;
 r.get();
 r.getdata();
 r.display();
 getch();
 }