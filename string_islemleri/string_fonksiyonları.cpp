/*
length()
Bir string'in kaç karakterden oluþtuðunu verir.
Örnek: "hello".length() = 5

compare()
Ýki stringi karþýlaþtýrýr. Eþitse 0 döndürür, farklýysa pozitif veya negatif deðer döner.

clear()
String’in içeriðini tamamen siler, string boþ hale gelir.

insert()
Bir string’in belirli bir konumuna yeni karakter veya baþka bir string ekler.

erase()
String’in belirli bir kýsmýný siler.

at()
String içindeki belirli indexteki karaktere eriþmek için kullanýlýr.
Örnek: str.at(2)

append()
Bir string’in sonuna yeni karakter veya baþka bir string ekler.

*/

#include <iostream>
#include <string>

int main(int agrc , char ** agrv)
{
	
	std::string ad1,ad2,soyisim;
	
	std::cout << "Birinci Adiniz:" << std::endl;
	std::cin >> ad1;
	
	std::cout << "Ikinci Adiniz:" << std::endl;
	std::cin >> ad2;
	
	std::cout << "Soyadiniz:" << std::endl;
	std::cin >> soyisim;
	
	std::cout << "Adiniz ve Soyadiniz: " <<ad1.append(" ").append(ad2.append(" ").append(soyisim)) << std::endl;
	std::cout << "Adinizin Uzunlugu: " << ad1.length()+ad2.length()+soyisim.length() << std::endl;
	
	
	
	
	
	
	
	
	
}
