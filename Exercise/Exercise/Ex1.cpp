#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	//declare variable
	int n, c;
	int arr[100], prod[100];
	int i, j, z = 1;
	do
	{
		//Input number of elements
		cout << "Moi ban nhap so phan tu: ";
		cin >> n;

		if (n < 1) { continue; }

		//Input elements
		for (i = 1; i <= n; i++)
		{
			cout << "Moi ban nhap phan tu thu " << i << ": ";
			cin >> arr[i - 1];
		}

		//Calculate prod
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j != i)
				{
					z = z * arr[j];
				}
			}
			prod[i] = z;
			z = 1;
		}

		cout << "prod[]= ";
		for (i = 0; i < n; i++)
		{
			cout << prod[i] << " ";
		}
		cout << "\n\n";

		//Exit program
		c = _getch();
		if (c == 27) { break; }
	} while (1);
	return 0;
}