#include <iostream>

using namespace std;

#define SIZE 8

void quick(int list[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    // pivot 변수의 값을 설정합니다.
    int pivot = start;

    // left 변수의 값을 설정합니다.
    int left = start + 1;

    // right 변수의 값을 설정합니다.
    int right = end;

    int swap;

    // left 가 right 보다 크거나 같을 때까지 반복합니다.
    while (left <= right)
    {
        // left가 end보다 작거나 같고 list[left]가 list[pivot] 보다 작거나 같을 때까지
        // 반복합니다.
        while (left <= end && list[left] <= list[pivot])
        {
            left++;
        }

        // right가 start보다 크고 list[right]가 list[pivot]보다 크거나 같을 때까지
        // 반복합니다.
        while (right > start && list[right] >= list[pivot])
        {
            right--;
        }

        if (left > right)
        {
            swap = list[right];
            list[right] = list[pivot];
            list[pivot] = swap;
        }
        else
        {
            swap = list[left];
            list[left] = list[right];
            list[right] = swap;
        }
    }

    // 피벗을 기준으로 나누어진 두 배열에 대해 재귀적으로 퀵 정렬을 호출합니다.
    quick(list, start, right - 1);
    quick(list, right + 1, end);

    return;
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

    int list[SIZE] = { 2, 6, 8, 10, 4, 3, 9, 5 };

    quick(list, 0, SIZE - 1);

    for (const int& element : list)
    {
        cout << element << " ";
    }
#pragma endregion





    return 0;
}