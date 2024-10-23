#include <cstdlib>
#include <cstdio>
#include <locale>
#include <Windows.h>
#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv) {
	SetConsoleOutputCP (CP_UTF8);
	int idade1;
	int idade2;
	int soma;
	int media;
	cout << "Insira a idade do primeiro player: " << endl;
	cin >> idade1;
	cout << "Insira a idade do segundo player: " << endl;
	cin >> idade2;
	soma = idade1 + idade2;
	media = soma / 2;
	cout << "A idade média dos jogadores é de: " << media << endl;
	return 0;
}