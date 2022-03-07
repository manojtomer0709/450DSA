// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 26/11/2021
// @index: Arrays-Problem30

#include<iostream>
using namespace std;

void get_smallest_subarray_with_sum_greater_than_k(int* A, int size, int value){
    int minimim_length = size+1;
    for (int i = 0; i < size; i++){
        for (int j = i; j < size; j++){
            int sum = 0;
            for (int k = i; k <= j; k++){
                sum += A[k];
            }
            if (sum > value){
                int length = j - i + 1;
                if (length < minimim_length){
                    minimim_length = length;
                }
            }
        }
    }

    cout << minimim_length << endl;

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int N, k;
    cin >> N >> k;
    int arr[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    get_smallest_subarray_with_sum_greater_than_k(arr, N, k);

    return 0;
}