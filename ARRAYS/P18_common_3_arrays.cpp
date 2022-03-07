// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 23/11/2021
// @index: Arrays-Problem18

#include<iostream>
using namespace std;

bool is_present_in(int* A, int size, int key){
    for (int i = 0; i < size; i++){
        if (A[i] == key){
            return true;
        }
    }
    return false;
}

void get_common_elements(int* A, int* B, int* C, int size1, int size2, int size3){
    for (int i = 0; i < size1; i++){
        if (!is_present_in(B, size2, A[i])){
            continue;
        }
        else if (is_present_in(B, size2, A[i])){
            if (!is_present_in(C, size3, A[i])){
                continue;
            }
            else if (is_present_in(C, size3, A[i])){
                cout << A[i] << " ";
            }
        }
    }

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int N1, N2, N3;
    cin >> N1 >> N2 >> N3;
    int arr[N1];
    int brr[N2];
    int crr[N3];
    for (int i = 0; i < N1; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < N2; i++){
        cin >> brr[i];
    }
    for (int i = 0; i < N3; i++){
        cin >> crr[i];
    }

    get_common_elements(arr, brr, crr, N1, N2, N3);

    return 0;
}