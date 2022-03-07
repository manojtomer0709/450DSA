// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 26/11/2021
// @index: Arrays-Problem22

#include<iostream>
using namespace std;

void get_maximum_subarray_product(int* A, int size){
    int maximum_product = 0;
    for (int i = 0; i < size; i++){
        for (int j = i; j < size; j++){
            int product = 1;
            for (int k = i; k <= j; k++){
                product = product * A[k];
            }
            if (product >= maximum_product){
                maximum_product = product;
            }
        }
    }

    cout << maximum_product << endl;

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

    get_maximum_subarray_product(arr, N);

    return 0;
}