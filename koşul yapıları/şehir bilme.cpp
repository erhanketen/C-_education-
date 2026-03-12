#include <iostream>

using namespace std;

int main(int agrc , char ** agrv)
{
	int kod;
	cout << "Il Trafik Kodunu Giriniz: " << endl;
	cin >> kod;
	
	switch(kod)
	{
		case 6:
			cout <<"Ankara"<<endl;
			break;
		case 34:
			cout << "Istanbul" << endl;
			break;
		case 35:
			cout << "Izmir" << endl;
			break;
		default:
			cout<<"Diger"<<endl;
		
	}
	
	
	
}
