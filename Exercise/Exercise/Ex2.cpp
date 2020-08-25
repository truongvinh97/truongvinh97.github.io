#include <iostream>
#include <conio.h>
using namespace std;


int xuly(int i);
int main()
{
	//declare variable
	int n, c;
	int i, j;
	do
	{
		//Input number
		cout << "Moi ban nhap n: ";
		cin >> n;

		if (n < 1) { continue; }
		for (i = 1; i <= n; i++)
		{
			cout << xuly(i) << " ";
		}
		cout << "\n\n";

		//Exit program
		c = _getch();
		if (c == 27) { break; }

	} while (1);
}

int xuly(int i)
{
	if (i == 1) { return 0; }
	if (i == 2) { return 1; }
	if (i == 3) { return 2; }
	if (i > 3) { return (xuly(i - 2) + xuly(i - 1)); }
}