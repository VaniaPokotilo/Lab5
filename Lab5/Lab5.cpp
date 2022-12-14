#include <iostream>
using namespace std;

int main()
{
	char c;
	int rows = 0;
	int cols = 0;

	cout << "Enter rows: ";
	cin >> rows;

	cout << "Enter cols: ";
	cin >> cols;

	cout << "Enter char: ";
	cin >> c;
	cout << endl;

	char** arr = new char* [rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new char[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = c;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}