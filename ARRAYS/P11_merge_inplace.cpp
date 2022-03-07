// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 26/11/2021
// @index: Arrays-Problem11

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

void merge_in_place(int* A, int* B, int size1, int size2){
    int ptr1 = 0;
    int ptr2 = 0;
    int ptr3 = size1-1;

    while (ptr1 < size1 && ptr2 < size2){
        if (A[ptr1] < B[ptr2]){
            ptr1++;
        }
        else if (B[ptr2] < A[ptr1]){
            swap(B[ptr2], A[ptr3]);
            ptr2++; ptr3--;
        }
    }
    
    ssort(A, size1);
    ssort(B, size2);

    for (int m = 0; m < size1; m++){
        cout << A[m] << " ";
    }
    cout << "\n";
    for (int n = 0; n < size2; n++){
        cout << B[n] << " ";
    }
    cout << "\n";

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int N1, N2;
    cin >> N1 >> N2;
    int arr[N1];
    int brr[N2];
    for (int i = 0; i < N1; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < N2; i++){
        cin >> brr[i];
    }

    merge_in_place(arr, brr, N1, N2);

    return 0;
}