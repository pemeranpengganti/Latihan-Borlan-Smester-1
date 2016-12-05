#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
int nilai;
char *grade,*ket;

printf("Masukan Sebuah Nilai: ");scanf("%d",&nilai);

if(nilai >90)
{ ket="Lulus";
  grade="A";
}
else if(nilai >80)
{ ket="Lulus";
  grade="B";
}
else if(nilai >70)
{ ket="Lulus";
  grade="C";
}
else if(nilai >=65)
{ ket="Lulus";
  grade="D";
}
else if(nilai <65)
{ ket="Lulus";
  grade="D";
}
printf("=============================== \n);
printf("Hasil Nilai Akhir dan Grade \n");
printf("=============================== \n);
printf("Nilai anda adalah "<<nilai<<endl;
printf("Anda dinyatakan "<<ket<<endl;
printf("Grade Anda Adalah "<<grade<<endl;
getch();
}