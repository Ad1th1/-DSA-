#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
   
}

int main(){
   int n,arr[10000];
   cin>>n;
   for(int i=0;i<n;i++)
      cin>>arr[i];

   int maxi = *max_element(arr,arr+n);
   int mini = *min_element(arr,arr+n);

   cout<<"Max and min are "<<maxi<<" and "<<mini; 
}
