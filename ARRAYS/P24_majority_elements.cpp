// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 24/11/2021
// @index: Arrays-Problem24

#include<iostream>
using namespace std;

void get_majority_elements(int* A, int size, int k){
    if (size < k){
        for (int i = 0; i < size; i++){
            cout << A[i] << " ";
        }
        cout << "\n";
        return;
    }
    else{
        int cutoff_frequency = size / k;
        for (int i = 0; i < size; i++){
            int right_frequency = 0;
            for (int j = i; j < size; j++){
                if (A[j] == A[i]){
                    right_frequency++;
                }
            }
            if (right_frequency > cutoff_frequency){
                cout << A[i] << " ";
            }
        }
    }

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

    get_majority_elements(arr, N, k);

    return 0;
}