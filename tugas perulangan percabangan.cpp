#include <iostream.h>
#include <conio.h>
#include <cstring.h>

int main()
{
//variabel untuk program login
int i;
string user,pass ;
//variabel untuk program toko buku
char password[12],kode_barang,buku[12],bonus,beli,lagi, yt,ch;
float total_bayar,jumlah_beli,total_beli,potongan,harga,ppn;

cout << "\n=====================================\n";
cout << "Selamat Datang di Form Login Karyawan \n";
cout << "-------------------------------------\n";
cout <<endl;
    for (i=1; i<=3; i++) {  //perulangan login 3x
       cout << "Username : "; cin >> user;
       cout << "Password : "; cin >> pass;
       if (user == "admin" && pass == "12345")
       {
//program toko buku halifi
kembali:
clrscr();
cout<<"\n\n";
cout<<"\t *** TOKO BUKU HALIFI *** \n";
cout<<"\t    JL.Keadilan  No.16 \n";
cout<< "------------------------------------";
cout<<"\nMasukkan Kode Buku [1|2|3]  : ";cin>>kode_barang;
cout<<"Jumlah Pembelian Buku Anda  : ";cin>>jumlah_beli;

clrscr();

cout<<"\n ";
cout<<"\t *** TOKO BUKU HALIFI *** \n";
cout<<"\t    JL.Keadilan  No.16 \n";
cout<<" -------------------------------------------";
cout<<""<<endl;

cout<<" Nama Buku			:" << buku;

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
         return 0;
      }
      else {

         cout << "\n\nMaaf Username & Password anda masukan salah.\n\n";
      }
   }
   while (i <= 3);
   cout << "=======================================\n";
   cout << "-------Anda telah gagal login 3x------.\n";
   cout << "Silahkan Hubungi Admin Toko Buku Hilfi.\n";
   cout << "\n Press anykey to Exit.\n";

   getch();
}
