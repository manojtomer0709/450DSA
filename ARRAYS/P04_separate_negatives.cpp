// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 24/11/2021
// @index: Arrays-Problem4

#include<iostream>
using namespace std;

void separate_negatives(int* A, int size){
    int left = 0;
    int right = size-1;

    while (left < right){
        if (A[left] > 0 && A[right] > 0){
            right--;
        }
        else if (A[left] > 0 && A[right] < 0){
            swap(A[left], A[right]);
            left++;
            right--;
        }
        else if (A[left] < 0 && A[right] > 0){
            left++;
            right--;
        }
        else if (A[left] < 0 && A[right] < 0){
            left++;
        }
    }

    for (int p = 0; p < size; p++){
        cout << A[p] << " ";
    }

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    separate_negatives(arr, N);

    return 0;
}