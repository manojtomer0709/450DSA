// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 26/11/2021
// @index: Matrix-Problem8

#include<iostream>
using namespace std;

const int row_count = 4;
const int column_count = 4;

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

void get_kth_smallest(int A[row_count][column_count], int K){
    int B[row_count * column_count];
    int x = 0;
    for (int p = 0; p < row_count; p++){
        for (int q = 0; q < column_count; q++){
            B[x] = A[p][q];
            x++;
        }
    }

    ssort(B, row_count * column_count);

    cout << B[K-1] << endl;

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int K;
    cin >> K;
    int arr[row_count][column_count];
    for (int i = 0; i < row_count; i++){
        for (int j = 0; j < column_count; j++){
            cin >> arr[i][j];
        }
    }

    get_kth_smallest(arr, K);
    
    return 0;
}
