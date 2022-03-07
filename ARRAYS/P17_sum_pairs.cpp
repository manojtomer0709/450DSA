// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 23/11/2021
// @index: Arrays-Problem17

#include<iostream>
using namespace std;

void get_sum_pair_count(int* A, int size, int k){
    int global_count = 0;
    for (int i = 0; i < size; i++){
        int count = 0;
        for (int j = i + 1; j < size; j++){
            if (A[i] + A[j] == k){
                count++;
            }
        }
        global_count += count;
    }

    cout << global_count << endl;

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

    get_sum_pair_count(arr, N, k);

    return 0;
}