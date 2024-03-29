#include <iostream>
#include <tchar.h>
int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	float numero1, numero2, numero3;
	float media = 0.0;
	std::cout << "Digite o primeiro número: ";
	std::cin >> numero1;
	std::cout << "Digite o segundo número: ";
	std::cin >> numero2;
	std::cout << "Digite o terceiro número: ";
	std::cin >> numero3;
	media = (numero1 + numero2 + numero3) / 3;
	std::cout << "Números digitados: " << numero1 << " " << numero2 << " " << numero3 << "\n";
	std::cout << "Média Aritmética: " << media << "\n";
	system("PAUSE");
	return 0;
}