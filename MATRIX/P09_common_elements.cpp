// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 27/11/2021
// @index: Matrix-Problem9

#include<iostream>
using namespace std;

const int row_count = 4;
const int column_count = 5;

bool present_in_all_other_rows(int A[row_count][column_count], int key){
    bool present_in_all_rows = true;
    for (int q = 1; q < row_count; q++){
        bool present_in_row = false;
        for (int r = 0; r < column_count; r++){
            if (A[q][r] == key){
                present_in_row = true;
                break;
            }
        }
        if (present_in_row == false){
            present_in_all_rows = false;
            break;
        }
    }
    if (present_in_all_rows){
        return true;
    }
    else{
        return false;
    }
}

bool already_checked(int A[row_count][column_count], int key, int pos){
    for (int i = 0; i < pos; i++){
        if (A[0][i] == key){
            return true;
        }
    }
    return false;
}

void get_common_elements_in_rows(int A[row_count][column_count]){
    for (int p = 0; p < column_count; p++){

        if (already_checked(A, A[0][p], p)){
            continue;
        }
        if (present_in_all_other_rows(A, A[0][p])){
            cout << A[0][p] << " ";
        }
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

    get_common_elements_in_rows(arr);
    
    return 0;
}
