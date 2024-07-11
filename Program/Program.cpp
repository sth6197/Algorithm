#include <iostream>

using namespace std;

bool number(int n)
{
	if (n <= 1)
	{
		return false;
	}

	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	cout << number(5) << endl;
	cout << number(10) << endl;
	cout << number(7) << endl;
	cout << number(3) << endl;
	cout << number(2) << endl;
	


	return 0;
}