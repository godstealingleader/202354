#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter number of rows: ";
	int rows = 0; cin >> rows;
	for (int i = 0; i < rows; i++)
	{
		for (int y = rows - 1; y > i; y--)
		{
			cout << ".";
		}
		for (int y = rows - i; y < rows + 1; y++)
		{
			cout << "*";
		}
		cout << endl;
	}
}