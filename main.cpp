/*
 gerekli kutuphaneler ve ön tanýmlamalar yapýlmalýdýr.
*/
#include "Karne.h"
#include "Karne.cpp"
#include <iostream>



int main()
{
     Karne report("James", "Harden", 3);
     Karne karne("Sophia", "Austin", 5);
 
    cout <<  report.getIsim() << " isimli ögrencinin notlarýný giriniz :" << endl;
	int array[10];
	for(int i=0;i<report.getNotAdedi();i++)
	{
		scanf("%d",&array[i]);
	}
	report.setNotlar(array,sizeof(array));
    cout << "---Bilgi--- "" << endl;
	report.bilgiYazdir(); 

	cout <<  karne.getIsim() << " isimli ögrencinin notlarýný giriniz" << endl;

    for(int i=0;i<karne.getNotAdedi();i++)
	{
		scanf("%d",&array[i]);
	}
	report.setNotlar(array,sizeof(array));
    cout << "---Bilgi--- "" << endl;
	karne.bilgiYazdir();    

	cout << report.isim() << " isimli ögrencinin bir notunu güncelleyin " << endl
	int Not,indis;
	printf("Guncellenecek not numarasý: ")
	scanf("%d",&indis);
    printf("Guncel Not: ")
	scanf("%d",&Not);
	report.setNot(Not,indis);
	//not ortalamasi buyuk olan ögrencinin notlarýný diðer ögrenciye atayýn
    if(report.getOrtalama() > karne.getOrtalama())
    	report.opetatör(karne);
    else
    	karne.opetatör(report);
    cout << "---Bilgi---" << endl;
	report.bilgiYazdir();
    cout << "---Bilgi---" << endl;
   	karne.bilgiYazdir();
    return 0;

}

