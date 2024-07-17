#include <iostream>

using namespace std;

#define SIZE 8

int quick(int list[], int left, int right)
{
    if (left >= right)
    {
        return list[left];
    }

    int pivot = left;
    int qleft = left + 1;
    int qright = right;

    int swap;

    while (qleft <= qright)
    {
        while (qleft <= right && list[qleft] <= list[pivot])
        {
            qleft++;
        }
        
        while (qright > left && list[qright] >= list[pivot])
        {
            qright--;
        }

        if(qleft > qright)
        {
            swap = list[qright];
            list[qright] = list[pivot];
            list[pivot] = swap;
        }
        else
        {
            swap = list[qleft];
            list[qleft] = list[qright];
            list[qright] = swap;
        }
    }

    quick(list, left, qright - 1);
    quick(list, qright + 1, right);
}


int main()
{
#pragma region 퀵 정렬
    // 기준점을 획득한 다음 해당 기준점을 기준으로
    // 배열을 나누고 한 쪽에는 기준점보다 작은 값들이
    // 위치하고 다른 한 쪽에는 기준점보다 큰 값들이 위치하도록
    // 정렬하는 알고리즘입니다.

    // 나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여
    // 모든 배열이 기본 배열이 될 때까지 반복하면서 정렬합니다.

    int list[SIZE] = { 2, 6, 8, 10, 3, 4, 5, 9 };

    quick(list, 0, SIZE - 1);

    for(int i = 0; i < SIZE; i++)
    {
        cout << list[i] << ' ';
    }
    

#pragma endregion





    return 0;
}