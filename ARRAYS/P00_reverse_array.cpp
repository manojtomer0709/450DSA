// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 23/11/2021
// @index: Array-Problem0

#include<iostream>
using namespace std;

void reverse_array(int* A, int left, int right){
    if (left >= right){
        return;
    }
    swap(A[left], A[right]);
    reverse_array(A, left+1, right-1);
}

int main(){
    freopen("input.txt", "r", stdin);
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    reverse_array(arr, 0, N-1);

    for(int p = 0; p < N; p++){
        cout << arr[p] << " ";
    }

    return 0;
}