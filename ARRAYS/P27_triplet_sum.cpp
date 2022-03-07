// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 24/11/2021
// @index: Arrays-Problem27

#include<iostream>
using namespace std;

void get_triplet_count(int* A, int size, int required_sum){
    int triplet_with_sum_k = 0;
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            for (int k = j + 1; k < size; k++){
                if (A[i] + A[j] + A[k] == required_sum){
                    triplet_with_sum_k += 1;
                }
            }
        }
    }

    cout << triplet_with_sum_k << endl;

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int N, K;
    cin >> N >> K;
    int arr[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    get_triplet_count(arr, N, K);

    return 0;
}