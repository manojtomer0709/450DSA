#include<iostream>
using namespace std;

void ssort(int* A, int size){
    for (int i = 0; i < size; i++){
        int jmin = i;
        for (int j = i+1; j < size; j++){
            if (A[j] < A[jmin]){
                jmin = j;
            }
        }
        if (jmin != i){
            swap(A[i], A[jmin]);
        }
    }

    return;
}

void get_median(int* A, int size){
    ssort(A, size);

    if (size%2 == 1){
        cout << A[size/2] << " ";
        return;
    }

    else if (size % 2 == 0){
        int a = A[size/2];
        int b = A[(size/2) + 1];
        cout << (float(a) + float(b)) / 2 << " ";
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

    get_median(arr, N);

    return 0;
}