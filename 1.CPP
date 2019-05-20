#include <iostream.h>
#include <conio.h>
#include <stdio.h>

void main ()
{
char Huruf,Next,Nim[10],Nama[25];
float Nilai,NM,NF,NA,NTM,NTF,NTT,Jml=0;
int i = 1;
atas :
cout<<"Menghitung Nilai Akhir Mahasiswa\n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"Masukkan Nama Mahasiswa = ";cin>>Nama;
cout<<"Masukkan NIM Mahasiswa = ";cin>>Nim;
		do
      {cout<<"\nMasukkan Nilai Tugas Mahasiswa " << i << " = " ; cin >> Nilai ;
       Jml = Jml + Nilai ;
       i ++ ;}
       while (i<=5);
cout<<"\nMasukkan Nilai Mid Mahasiswa = ";cin>>NM;
cout<<"\nMasukkan Nilai Final Mahasiswa = ";cin>>NF;
NTT = 0.3 * (Jml/5);
NTM = 0.3 * NM;
NTF = 0.4 * NF;
NA = NTT + NTM + NTF ;
		if((NA>=80) && (NA<=100))
      Huruf = 'A';
      else if ((NA>=70) && (NA<=79))
      Huruf = 'B';
      else if ((NA>=60) && (NA<=69))
      Huruf = 'C';
      else if ((NA>=50) && (NA<=59))
      Huruf = 'D';
      else if (NA<50)
      Huruf = 'E';
cout<<endl;
cout<<endl;
cout<<"Menghitung Nilai Akhir Mahasiswa\n";
cout<<"-----------------------------------\n";
cout<<"Nama Mahasiswa = " <<Nama<<endl;
cout<<"Total Nilai Tugas = " <<NTT<<endl;
cout<<"Total Nilai Mid = " <<NTM<<endl;
cout<<"Total Nilai Final = " <<NTF<<endl;
cout<<"\nNilai Akhir Mahasiswa = " <<NA<<endl;
cout<<"Nilai Huruf Mahasiswa = " <<Huruf<<endl;
cout<<"Ingin Menginput Lagi ? [Y/T]";
Next=getch();
clrscr();
if ( Next =='Y' || Next == 'y' ) goto atas;
getch();
}