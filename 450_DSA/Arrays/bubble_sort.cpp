

#include<bits/stdc++.h>
using namespace std;

void sort(int arr[]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[j]>arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[10] = {1,5,2,4,3};

    sort(arr);

    for(int i=0;i<5;i++)
        cout<<arr[i];
}
