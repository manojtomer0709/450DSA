// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 23/11/2021
// @index: Arrays-Problem15

#include<iostream>
using namespace std;

void get_inversion_count(int* A, int size){
    int total_inversion_count = 0;
    for (int i = 0; i < size; i++){
        int individual_inversion_count = 0;
        for (int j = i + 1; j < size; j++){
            if (A[i] > A[j]){
                individual_inversion_count++;
            }
        }
        total_inversion_count += individual_inversion_count;
    }

    cout << total_inversion_count << endl;

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

    get_inversion_count(arr, N);

    return 0;
}