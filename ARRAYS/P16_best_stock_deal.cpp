// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 26/11/2021
// @index: Arrays-Problem16

#include<iostream>
using namespace std;

void get_best_deal(int* A, int size){
    int min_pos = 0;
    for (int i = 1; i < size; i++){
        if (A[i] < A[min_pos]){
            min_pos = i;
        }
    }

    if (min_pos == size-1){
        cout << "0\n";
        return;
    }
    else{
        int max_pos = min_pos + 1;
        for (int j = min_pos+2; j < size; j++){
            if (A[j] > A[max_pos]){
                max_pos = j;
            }
        }

        int minimum = A[min_pos];
        int maximum = A[max_pos];

        cout << maximum - minimum << endl;
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

    get_best_deal(arr, N);

    return 0;
}