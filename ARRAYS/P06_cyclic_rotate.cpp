// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 23/11/2021
// @index: Arrays-Problem6

#include<iostream>
using namespace std;

void cyclic_rotate(int* A, int size){
    int temp = A[size-1];
    int i = size-2;
    while (i >= 0){
        A[i+1] = A[i];
        i--;
    }
    A[0] = temp;

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
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    cyclic_rotate(arr, N);

    return 0;
}