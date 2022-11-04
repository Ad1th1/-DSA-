// Move all the negative elements to one side of the array using quicksort

#include<iostream>
using namespace std;

int partition(int arr[],int start,int end){
   int pivot = arr[start];
   int count = 0;

   for(int i=start+1;i<=end;i++){
      if(arr[i]<=pivot)
         count++;
   }

   int pivotIndex = start + count;
   swap(arr[pivotIndex],arr[start]);

   int i = start, j = end;

   while(i<pivotIndex && j>pivotIndex){
      while(arr[i]<=pivot)
         i++;
      
      while(arr[j]>pivot)
         j--;

      if(i<pivotIndex && j>pivotIndex)
         swap(arr[i++],arr[j--]);
   }
   return pivotIndex;

}

void quicksort(int arr[],int low,int high){
   if(low>=high)
      return;

   int p = partition(arr,low,high);
   quicksort(arr,low,p-1);
   quicksort(arr,p+1,high);
}

int main(){
   int arr[] = {0,3,5,1,2};
   int n = 5;

   quicksort(arr,0,n-1);

   for(int i=0;i<5;i++)
      cout<<arr[i];
}
