#ifndef KARNE_H
#define KARNE_H
#include <iostream>
#include <cstring>

class Karne
{
private:
    string ad[30];
    string soyad[30];
    int notlar[10];
    int notAdedi;
 
public:
    Karne(string a, stirng b, int notAdedi);
 
    void bilgiYazdir();
 	void setNotlar();
 	void setNot();
 	double getOrtalama() { return ortalama; }
    string getIsim() { return ad; }
    int getNotAdedi() { return notAdedi; }
    int getDay()  { return m_day; }
};
 
#endif
