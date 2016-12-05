#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
    float kode, harga, jumlah, total, bayar, kembali,yt;

    awal:
   clrscr();

   cout<<endl;
   cout<<endl;
   cout<<"    \t\tWARUNG NASI UDUK"<<endl;
   cout<<"       \t\tBSD"<<endl;
   cout<<"\t\t**************************"<<endl;
   cout<<" "<<endl;
   cout<<"\t\tPaket"<<endl;
   cout<<"\t\t1. Nasi, Ayam bakar, es teh"<<endl;
   cout<<"\t\t2. Nasi, Iga bakar, es jeruk"<<endl;
   cout<<"\t\t3. Nasi, Lele bakar, es jeruk"<<endl;
   cout<<"\t\t=============================="<<endl;
   cout<<"\t\tKode paket [1/2/3]    = ";
   cin>>kode;

   if (kode==1)
   {
       harga=25000;
   }
    else if(kode==2)
   {
       harga=35000;
   }
   else if(kode==3)
   {
       harga=20000;
   }
   else
   {
       harga=0;
   }
   cout<<endl;
   cout<<"\t\tHarga         = "<<harga<<endl;
   cout<<"\t\tJumlah Beli    = ";
   cin>>jumlah;
   total=harga*jumlah;
   cout<<"\t\tTotal Harga    = "<<total<<endl;
   cout<<"\t\tbayar        = ";
   cin>>bayar;
   kembali=bayar-total;
   cout<<"\t\tKembali        = "<<kembali;
   cout<<" \n ";
	cout<<"\t\t-----------------------------------"<<endl;
	cout<<"\t\t\t **** TERIMA KASIH ****        ";
	cout<<endl;
   cout<<endl;
	cout<<" \t\tApa Mau Input Data Lagi ? [Y/T] : ";cin>>yt;
	if (yt == 'Y' || yt =='y')
   goto awal;
     getch();
}