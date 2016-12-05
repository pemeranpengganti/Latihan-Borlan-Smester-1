#include<iostream.h>
#include<cstring.h>
#include<conio.h>

int main()
{

int a,b,c,d,e;
char password[20];
string username;
login:
cout<<endl;
cout<<"\n\n\n          Login ";
cout<<"\n==========================";
cout<<"\n\nUsername : "; cin>>username;
cout<<"\nPassword : "; cin>>password;

if (username=="001" && strcmp(password,"admin")==0)
{
  clrscr();
  cout<<"Menu Utama "<<endl;
}
else
{ cout<<"\t\t\tLogin Gagal ..."<<endl;
goto login;
}
getch();
}
