#include <iostream>

using namespace std;

int main(int agrc , char ** agrv)
{
	cout << "----HESAP MAKINASI----\nISLEMLER:\n(1)Toplama\n(2)Cikartma\n(3)Bolme\n(4)Carpma" << endl;
	
	int islem;
	double s1,s2;
	double sonuc;
	
	cout << "Islemi Secin: " << endl;
	cin >> islem;
	
	cout << "Sayi 1: " << endl;
	cin>> s1;
	
	cout << "Sayi 2: " << endl;
	cin >> s2;
	
	if ( islem == 1)
	{
		sonuc = s1+s2;
		cout << "Sonuc: " << sonuc << endl;
	}
	else if ( islem == 2)
	{
		sonuc = s1-s2;
		cout << "Sonuc: " << sonuc << endl;
	}
	else if ( islem == 3)
	{
		sonuc = s1/s2;
		cout << "Sonuc: " << sonuc << endl;
	}
	else if ( islem == 4)
	{
		sonuc = s1*s2;
		cout << "Sonuc: " << sonuc << endl;
		
		return 0;
	}
	
	
	
}
