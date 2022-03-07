// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 26/11/2021
// @index: Arrays-Problem29

#include<iostream>
using namespace std;

void ssort(int* A, int size){
    for (int i = 0; i < size; i++){
        int jmin = i;
        for (int j = i+1; j < size; j++){
            if (A[j] < A[jmin]){
                jmin = j;
            }
        }
        if (jmin != i){
            swap(A[i], A[jmin]);
        }
    }

    return;
}

void get_minimum_difference(int* A, int size, int M){
    ssort(A, size);

    int min_diff = 2147483647; // INT_MAX
    for (int i = 0; i+M-1 < size; i++){
        int diff = A[i+M-1] - A[i];

        if (diff < min_diff){
            min_diff = diff;
        }
    }

    cout << min_diff << endl;

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int N, M;
    cin >> N >> M;
    int arr[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    get_minimum_difference(arr, N, M);

    return 0;
}