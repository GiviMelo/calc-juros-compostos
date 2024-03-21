#include <iostream>
#include <iomanip>
using namespace std;

double M, C, i;
int t;

double function(double C, double i, int t);

int main() {


	while (true) {
		cout << endl;

		cout << fixed;
		cout << setprecision(2);

		cout << "Insira os valores a seguir:\n";

		cout << "Valor a ser investido (em R$): ";
		cin >> C;

		cout << "Taxa anual (em decimal): ";
		cin >> i;

		cout << "Tempo (em anos): ";
		cin >> t;

		M = function(C, i, t);

		cout << endl;
		cout << "O montante do investimento apos " << t << "anos sera de R$" << M << endl << endl;

		char continuar;

		cout << "Calcular novamente? (S/N)\n";
		cin >> continuar;

		if (continuar != 's' && continuar != 'S') {
			break;
		}
	}
	


	return 0;
}

double function(double C, double i, int t) {

	double res = C * pow((1 + i), t);

	return res;
}