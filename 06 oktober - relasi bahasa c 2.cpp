#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
int a,b,c,d,e,f,x,y;
cout <<"Masakan Kondisi 1 :";cin>>x;
cout <<"Masakan Kondisi 1 :";cin>>y;
cout <<endl;
a=x==y;
b=x!=y;
c=x>y;
d=x<y;
e=x>=y;
f=x<=y;
cout <<"Relasi Bahasa C++"<<endl;
cout <<endl;
cout <<"Apakah "<<x<<" == "<<y<<" = "<<a<<endl;
cout <<"Apakah "<<x<<" != "<<y<<" = "<<b<<endl;
cout <<"Apakah "<<x<<" > "<<y<<" = "<<c<<endl;
cout <<"Apakah "<<x<<" < "<<y<<" = "<<d<<endl;
cout <<"Apakah "<<x<<" >= "<<y<<" = "<<e<<endl;
cout <<"Apakah "<<x<<" <= "<<y<<" = "<<f<<endl;
getch();
}
