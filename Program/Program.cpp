﻿#include <iostream>

using namespace std;

#define SIZE 8

void MergeSort(int list[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;

        MergeSort(list, start, mid);
        MergeSort(list, mid + 1, end);
    }
}

void Merge(int list[], int start, int mid, int end)
{
    int left = start;
    int right = end;
    int pivot = mid + 1;
    
    while (left <= mid && pivot <= end)
    {
        if (list[left] <= list[pivot])
        {
            list[right++] = list[left++];
        }
        else
        {
            list[right++] = list[pivot++];
        }

    }

    




}


int main()
{
#pragma region 병합 정렬
    // 하나의 리스트를 두 개의 균등한 크기로 분할하고 분할된
    // 부분 리스트를 정렬한 다음, 두 개의 정렬된 부분 리스트를
    // 합하여 전체가 정렬된 리스트가 되게 하는 방법입니다.

    // 1. 리스트의 길이가 0 또는 1이면 이미 정렬된 것으로 봅니다.

    // 2. 그렇지 않은 경우

    // 2-1. 정렬되지 않은 리스트를 절반으로 잘라 비슷한 크기의 두 부분 리스트로
    //      나눕니다.

    // 2-2. 각 부분 리스트를 재귀적으로 병합 정렬을 이용하여 정렬합니다.

    // 2-3. 두 부분 리스트를 다시 하나의 정렬된 리스트로 병합합니다.

    int list[SIZE] = { 3, 5, 2, 7, 4, 1, 8, 6 };

    MergeSort(list, 0, SIZE - 1);


#pragma endregion





    return 0;
}