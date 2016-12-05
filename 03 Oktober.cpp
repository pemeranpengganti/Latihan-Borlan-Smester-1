#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
float t,a,uts,uas,n_akhir;
cout <<"Masukan Nilai Mahasiswa"<<endl;
cout <<"***********************"<<endl;
cout <<"Masukan Nilai Tugas: "; cin>>t;
cout <<"Masukan Nilai Absen: "; cin>>a;
cout <<"Masukan Nilai UTS : "; cin>>uts;
cout <<"Masukan Nilai UAS : "; cin>>uas;

n_akhir=(0.1*t)+(0.2*a)+(0.3*uts)+(0.4*uas);
cout <<"============== HASIL AKHIR============="<<endl;
cout <<" Nilai Akhir Anda adalah "<<n_akhir;

getch();
}
