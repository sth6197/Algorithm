#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 거품 정렬
	// 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘입니다.

	int list[SIZE] = { 3, 11, 5, 7, 2 };
	int swap;

	//	cout << "기본 : ";
	//	
	//	for (int i = 0; i < 5; i++)
	//	{
	//		cout << list[i] << " ";
	//	}
	//	cout << endl << endl;

	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < (SIZE - i) - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				std::swap(list[j], list[j + 1]);
			}
		}

		//	cout << i + 1 << " 회차 : ";
		//	for (int j = 0; j < 5; j++)
		//	{
		//		cout << list[j] << " ";
		//	}
		//	cout << endl << endl;
	}

	for (const int& element : list)
	{
		cout << element << " ";
	}

	//	cout << "결과 : ";
	//	
	//	for (int i = 0; i < 5; i++)
	//	{
	//		cout << list[i] << " ";
	//	}
	//	cout << endl;
#pragma endregion





	return 0;
}