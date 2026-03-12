#include <iostream>

using namespace std;

int main(int argc , char ** agrv)
{
	cout << "----UCE BOLUMDEN KALAN HESAPLAMA----" << endl;
	
	int a;
	cout << "Bir Sayi Giriniz: " << endl;
	cin >> a;
	
	if (a%3 == 0)
	{
		cout << "Kalan 0'dir." << endl;
	}
	else
	{
		int kalan = a % 3;
		
		cout << "Kalan: " << kalan << endl;
		
	}
	
	
}
