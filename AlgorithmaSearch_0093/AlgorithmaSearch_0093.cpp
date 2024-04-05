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
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
}
}

void LinearSearch()
{
	char ch;
	int ctr; // Bilangan perbandingan
	int item;

	do
	{
		//menerima bilangan untuk dicari
		cout << "\nMasukan elemen yang ingin dicari: "; //step 1
		cin >> item;

		ctr = 0;
		i = 0; //step 2
		while (i < n) // step 3
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item << " ditemukan dalam posisi " << (i + 1) << endl; //step 6
				break;
			}
			i++; // step 4
		}
		if (i == n) //step 5
			cout << "\n" << item << "tidak ditemukan dalan array\n";

	}
}