// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 26/11/2021
// @index: Arrays-Problem20

#include<iostream>
using namespace std;

bool zero_prefix_sum(int* A, int size){
    for (int i = 0; i < size; i++){
        if (A[i] == 0){
            return true;
        }
    }
    return false;
}

bool repeated_prefix_sum(int* A, int size){
    for (int i = 0; i < size; i++){
        int key = A[i];
        for (int j = i+1; j < size; j++){
            if (A[j] == key){
                return true;
            }
        }
    }
    return false;
}

void zero_sum_check(int* A, int size){
    int prefix_sum = 0;
    for (int i = 0; i < size; i++){
        prefix_sum += A[i];
        A[i] = prefix_sum;
    }

    if (zero_prefix_sum(A, size)){
        cout << "YES\n";
    }
    else if (repeated_prefix_sum(A, size)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
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

    zero_sum_check(arr, N);

    return 0;
}