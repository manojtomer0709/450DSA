// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 28/11/2021
// @index: Matrix-Problem1

#include<iostream>
using namespace std;

const int row_count = 3;
const int column_count = 3;

void search_for(int key, int A[row_count][column_count]){
    // Only valid for a row wise and column wise sorted input matrix
    int p = 0;
    int q = column_count - 1;

    while (p < row_count && q >= 0){
        if (key == A[p][q]){
            cout << "True\n";
            return;
        }
        else if (key < A[p][q]){
            q--;
        }
        else if (key > A[p][q]){
            p++;
        }
    }

    cout << "False\n";

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int key;
    cin >> key;
    int arr[row_count][column_count];
    for (int i = 0; i < row_count; i++){
        for (int j = 0; j < column_count; j++){
            cin >> arr[i][j];
        }
    }

    search_for(key, arr);
    
    return 0;
}
