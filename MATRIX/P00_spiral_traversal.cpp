// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 26/11/2021
// @index: Matrix-Problem0

#include<iostream>
using namespace std;

const int row_count = 3;
const int column_count = 3;

void spiral_traversal(int A[row_count][column_count]){
    int starting_row;
    int starting_column;
    int ending_row;
    int ending_column;

    starting_row = 0;
    starting_column = 0;
    ending_row = row_count-1;
    ending_column = column_count-1;

    while (starting_row <= ending_row && starting_column <= ending_column){
        for (int i = starting_column; i <= ending_column; i++){
            cout << A[starting_row][i] << " ";
        }
        starting_row++;

        for (int j = starting_row; j <= ending_row; j++){
            cout << A[j][ending_column] << " ";
        }
        ending_column--;

        for (int k = ending_column; k >= starting_column; k--){
            cout << A[ending_row][k] << " ";
        }
        ending_row--;

        for (int m = ending_row; m >= starting_row; m--){
            cout << A[m][starting_column] << " ";
        }
        starting_column++;
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    int arr[row_count][column_count];
    for (int i = 0; i < row_count; i++){
        for (int j = 0; j < column_count; j++){
            cin >> arr[i][j];
        }
    }

    spiral_traversal(arr);

}