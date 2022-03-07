// @name: manojtomer0709
// @email: manojtomer0709@gmail.com
// @date: 25/11/2021
// @index: Arrays-Problem13

#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
    int start;
    int end;
    struct node* next;
};

struct node* top = NULL;

struct node* create_node(){
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));

    return new_node;
}

void push(int interval_start, int interval_end){
    struct node* new_node;
    new_node = create_node();

    new_node->start = interval_start;
    new_node->end = interval_end;

    new_node->next = top;
    top = new_node;

    return;
}

void pop(){
    if (top == NULL){
        return;
    }
    else{
        struct node* temp = top;
        top = top->next;
        free(temp);
    }

    return;
}

void sort_by_start_time(int* A, int size){
    for (int i = 0; i < size; i += 2){
        int jmin = i;
        for (int j = i + 2; j < size; j += 2){
            if (A[j] < A[jmin]){
                jmin = j;
            }
        }
        if (jmin != i){
            swap(A[i], A[jmin]);
            swap(A[i+1], A[jmin+1]);
        }
    }

    return;
}

void merge_intervals(int* A, int size){
    sort_by_start_time(A, size);

    for (int i = 0; i < size; i += 2){
        if (i == 0){
            push(A[i], A[i+1]);
        }
        else{
            if (A[i] > top->end){
                push(A[i], A[i+1]);
            }
            else if (A[i] < top->end && A[i+1] > top->end){
                top->end = A[i+1];
            }
        }
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

    merge_intervals(arr, N);

    struct node* trav = top;
    while (trav != NULL){
        cout << trav->start << " " << trav->end << "\n";
        trav = trav->next;
    }

    return 0;
}