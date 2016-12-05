#include <conio.h>
#include <iostream>
#include <stdio.h>
main ()
{
char user,pass,yt;
user=001;
pass=admin;
kembali:
clrscr();
cout <<"\t Login ";
cout <<"Masukan Username :";cin>>user;
cout <<"\nMasukan Password :";cin>>pass;

if(yt=='Y' || yt=='y')
{goto kembali;}
if(yt=='T' || yt=='t')

{goto menu;}

menu:
cout <<"\t****** Menu Utama ******"<<endl;
getch ();
}

