#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main ()
{
char kode_kelas,anda,nama_kelas[20],beli,lagi, yt;
float total_bayar,jumlah_beli,total_beli,potongan,harga,ppn;
kembali:

clrscr();

cout<<""<<endl;
cout<<" Masukan Nama Anda			  : ";cin>>anda;
cout<<" Masukkan Kode Kelas [1|2|3]  : ";cin>>kode_kelas;

clrscr();

cout<<"\n ";
cout<<"\t *** Bina Sarana Informatika *** \n";
cout<<"\t    Bumi Serpong Damai";
cout<<"\t    Jadwal Kuliah";
cout<<" -------------------------------------------";
cout<<""<<endl;

cout<<" Nama 			: " << anda;

switch(kode_barang)
 {
  case ('1') :
      {
      cout<<" Sukses Belajar Borland C++"<<buku;
      harga= 50000*jumlah_beli ;
      }
      break;
  case ('2') :
      {
      cout<<" Kunci Pribadi Yang Sukses"<<buku;
      harga= 35000*jumlah_beli;
      }
      break;
  case ('3') :
      {
      cout<<" Mencari Mutiara Didasar Hati"<<buku;
      harga= 45000*jumlah_beli;
      }
      break;
 }
cout<<endl;


cout<<" Harga Buku			: Rp."<<harga<<endl;
    if (jumlah_beli >5)
  			{potongan = 0.1*harga;}
	else{potongan= 0;}
cout<<" Potongan			: Rp."<<potongan<<endl;
cout<<" Bonus				:"<<bonus;
if (jumlah_beli >5)
  			{cout<<"Note Book"<<bonus;}
   else	{cout<<"Maaf Tidak Dapat Bonus"<<bonus;}
cout<<endl;

cout<<" Total Harga			: Rp."<<harga<<endl;
ppn= harga*0.1;
cout<<" PPN 10%			: Rp."<<ppn<<endl;
total_bayar= harga-potongan+ppn;
cout<<" Total Bayar			: Rp."<<total_bayar<<endl;
cout<<" \n ";
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
