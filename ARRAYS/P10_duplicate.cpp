// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 23/11/2021
// @index: Arrays-Problem10

#include<iostream>
using namespace std;

void get_duplicate(int* A, int size){
    for (int i = 0; i < size; i++){
        int frequency = 0;
        for (int j = 0; j < size; j++){
            if (A[j] == A[i]){
                frequency++;
            }
        }
        if (frequency == 2){
            cout << A[i] << " ";
            return;
        }
    }

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    get_duplicate(arr, size);

    return 0;
}