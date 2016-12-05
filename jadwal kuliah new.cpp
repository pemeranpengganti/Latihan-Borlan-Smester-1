#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main ()
{
char anda[20],kode_kelas,kode_hari,nama_kelas,hari_r,hari_k,lagi,yt;
atas:
clrscr();
cout<<""<<endl;
cout<<" Masukan Nama Anda	:";cin>>anda;
cout<<" Masukan Kelas Anda	R/K:";cin>>kode_kelas;
cout<<" Masukan Hari Kuliah :";cin>>kode_hari;

clrscr();

cout<<" **** Bina Sarana Univerciy ****\n";
cout<<" \t\t Management Informatika \n";
cout<<" \t\t Jadwal Pelajaran \n";
cout<<" -------------------------------------------";
cout<<""<<endl;

cout << "Nama anda	:"<<anda;

switch (kode_kelas)
	{
    case 'R':
    case 'r':
    	cout<<" Kelas Reguler "<<nama_kelas;
      hari_r;
      break;
    case 'K':
    case 'k':
    	cout<<" Kelas Karyawan "<<nama_kelas;
      hari_k;
      break;

default:
      cout <<"Anda Salah Memasukan Kode Kelas";
    }
cout << "Kelas			:"<<nama_kelas;

    
cout << "Hari			:"<<kode_hari;
    switch (kode_hari)
    {
    cout<<" Hari "<<hari_r;
      	{
      	case ('1'):
      	cout<<"Senin";
         cout<<"\n";
         cout<<"\n 08.00 - 10.00";
         cout<<"\n Dasar-Dasar Akuntansi";
         cout<<"\n";
         cout<<"\n 10.00 - 12.00";
         cout<<"\n Algoritma dan Pemrograman";
         cout<<"\n";
         cout<<"\n 13.00 - 15.00";
         cout<<"\n Bahasa Inggris";
         break;
         case ('2'):
      	cout<<"Selasa";
         cout<<"\n";
         cout<<"\n 08.00 - 10.00";
         cout<<"\n Logika dan Algoritma";
         cout<<"\n";
         cout<<"\n 10.00 - 12.00";
         cout<<"\n Kewirausahaan";
         break;
         case ('3'):
      	cout<<"Rabu";
         cout<<"\n";
         cout<<"\n Libur";
         break;
         case ('4'):
      	cout<<"Kamis";
         cout<<"\n";
         cout<<"\n Libur";
         break;
         case ('5'):
      	cout<<"Jumat";
         cout<<"\n";
         cout<<"\n 08.00 - 10.00";
         cout<<"\n Algoritma dan Pemrograman";
         cout<<"\n";
         cout<<"\n 10.00 - 12.00";
         cout<<"\n PTIK - Kewirausahaan";
         case ('6'):
      	cout<<"Sabtu";
         cout<<"\n";
         cout<<"\n Libur";
         break;
         case ('7'):
      	cout<<"Minggu";
         cout<<"\n";
         cout<<"\n Libur";
         break;
         }
      }
      break;

      {cout<<" Hari "<<hari_k;
      	{
      	case ('1'):
      	cout<<"Senin";
         cout<<"\n";
         cout<<"\n 17.00 - 18.30";
         cout<<"\n Algoritma dan Pemrograman";
         cout<<"\n";
         cout<<"\n 19.00 - 21.00";
         cout<<"\n Kewirausahaan";
         break;
         case ('2'):
      	cout<<"Selasa";
         cout<<"\n";
         cout<<"\n 16.00 - 18.00";
         cout<<"\n PTIK  E-Learning";
         break;
         case ('3'):
      	cout<<"Rabu";
         cout<<"\n";
         cout<<"\n 17.00 - 20.00";
         cout<<"\n Dasar-Dasar Akuntansi";
         break;
         case ('4'):
      	cout<<"Kamis";
         cout<<"\n";
         cout<<"\n Algoritma dan Pemrograman";
         break;
         case ('5'):
      	cout<<"Jumat";
         cout<<"\n";
         cout<<"\n 17.00 - 18.30";
         cout<<"\n Logika dan Algoritma";
         cout<<"\n";
         cout<<"\n 19.00 - 21.00";
         cout<<"\n Bahasa Inggris";
         case ('6'):
      	cout<<"Sabtu";
         cout<<"\n";
         cout<<"\n Libur";
         break;
         case ('7'):
      	cout<<"Minggu";
         cout<<"\n";
         cout<<"\n Libur";
         break;
         }

    default: cout <<"Anda Salah Memasukan Kode Hari";
    }



cout <<'\n';
cout <<"\nIngin Pilih Lagi [Y/T]:";
lagi = getche();
if (lagi == 'Y'|| lagi== 'y')
			goto atas;
getch();
}

