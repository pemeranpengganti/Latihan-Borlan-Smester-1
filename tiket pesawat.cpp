#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char kode[8],kelas,jml_tkt,N_Pesawat[15];
long harga,total=0;

clrscr();
cout <<"		  Program Tiket Pesawat 		"<<endl;
cout <<"		   Jakarta - Malaysia  		"<<endl;
cout <<"-------------------------------------------"<<endl;
cout <<endl;
cout <<endl;
cout <<"Masukan Kode Pesawat [MPT/GRD/BTV] :";cin>>kode;
cout <<"Kelas Pesawat [1/2/3]:"<<endl;
cout <<"			1.Executive"<<endl;
cout <<"			2.Bisnis"<<endl;
cout <<"			3.Ekonomi"<<endl;
cout <<"Pilih kelas [1/2/3] :";cin>>kelas;



if (kode=="MPT"||kode=="mpt")
	{
   strcpy(N_Pesawat,"Merpati");
   if(kelas=='1')
   harga=1500000;
   else if(kelas=='2')
   harga=900000;
   else if(kelas=='3')
   harga=500000;
   }
else if(kode=="GRD"||kode=="grd")
	{
   strcpy(N_Pesawat,"Garuda");
   if(kelas=='1')
   harga=1200000;
   else if(kelas=='2')
   harga=800000;
   else if(kelas=='3')
   harga=400000;
   }
else if(kode=="BTV"||kode=="btv")
	{
   strcpy(N_Pesawat,"Batavia");
   if(kelas=='1')
   harga=1000000;
   else if(kelas=='2')
   harga=700000;
   else if(kelas=='3')
   harga=300000;
   }
   else
   cout <<"Salah Kode Pesawat"<<endl;

cout<<"Nama Pesawat  :"<<N_Pesawat<<endl;
cout<<"Harga Tiket	:"<<harga<<endl;
cout<<"Jumlah Tiket	:";cin>>jml_tkt;
cout<<"Total Bayar	:";cin>>total;
getch();
}