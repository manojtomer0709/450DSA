// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// date: 23/11/2021
// @index: Arrays-Problem26

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

void is_subset(int* B, int* A, int size2, int size1){
    int j = 0;
    bool subset_status = true;
    while (j < size2){
        if (!is_present_in(A, size1, B[j])){
            subset_status = false;
            break;
        }
        j++;
    }

    if (subset_status == true){
        cout << "YES\n";
    }
    else if (subset_status == false){
        cout << "NO\n";
    }

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int N1, N2;
    cin >> N1 >> N2;
    int arr[N1];
    int brr[N2];
    for (int i = 0; i < N1; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < N2; i++){
        cin >> brr[i];
    }

    is_subset(brr, arr, N2, N1);

    return 0;
}