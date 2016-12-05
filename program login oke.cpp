#include <conio.h>
#include <iostream>
#include <stdio.h>
main ()
{
char user[5],pass[7],yt;
user='001';
pass='admin';
login:
clrscr();
cout <<"\t Login ";
cout <<"Masukan Username :";cin>>user;


if(user=='001')
    {
    {go to menu; }
    else
    {go to login;}
    }
cout <<"\nMasukan Password :";cin>>pass;

if(pass=='admin')
    {
    {go to menu; }
    else
    {go to login;}
    }

menu:
cout <<"\t****** Menu Utama ******"<<endl;
getch ();
}

