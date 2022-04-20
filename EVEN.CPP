#include<iostream.h>
#include<conio.h>
 void main()
{
  int x;
  clrscr();
  cout<<"enter the number:";
  cin>>x;
if(x%2==0)
{
  goto even;
}
else
{
  goto odd;
}
  even:cout<<"\n the number is even:"<<x;
getch();
return;
  odd:cout<<"\n the number is odd:"<<x;
getch();
}