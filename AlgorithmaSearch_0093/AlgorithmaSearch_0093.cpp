#include <iostream>
using namespace std;

int arr[20]; //	Array untuk dicari
int n;		 // Bilangan elemen dalam array
int i;		 // Index elemen

void input()
{
	while (true)
	{
		cout << "Masukan bilangan elemen dalam array"
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
	}
}