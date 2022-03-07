// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 24/11/2021
// @index: Array-Problem1

#include<iostream>
using namespace std;

void min_and_max_in_array(int* A, int size){
    int absolute_minimum = A[0];
    int absolute_maximum = A[0];

    for(int i = 1; i < size; i++){
        if (A[i] < absolute_minimum){
            absolute_minimum = A[i];
        }
        else if (A[i] > absolute_maximum){
            absolute_maximum = A[i];
        }
    }

    cout << absolute_minimum << "\n";
    cout << absolute_maximum << "\n";

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    min_and_max_in_array(arr, N);

    return 0;
}