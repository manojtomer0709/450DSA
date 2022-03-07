// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 23/11/2021
// @index: Arrays-Problem5

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

void get_intersection(int* A, int* B, int size1, int size2){
    for (int i = 0; i < size1; i++){
        int key = A[i];
        if (is_present_in(B, size2, key)){
            cout << key << " ";
        }
    }
    cout << "\n";

    return;
}

void get_union(int* A, int* B, int size1, int size2){
    int ptr1 = 0;
    int ptr2 = 0;

    while (ptr1 < size1 && ptr2 < size2){
        if (A[ptr1] < B[ptr2]){
            cout << A[ptr1] << " ";
            ptr1++;
        }
        else if (B[ptr2] < A[ptr1]){
            cout << B[ptr2] << " ";
            ptr2++;
        }
        else if (A[ptr1] == B[ptr2]){
            cout << B[ptr2] << " ";
            ptr1++;
            ptr2++;
        }
    }
    
    while(ptr1 < size1){
        cout << A[ptr1] << " ";
        ptr1++;
    }

    while (ptr2 < size2){
        cout << B[ptr2] << " ";
        ptr2++;
    }
    cout << "\n";

    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    int N1, N2;
    cin >> N1 >> N2;
    int arr[N1];
    int brr[N2];
    for(int i = 0; i < N1; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < N2; i++){
        cin >> brr[i];
    }

    get_union(arr, brr, N1, N2);
    get_intersection(arr, brr, N1, N2);

    return 0;
}