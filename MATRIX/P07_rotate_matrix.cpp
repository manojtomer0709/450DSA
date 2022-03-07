// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 27/11/2021
// @index: Matrix-Problem7

#include<iostream>
using namespace std;

const int row_count = 3;
const int column_count = 3;

void rotate_by_90_degrees(int A[row_count][column_count]){
    for (int p = 0; p < row_count; p++){
        for (int q = 0; q <= p; q++){
            swap(A[p][q], A[q][p]);
        }
    }

    for (int p = 0; p < row_count; p++){
        for (int q = 0; q < column_count/2; q++){
            swap(A[p][q], A[p][column_count - q - 1]);
        }
    }

    for (int i = 0; i < row_count; i++){
        for (int j = 0; j < column_count; j++){
            cout << A[i][j] << " ";
        }
        cout << "\n";
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

    rotate_by_90_degrees(arr);

    return 0;
}