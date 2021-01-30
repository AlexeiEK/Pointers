#include<iostream>
using namespace std;

using std::cout;
using std::cin;
using std::endl;

//#define START
//#define POINTER_ARITHMETICS

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef START
	int a = 2; //ќбъ€вление переменной
	int* pa = &a; //Pointer to 'a' указатель на переменную 'a'
	//& - ќператор вз€ти€ адреса
	cout << a << endl;   //¬ывод переменной 'a' на экран
	cout << &a << endl;  //ѕолучение адреса переменной 'a' при выводе
	cout << pa << endl;  //¬ывод адреса переменной 'a', хран€щегос€ в указателе pa
	cout << *pa << endl; //–азыменование указател€ 'pa' и получение значени€ по адресу в этом указателе
	//* - это оператор разыменовани€ (Dereference operator)

	int* pointer;
	int b = 3;
	pointer = &b;

	/*
	---------------------------------------
	int - int;
	int* - ”казатель на int
	double - double;
	double* - ”казатель на double
	---------------------------------------
	*/
#endif // START

#ifdef POINTER_ARITHMETICS
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << "\t";
		cout << *(arr + i) << "\n";
	}
	cout << endl;
#endif // POINTER_ARITHMETICS

    //Reference (ссылка) - это переменна€, кот. содержит адрес другой переменной.
	int a = 2;
	int& ra = a;
	ra += 3;
	cout << &a << endl;
	cout << &ra << endl;
}