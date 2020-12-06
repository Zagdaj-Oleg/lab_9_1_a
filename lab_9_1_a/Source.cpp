#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h> // забезпечення відображення кирилиці
using namespace std;
struct Student
{
	string prizv;
	unsigned kurs;
	unsigned fiz; 
	unsigned mat;
	unsigned inf;
	
};
void Create(Student* p, const int N);
void Print(Student* p, const int N);
int main()
{ // забезпечення відображення кирилиці:
	SetConsoleCP(1251); // встановлення сторінки win-cp1251 в потік вводу
	SetConsoleOutputCP(1251); // встановлення сторінки win-cp1251 в потік виводу
	int N;
	cout << "Введіть N: ";
	cin >> N;
	
	Student* p = new Student[N];
	Create(p, N);
	Print(p, N);
	return 0;
}
void Create(Student * p, const int N)
{
	int posada;
	for (int i = 0; i < N; i++)
	{
		cout << "Працівник № " << i + 1 << ":" << endl;
		cin.get(); // очищуємо буфер клавіатури – бо залишаються символи
		cin.sync(); // "кінець рядка", які не дають ввести наступний літерний рядок
		cout << " прізвище: "; getline(cin, p[i].prizv);
		cout << " курс: "; cin >> p[i].kurs;
		cout << " оцінка з фізики: ";
		cin >> p[i].fiz;
		cout << " оцінка з математики: "; cin >> p[i].mat;
		cout << " оцінка з інформатики: "; cin >> p[i].inf;
		switch (p[i].fiz)
		cout << endl;
	}
}
void Print(Student* p, const int N)
{
	cout << "=====================================================================++===="
		<< endl;
	cout << "| № | Прізвище | Курс | Спеціальність | Фізика | Математика | Інформатика |"
		<< endl;
	cout << "---------------------------------------------------------------------------"
		<< endl;
	for (int i = 0; i < N; i++)
	{
		cout << "| " << setw(1) << right << i + 1 << " ";
		cout << "| " << setw(8) << left << p[i].prizv;
		cout << "| " << setw(10) << right << p[i].kurs << " ";
		cout << "| " << setw(10) << right << p[i].fiz << " ";
		cout << "| " << setw(10) << right << p[i].mat << " ";
		cout << "| " << setw(10) << right << p[i].inf << " ";
		
	}
	cout <<endl;
	cout << "========================================================================="
		<< endl;
	cout << endl;
}