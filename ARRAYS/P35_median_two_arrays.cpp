// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 26/11/2021
// @index: Arrays-Problem35

#include<iostream>
using namespace std;

void ssort(int* A, int N){
    for (int i = 0; i < N; i++){
        int jmin = i;
        for (int j = i+1; j < N; j++){
            if (A[j] < A[jmin]){
                jmin = i;
            }
        }
        if (jmin != i){
            swap(A[i], A[jmin]);
        }
    }

    return;
}

void get_median_arrays(int* A, int* B, int size1, int size2){
    int merged_array[size1+size2];
    int k = 0;
    int i = 0;
    int j = 0;
    while (i < size1 && j < size2){
        if (A[i] < B[j]){
            merged_array[k] = A[i];
            k++;
            i++;
        }
        else if (B[j] < A[i]){
            merged_array[k] = B[j];
            k++;
            j++;
        }
        else if (A[i] == B[j]){
            merged_array[k] = B[j];
            i++;
            j++;
            k++;
        }
    }

    while (i < size1){
        merged_array[k] = A[i];
        k++;
        i++;
    }
    while (j < size2){
        merged_array[k] = B[j];
        k++;
        j++;
    }

    ssort(merged_array, size1+size2);

    if ((size1+size2) % 2 != 0){
        cout << merged_array[(size1+size2) / 2] << " ";
        return;
    }
    else{
        int a = merged_array[(size1+size2) / 2];
        int b = merged_array[(size1+size2) / 2 + 1];
        cout << (float(a) + float(b)) / 2;

        return;
    }
}

int main(){
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

    get_median_arrays(arr, brr, N1, N2);

    return 0;
}