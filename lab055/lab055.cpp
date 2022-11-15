#include <windows.h>
#include <iostream>
#include <cstdlib>

using namespace std;

int n;
char sym1, sym2;

void perviSwitch() {

	cout << "Введите букву латинского алфавита в строчном или прописном виде: ";
	cin >> sym1 >> sym2;
	if ((sym2 >= 'a' && sym2 <= 'z' || sym2 >= 'A' && sym2 <= 'Z') && (sym1 >= 'A' && sym1 <= 'Z' || sym1 >= 'a' && sym1 <= 'z'))
	{
		cout << "Разница символов:" << sym1 - sym2 << endl;

	}
	else {

		cout << "Error";
		
	}

	

}

void vtorSwitch() {

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Введите букву русского алфавита в строчном или прописном виде: ";
	cin >> sym1 >> sym2;

	if ((sym2 >= 'а' && sym2 <= 'я' || sym2 >= 'А' && sym2 <= 'Я') && (sym1 >= 'А' && sym1 <= 'Я' || sym1 >= 'а' && sym1 <= 'я')) {
		cout << "Разница символов:" << sym1 - sym2 << endl;
	}
	else {
		cout << "Error";
		
	}
	SetConsoleOutputCP(866);
	SetConsoleCP(866);


}

void tretSwitch() {

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int c;

	cout << "Введите  от цифру '0'  от '9': ";
	cin >> c;

	if (c <= 9 && c >= 0)
	{
		cout << char(c);

	}
	else
	{
		cout << "Error";
	}


} 



 int main() {

	
	 
	 
	setlocale(LC_ALL, "Russian");
	
	cout << "Введите n:  '1' – определение разницы значений кодов в ASCII буквы в прописном и 	строчном написании ; '2' – определение разницы значений кодов в Windows - 1251 ; '3' – вывод в консоль кода символа, соответствующего введенной цифре ; '4' – выход из программы " << endl;
	cin >> n;
	
	if (n>4)
	{
		cout << "Error";
		
	}
 
	switch (n)
	{
	case 1:
		perviSwitch();
		
		break;
		
	case 2:
		vtorSwitch();
		break;
	case 3:
		tretSwitch();
		break;
	case 4:
	
		break;
		
		
	
	
     
	}
	
	
	

	
	return 0;
}


 // zad 1

 /*
 SetConsoleOutputCP(1251);
 SetConsoleCP(1251);

setlocale(LC_ALL, "Russian");
char x1 = 'e' , x2 = 'E';
char y1 = 'л',y2 = 'Л';
char xtemp[100];
char ytemp[100];

// Лемешевский Владислав Олегович
 //_itoa_s(число ввода,строка вывода, основание системы счисления).




cout << "(X)разницa значений кодов в 10 система: " << x1 - x2 << endl;
_itoa_s(int(x1 - x2), xtemp, 16);
cout << "(X)разницa значений кодов в 16 система: " << xtemp <<  endl;

cout << "(Y)разницa значений кодов в 10 система:" << y1 - y2 << endl;
_itoa_s(int(y1 - y2), ytemp, 16);
cout << "(Y)разницa значений кодов в 16 система: " << ytemp << endl;

int Z = 36;


cout << "Symbol 1251: " << char(Z);

*/



 // zad dop


/*

   setlocale(LC_ALL, "Russian");
   double pers = 1;
   double hvat;
   double repa; cin >> repa;
   cout << "Репа весом: "<<repa << endl;
   for ( pers; pers < repa; pers++)
   {
	   hvat = pers + 2;

   }

   cout <<"Понадобилось человек: " << hvat;
   */