/*
 gerekli kutuphaneler ve �n tan�mlamalar yap�lmal�d�r.
*/
#include "Karne.h"
#include "Karne.cpp"
#include <iostream>



int main()
{
     Karne report("James", "Harden", 3);
     Karne karne("Sophia", "Austin", 5);
 
    cout <<  report.getIsim() << " isimli �grencinin notlar�n� giriniz :" << endl;
	int array[10];
	for(int i=0;i<report.getNotAdedi();i++)
	{
		scanf("%d",&array[i]);
	}
	report.setNotlar(array,sizeof(array));
    cout << "---Bilgi--- "" << endl;
	report.bilgiYazdir(); 

	cout <<  karne.getIsim() << " isimli �grencinin notlar�n� giriniz" << endl;

    for(int i=0;i<karne.getNotAdedi();i++)
	{
		scanf("%d",&array[i]);
	}
	report.setNotlar(array,sizeof(array));
    cout << "---Bilgi--- "" << endl;
	karne.bilgiYazdir();    

	cout << report.isim() << " isimli �grencinin bir notunu g�ncelleyin " << endl
	int Not,indis;
	printf("Guncellenecek not numaras�: ")
	scanf("%d",&indis);
    printf("Guncel Not: ")
	scanf("%d",&Not);
	report.setNot(Not,indis);
	//not ortalamasi buyuk olan �grencinin notlar�n� di�er �grenciye atay�n
    if(report.getOrtalama() > karne.getOrtalama())
    	report.opetat�r(karne);
    else
    	karne.opetat�r(report);
    cout << "---Bilgi---" << endl;
	report.bilgiYazdir();
    cout << "---Bilgi---" << endl;
   	karne.bilgiYazdir();
    return 0;

}

