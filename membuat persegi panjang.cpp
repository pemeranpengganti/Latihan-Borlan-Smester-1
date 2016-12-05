#include <iostream.h>
#include <conio.h>

//gatewan.com -- Wawan Beneran
//MEMBUAT PERSEGI PANJANG

void main()
{
int i,j,n;
cout<<"program membuat persegi"<<endl;
cout<<"======================="<<endl;
cout<<endl;
cout<<"Masukkan ukuran persegi : "; cin>>n;
for (i=1;i<=n;i++)
{
if ((i==1)||(i==n))
{
for (j=1;j<=n;j++)
cout<<"*";
cout<<endl;
}
else
{
for (j=1;j<=n;j++)
{
if ((j==1)||(j==n))
cout<<"*";
else
cout<<" ";
}
cout<<endl;
}
}
getch();
}