#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	//declare variable
	int n, c;
	int arr[100], dem[10000];
	int i, j, t, z = 0;
	do
	{
		//Input number elements
		cout << "Moi ban nhap so phan tu: ";
		cin >> n;
		cout << "\n";

		if (n < 1) { continue; }

		//Input elements
		for (i = 1; i <= n; i++)
		{
			cout << "Moi ban nhap phan tu thu " << i << ": ";
			cin >> arr[i - 1];
		}
		cout << "\n";

		for (i = 0; i < 10000; i++)
		{
			dem[i] = 0;
		}

		for (i = 0; i < n; i++)
		{
			dem[arr[i]] = dem[arr[i]] + 1;
		}

		for (i = 0; i < 10000; i++)
		{
			if (dem[i] > 0)
			{
				cout << "Gia tri " << i << " xuat hien " << dem[i] << " lan\n";
			}
		}

		cout << "\n\n";

		//Exit program
		c = _getch();
		if (c == 27) { break; }

	} while (1);
}
