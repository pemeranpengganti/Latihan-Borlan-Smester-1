#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main ()
{
char nama_buku;
int kode,jumlah_buku,harga,ppn,grand_total;

clrscr();
cout <<"Masukan Kode Buku 1|2|3 :";gets(kode);
cout <<"Jumlah Pembelian		  :";gets(jumlah_buku);
cout <<'\n';
switch (kode)
		{
		case=1:
      nama_buku,"Sukses Belajar";
		harga = 50000;
		break;
      case=2:
      nama_buku,"Kunci Pribadi";
		harga = 35000;
		break;
      case=3:
      nama_buku,"Mencari Mutiara";
		harga = 45000;
		break;
default:
			cout <<"Anda Salah Memasukan Kode";
		}

if		(strcmp(jumlah_buku>5)
{
		strcpy(potongan=harga*10/100);
      strcpy(bonus,"Bonus Notebook");
}
else
{strcpy(jumlah_buku,"Tidak Dapat Bonus");}

cout <<'\n';
cout <<"Nama Buku		:";cin>>nama_buku;
cout <<"Harga Buku	:";cin>>harga;
cout <<"Potongan		:";cin>>potongan;
cout <<"Bonus			:";cin>>bonus;

getch();
}
