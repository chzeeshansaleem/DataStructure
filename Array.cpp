#include<iostream>
using namespace std;
// Binary search
int BinarySearch(int arr[],int n,int key){
     int s=0;
     int e=n;
     while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
        return mid;
    
        } else if(arr[mid]>key){
            e= mid-1;
        }
        else {
        s=mid+1;
        }
     }


}
// Selection Sort Aarry
int selectionSortArray(int arr[], int n)
{
  for(int i=0; i<n-1; i++){
  for(int j=i+1; j<n; j++)
  {
    if(arr[j]<arr[i])
    {
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
 }
 }
 for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
 }
 cout<<endl;
}
// Bubble Sort Array
int bubbleSortArray(int arr[], int n)
{
    int counter=1;
    while(counter<n){
      for(int i=0; i<n-counter; i++){
       if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
       }
      }  
      counter++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// Insertion sort method
int insertionSortArray(int arr[], int n)
{
 for(int i=1; i<n; i++)
  {
    int current=arr[i];
    int j=i-1;
    while(arr[j]>current && j>=0)
    {
        arr[j+1] = arr[j];
        j--;

    }
    arr[j+1]=current;
   

  }
   for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
   // // Binary Search
 int n;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++){
 cin>>arr[i];
 }
//  int key;
//  cin>>key;
// cout<<BinarySearch(arr,n,key)<<endl;

// Sorting Array
// Selction Sort Method 
//cout<<selectionSortArray(arr,n)<<endl;
//BUBBLE SORT METHOD
//cout<<bubbleSortArray(arr,n)<<endl;
// insertion sort method
//cout<<insertionSortArray(arr,n)<<endl;
// sum of all sub arrays
int sum=0;
 int temp;
for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++){
         
    temp=sum;
     sum+=arr[j];
 cout<<sum<<" ";

    }
    cout<<endl;
  
    if(sum<temp)
    {
        sum=temp;
    }
   cout<<sum<<endl;
}
// max till m
// for(int i=0; i<n; i++){
// int sum=0;

// sum=max(sum,arr[i]);
// cout<<sum<<" ";
// }
// Longest arthemetic array (KickStart)

// int diff;
// int temp,prevd;

// for(int i=n; i>=0; i--){
// for(int j=i; j>=i-1;j--){
//     diff=arr[i]-arr[j];

  
   

// }

// if(temp==diff){
//     cout<<"arthemetic "<<endl;
//     }
//     else{
//             cout<<" no arthemetic "<<endl;
 
//     }
// }

return 0;

}