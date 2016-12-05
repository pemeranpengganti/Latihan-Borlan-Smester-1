#include<stdio.h>
#include<conio.h>
#include<iostream.h>
main( )
{
int a;
cout <<"\t\t\t\t LAtihan Perulangan C++ dengan FOR "<<endl;
cout <<"====================================================="<<endl;
cout <<"Menampilkan deret bilangan 1 sampai dengan 10 : ";
for (a=0;a<=10;a++)
{
cout <<a;
}
cout <<"\nMenampilkan deret bilangan genap sampai dengan 10 : ";
for (a=0;a<=10;a+=2)
{
cout <<a;
}
cout <<"\nMenampilkan deret bilangan ganjil sampai dengan 10 : ";
for (a=1;a<=10;a+=2)
{
cout <<a;
}
getch();
}
