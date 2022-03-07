// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 26/11/2021
// @index: Arrays-Problem31

#include<iostream>
using namespace std;

void partition(int* A, int size, int a, int b){
    
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

    for (int i = 0; i < size; i++){
        cout << A[i] << " ";
    }

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int N, a, b;
    cin >> N >> a >> b;
    int arr[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    partition(arr, N, a, b);

    return 0;
}