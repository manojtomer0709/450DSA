// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 23/11/2021
// @index: Arrays-Problem3

#include<iostream>
using namespace std;

void sort_012(int* A, int size){
    int frequency_0 = 0;
    int frequency_1 = 0;
    int frequency_2 = 0;
    for (int i = 0; i < size; i++){
        if (A[i] == 0){
            frequency_0++;
        }
        else if (A[i] == 1){
            frequency_1++;
        }
        else if (A[i] == 2){
            frequency_2++;
        }
    }

    int k = 0;
    while (k < size){
        if (k < frequency_0){
            A[k] = 0;
        }
        else if (k >= frequency_0 && k < frequency_0 + frequency_1){
            A[k] = 1;
        }
        else{
            A[k] = 2;
        }
        k++;
    }

    for (int p = 0; p < size; p++){
        cout << A[p] << " ";
    }

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    sort_012(arr, N);

    return 0;
}