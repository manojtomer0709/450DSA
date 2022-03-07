// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 25/11/2021
// @index: Arrays-Problem7

#include<iostream>
using namespace std;

void get_maximum_sum(int* A, int size){
    int maximum_sum_of_contiguous_subarray = 0;
    for (int i = 0; i < size; i++){
        for (int j = i; j < size; j++){
            int sum = 0;
            for (int k = i; k <= j; k++){
                sum += A[k];
            }
            if (sum > 0 && sum > maximum_sum_of_contiguous_subarray){
                maximum_sum_of_contiguous_subarray = sum;
            }
            else if (sum < 0 && maximum_sum_of_contiguous_subarray == 0){
                maximum_sum_of_contiguous_subarray = sum;
            }
        }
    }

    cout << maximum_sum_of_contiguous_subarray << endl;

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

    get_maximum_sum(arr, N);

    return 0;
}