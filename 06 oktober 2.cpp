#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
float a,b,c,d,e,f,x,y;
clrscr();
cout <<"Relasi Bahasa C++"<<endl;
x=7;
y=3;
a=x==y;
b=x!=y;
c=x>y;
d=x<y;
e=x>=y;
f=x<=y;
cout <<endl;
cout <<"Apakah "<<x<<" == "<<y<<" = "<<a<<endl;
cout <<"Apakah "<<x<<" != "<<y<<" = "<<b<<endl;
cout <<"Apakah "<<x<<" > "<<y<<" = "<<c<<endl;
cout <<"Apakah "<<x<<" < "<<y<<" = "<<d<<endl;
cout <<"Apakah "<<x<<" >= "<<y<<" = "<<e<<endl;
cout <<"Apakah "<<x<<" <= "<<y<<" = "<<f<<endl;
getch();
}
