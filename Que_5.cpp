#include <iostream>
using namespace std;
int main()
{
	int a1[5], a2[5], a3[10];
	int size1 = 5, size2 = 5, i, t;
	cout << "Enter elements for first array: ";
	for (i = 0; i < size1; i++)
	{
		cin >> a1[i];
		a3[i] = a1[i];
	}
	t = i;
	cout << "Enter elements for second array: ";
	for (i = 0; i < size2; i++)
	{
		cin >> a2[i];
		a3[t] = a2[i];
		t++;
	}
	cout << "Combined single ordered array is: ";
	for (i = 0; i < t; i++)
		cout << a3[i] << " ";
	cout << endl;
	return 0;
}