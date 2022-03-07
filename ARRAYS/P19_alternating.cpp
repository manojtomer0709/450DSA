// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 23/11/2021
// @index: Arrays-Problem19

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

void rearrange_alternate(int* A, int size){
    ssort(A, size);
    int ptr1 = 1;
    int ptr2 = 0;
    while(ptr2 < size){
        if (A[ptr2] > 0){
            break;
        }
        ptr2++;
    }

    while (A[ptr1] < 0 && ptr2 < size){
        swap(A[ptr1], A[ptr2]);
        ptr1 += 2;
        ptr2++;
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
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    rearrange_alternate(arr, N);

    return 0;
}