#include <iostream>
#include <tchar.h>
int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	float numero1, numero2, numero3;
	float media = 0.0;
	std::cout << "Digite o primeiro n�mero: ";
	std::cin >> numero1;
	std::cout << "Digite o segundo n�mero: ";
	std::cin >> numero2;
	std::cout << "Digite o terceiro n�mero: ";
	std::cin >> numero3;
	media = (numero1 + numero2 + numero3) / 3;
	std::cout << "N�meros digitados: " << numero1 << " " << numero2 << " " << numero3 << "\n";
	std::cout << "M�dia Aritm�tica: " << media << "\n";
	system("PAUSE");
	return 0;
}