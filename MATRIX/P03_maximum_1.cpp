// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 26/11/2021
// @index: Matrix-Problem3

#include<iostream>
using namespace std;

const int row_count = 3;
const int column_count = 3;

void max_1_row(int A[row_count][column_count]){
    int maximum_count = 0;
    int maximum_1_row_index = -1;
    for (int i = 0; i < row_count; i++){
        int count = 0;
        for (int j = 0; j < column_count; j++){
            if (A[i][j] == 1){
                count++;
            }
        }

        if (count > maximum_count){
            maximum_count = count;
            maximum_1_row_index = i;
        }
    }

    cout << maximum_1_row_index << endl;

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

    max_1_row(arr);

    return 0;
}
