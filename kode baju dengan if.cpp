#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char kode,ukuran,merk[5];
long harga=0;

clrscr();
cout <<"Kode Baju :";cin>>kode;
cout <<"Ukuran		:";cin>>ukuran;
if (kode=='1')
	{
   strcpy(merk,"H&F");
   if(ukuran=='S'||ukuran=='s')
   harga=45000;
   else
   harga=60000;
   }
else if(kode=='2')
	{
   strcpy(merk,"Adidas");
   if(ukuran=='S'||ukuran=='s')
   harga=65000;
   else
   harga=75000;
   }
   else
   cout <<"Salah Kode Baju"<<endl;

cout <<"-----------------------"<<endl;
cout<<"Merk Baju  :"<<merk<<endl;
cout<<"Harga Baju :"<<harga<<endl;
getch();
}