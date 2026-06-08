#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

char a[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void map();
int check();

int main()
{
	int p = 1;
	int i, choice;
	char mark;
	cout << "\n\t\t\t\t\t\t   DOOOOOOOZ\n\n";
	cout << "\t\t\t\t\t\t   p1 (X)\n"
		 << endl;
	cout << "\t\t\t\t\t\t   p2 (O)" << endl;
	cout << endl;
	do
	{
		map();
		p = (p % 2) ? 1 : 2;

		mark = (p == 1) ? 'X' : 'O';

		cout << "\t\t\t\t\t\t\t\np " << p << ":  ";
		cin >> choice;

		if (choice == 1 && a[1] == '1')
			a[1] = mark;
		else if (choice == 2 && a[2] == '2')
			a[2] = mark;
		else if (choice == 3 && a[3] == '3')
			a[3] = mark;
		else if (choice == 4 && a[4] == '4')
			a[4] = mark;
		else if (choice == 5 && a[5] == '5')
			a[5] = mark;
		else if (choice == 6 && a[6] == '6')
			a[6] = mark;
		else if (choice == 7 && a[7] == '7')
			a[7] = mark;
		else if (choice == 8 && a[8] == '8')
			a[8] = mark;
		else if (choice == 9 && a[9] == '9')
			a[9] = mark;
		else
		{
			cout << "\t\t\t\t\t\t   wrong move ";
			p--;
			getch();
		}
		i = check();
		p++;
	} while (i == -1);

	map();

	if (i == 1)
	{
		cout << "==>\a\t\t\t\t\t\t   p" << --p << " win \n\n";
		a[0] = 'o';
		a[1] = '1';
		a[2] = '2';
		a[3] = '3';
		a[4] = '4';
		a[5] = '5';
		a[6] = '6';
		a[7] = '7';
		a[8] = '8';
		a[9] = '9';
		main();
	}

	else
	{
		cout << "==>\a\t\t\t\t\t\t   Game draw \n\n";
		a[0] = 'o';
		a[1] = '1';
		a[2] = '2';
		a[3] = '3';
		a[4] = '4';
		a[5] = '5';
		a[6] = '6';
		a[7] = '7';
		a[8] = '8';
		a[9] = '9';
		main();
	}

	getch();
	return 0;
}

int check()
{
	if (a[1] == a[2] && a[2] == a[3])
		return 1;
	else if (a[4] == a[5] && a[5] == a[6])
		return 1;
	else if (a[7] == a[8] && a[8] == a[9])
		return 1;
	else if (a[1] == a[4] && a[4] == a[7])
		return 1;
	else if (a[2] == a[5] && a[5] == a[8])
		return 1;
	else if (a[3] == a[6] && a[6] == a[9])
		return 1;
	else if (a[1] == a[5] && a[5] == a[9])
		return 1;
	else if (a[3] == a[5] && a[5] == a[7])
		return 1;

	if (a[1] != '1' && a[2] != '2' && a[3] != '3' && a[4] != '4' &&
		a[5] != '5' && a[6] != '6' && a[7] != '7' && a[8] != '8' && a[9] != '9')
		return 0;
	else
		return -1;
}

void map()
{
	cout << endl;
	cout << "\t\t\t\t\t\t   " << a[1] << "  |  " << a[2] << "  |  " << a[3] << endl;
	cout << "\t\t\t\t\t\t _____|_____|_____" << endl;
	cout << "\t\t\t\t\t\t   " << a[4] << "  |  " << a[5] << "  |  " << a[6] << endl;
	cout << "\t\t\t\t\t\t _____|_____|_____" << endl;
	cout << "\t\t\t\t\t\t   " << a[7] << "  |  " << a[8] << "  |  " << a[9] << endl;
	cout << endl;
}
