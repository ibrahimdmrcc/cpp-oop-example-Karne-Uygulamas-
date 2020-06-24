#include <iostream>
#include "Karne.h"
 
Karne::Karne(string a, stirng b, int notAdedi=10)
{
    ad = a;
    soyad = b;
    notAdedi = notAdedi;
	notlar = {0,0,0,0,0,0,0,0,0,0};    
}
 
void Karne::bilgiYazdir()
{
	int adet = getNotAdedi();
    printf("isim: %s\n",getIsim());
    printf("notlar: ",);
    for (int i =0; i<adet;i++)
    {
    	printf("%d -",notlar[i]);
	}
	printf("\n";)
    printf("ortalama: %f",getOrtalama());
}
void Karne::setNotlar(int notlar_gelen[], int adet)
{

	for(int i = 0;i<adet,i++)
	{
		notlar[i] = notlar_gelen[i]; 
	}

}
void Karne::setNot(int Not, int notIndeksi)
{
	if(notIndeksi > sizeof(notlar) )
	printf("Not guncellenemedi");
	else
    notlar[notIndeksi] = Not;
    prinf("Not guncellendi");
}
double Karne::getOrtalama()
{
	int ortalama = 0;
	int adet = getNotAdedi();
	for(int i =0;i<adet;i++)
	{
		ortalama += notlar[i];
	}
	ortlama = ortalama/adet;
	
    return ortalama;
}
string Karne::getIsim()
{
	string ad_soyad = strcat(ad,soyad);
    return ad_soyad;
}
int Karne::getNotAdedi()
{
    return notAdedi;
}
void Karne::operatör(Karne b)
{
	karne.setNotlar(notlar,adet);
}

