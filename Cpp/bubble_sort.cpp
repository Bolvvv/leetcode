//
// Created by bolvvv on 2021/3/17.
//

#include "iostream"

using namespace std;

void bubble_sort(int a[]){
    for(int i = 0; i < sizeof(a); i++){
        for(int j = 0; j < sizeof(a)-1-i; j++){
            if(a[j]>a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}