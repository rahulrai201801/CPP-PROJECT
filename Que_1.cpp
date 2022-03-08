#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout << "enter the value of n=";
	cin >> n;

	float sum = 0.0;

	for (int i = 1; i <= n; i++)
	{
		sum = sum + pow(-1, i + 1) * (1.0 / (i * i));



	}
	cout << "The sum of the series, S = 1 - 1 / (2 ^ 2) + 1 / (3 ^ 3) -1 / (n ^ n) i= " << sum << endl;

	return 0;
}