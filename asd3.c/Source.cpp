#include <iostream>
#include <time.h>
using namespace std;
void razdel(int* arr, int n) {
	for (int i = 0; i < n ; i++)
	{
		if (arr[i] >0)
		{
			for (int j = 0; j < i; j++)
			{
				if (arr[j] <=0) {
					int x = arr[i]; 
					arr[i] = arr[j];
					arr[j] = x;
				}
			}
		}
	}

}
int main() {
	int* a;
	int x, n;
	srand(time(NULL));
	cout << "Enter the size of the array: " << endl;
	cin >> n;
	a = new int[n];
	for (int j = 0;j < n;j++) {
		x = -100 + rand() % 200;
		a[j] = x;
	}
	cout << "Array: " << endl;
	for (int j = 0; j < n;j++)
	{
		cout << "arr[" << j << "]= " << a[j] << endl;
	}
	cout << endl;
	cout << "Razdel array: " << endl;
	razdel(a, n);
	for (int j = 0; j < n;j++)
	{
		cout << "arr[" << j << "]= " << a[j] << endl;
	}
	cout << endl;
	delete[] a;


	system("pause");
	return 0;
}