#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 누적합
    // 특정한 배열이 있을 때, 배열까지의 합을 나타내는 것입니다.

    int list[SIZE] = { 1, 2, 3, 4, 5 };
    int sum[SIZE] = { 0, 0, 0, 0, 0 };

    sum[0] = list[0];

    for (int i = 1; i < SIZE; i++)
    {
        sum[i] = sum[i - 1] + list[i];
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << sum[i] << " ";
    }

#pragma endregion



    return 0;
}