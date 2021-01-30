#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;  //Размер массива
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {3, 5, 8}; //Heap - Куча
	FillRand(arr, n);
	Print(arr, n);
	cout << endl;
	delete[] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\t";
	}
}