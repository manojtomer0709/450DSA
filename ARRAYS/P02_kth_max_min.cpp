// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 24/11/2021
// @index: Arrays-Problem2

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

void get_kth_max_and_kth_min(int* A, int size, int k){
    ssort(A, size);
    int kth_min, kth_max;
    
    kth_min = A[k-1];
    kth_max = A[size-k];

    cout << kth_min << "\n";
    cout << kth_max << "\n";

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int N, k;
    cin >> N >> k;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    get_kth_max_and_kth_min(arr, N, k);

    return 0;
}