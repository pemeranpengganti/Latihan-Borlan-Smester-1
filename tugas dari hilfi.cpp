#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main ()
{
char anda,kode_kelas,kelas[20],bonus,beli,lagi, yt;
float total_bayar;
kembali:

clrscr();

cout<<""<<endl;
cout<<" Masukkan Kode Kelas [1|2|3]  : ";cin>>kode_kelas;
cout<<" Masukan Nama Anda : ";cin>>anda;

clrscr();

cout<<"\n ";
cout<<"\t *** Bina Sarana University *** \n";
cout<<"\t    Management Informatika \n";
cout<<"\t    Jadwal Kuliah \n";
cout<<" -------------------------------------------";
cout<<""<<endl;

cout<<" Nama Buku			: " << kelas;

switch(kode_kelas)
 {
  case ('1') :
      {
      cout<<" Kelas 12.1.A"<<kelas;
      cout<<" Tidak ada Kuliah";
      }
      break;
  case ('2') :
      {
      cout<<" Kelas 12.1.B"<<kelas;
      cout<<" Tidak ada Kuliah";
      }
      break;
  case ('3') :
      {
      cout<<" Kelas 12.1.C"<<kelas;
      cout<<" Tidak ada Kuliah";
      }
      break;
 }
cout<<endl;



cout<<"---------------------------------------------"<<endl;
cout<<"\t **** TERIMA KASIH ****        ";
cout<<endl;
cout<<" Apa Mau Input Data Lagi ? [Y/T] : ";cin>>yt;
cout<<endl;

clrscr();

if(yt=='Y' || yt=='y')

{goto kembali;}

if(yt=='T' || yt=='t')

{goto selesai;}

selesai:

cout<<endl;
cout<<"\t******* Terima Kasih *******"<<endl;
getch();
}
