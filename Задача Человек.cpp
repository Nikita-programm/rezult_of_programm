#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int arr[20];
	int n, temp, max, min;

	cout << "n = ";
	cin >> n;

	if (n <= 20 && n > 0)
	{
		srand(time(NULL));

		for (int i = 0;i < n;i++)
		{
			arr[i] = -10 + rand() % 21;
			cout << arr[i] << " ";
		}

		cout << "\n";

		max = 0;
		min = 0;

		for (int i = 1;i < n;i++)
		{
			if (arr[max] > arr[i])
				max = i;
			if (arr[min] < arr[i])
				min = i;
		}

		temp = arr[max];
		arr[max] = arr[min];
		arr[min] = temp;

		for (int i = 0;i < n;i++)
		{
			cout << arr[i] << " ";
		}
	}
	else cout << "Вы ошиблись";
}
