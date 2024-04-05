#include <iostream>
using namespace std;

int arr[20]; //	Array untuk dicari
int n;		 // Bilangan elemen dalam array
int i;		 // Index elemen

void input()
{
	while (true)
	{
		cout << "Masukan bilangan elemen dalam array";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray harus memiliki minimal 1 dan maksimal 20 elemen. \n\n";
	}
// menerima elemen array
	cout << "\n--------------------\n";
	cout << " Masukan elemen array \n";
	cout << "\n--------------------\n";
}