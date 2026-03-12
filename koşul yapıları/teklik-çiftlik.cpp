#include <iostream>

using namespace std;

int main(int argc , char ** agrv)
{
	cout << "----TEK-CIFT KONTROL PROGRAMI----" << endl;
	
	int a;
	
	cout << "Bir Tam Sayi Giriniz: "<<endl;
	cin >> a;
	
	if (a%2==0)
	{
		cout << "Sayi Cift Sayidir." << endl;
	}
	else
	{
		cout << "Sayi Tek Sayidir." << endl;
	}
	
	//a %2 == 0 ? cout << "Sayi Cift Sayidir." << endl : cout << "Sayi Tek Sayidir." << endl;
	
	return 0;
}
