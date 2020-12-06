#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h> // ������������ ����������� ��������
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
{ // ������������ ����������� ��������:
	SetConsoleCP(1251); // ������������ ������� win-cp1251 � ���� �����
	SetConsoleOutputCP(1251); // ������������ ������� win-cp1251 � ���� ������
	int N;
	cout << "������ N: ";
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
		cout << "��������� � " << i + 1 << ":" << endl;
		cin.get(); // ������� ����� ��������� � �� ����������� �������
		cin.sync(); // "����� �����", �� �� ����� ������ ��������� ������� �����
		cout << " �������: "; getline(cin, p[i].prizv);
		cout << " ����: "; cin >> p[i].kurs;
		cout << " ������ � ������: ";
		cin >> p[i].fiz;
		cout << " ������ � ����������: "; cin >> p[i].mat;
		cout << " ������ � �����������: "; cin >> p[i].inf;
		switch (p[i].fiz)
		cout << endl;
	}
}
void Print(Student* p, const int N)
{
	cout << "=====================================================================++===="
		<< endl;
	cout << "| � | ������� | ���� | ������������ | Գ���� | ���������� | ����������� |"
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