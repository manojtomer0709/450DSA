// @name : manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 27/11/2021
// @index: Matrix-Problem2

#include<iostream>
using namespace std;

const int row_count = 3;
const int column_count = 3;

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

void get_median(int A[row_count][column_count]){
    int B[row_count * column_count];
    int size = row_count * column_count;
    int k = 0;
    for (int p = 0; p < row_count; p++){
        for (int q = 0; q < column_count; q++){
            B[k] = A[p][q];
            k++;
        }
    }

    ssort(B, row_count*column_count);

    if (size % 2 == 1){
        cout << B[size/2] << endl;
    }
    else if (size % 2 == 0){
        int a = B[size/2];
        int b = B[(size/2) + 1];
        cout << (float(a) + float(b)) / 2;
    }

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int arr[row_count][column_count];
    for (int i = 0; i < row_count; i++){
        for (int j = 0; j < column_count; j++){
            cin >> arr[i][j];
        }
    }

    get_median(arr);

    return 0;
}
