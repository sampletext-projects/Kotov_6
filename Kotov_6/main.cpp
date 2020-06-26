#include <iostream>

using namespace std;

double S(double a, double b, double h)
{
	return (a + b) / 2. * h;
}

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "Выполнил Котов А.А. УМЛ-112\n";
	cout << "Программа для вычисления площади равнобокой трапеции\n";

	double a, b, h;
	cout << "Введите длину первого основания: ";
	cin >> a;
	cout << "Введите длину второго основания: ";
	cin >> b;
	cout << "Введите высоту: ";
	cin >> h;

	double s = S(a, b, h);

	cout << "Площадь равнобокой трапеции равна: " << s << "\n";

	system("pause");
}
