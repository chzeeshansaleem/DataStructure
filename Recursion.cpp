
#include <iostream>
using namespace std;

int sum(int n){
    if(n==0) return 0;
    int prevsum = sum(n-1);
    return n + prevsum;
}
int power(int n,int pow){
if(pow==0) return 1;
     int prev=power(n,pow-1);
    return n*prev;
}
int factorial(int n){
    if(n==0||n==1) return 1;
    int total=factorial(n-1);
    return total*n;
}
int fabonacci(int n){
if(n==0) return 0;
if(n==1) return 1;
    return fabonacci(n-1)+fabonacci(n-2);
}
bool sortArray(int arr[],int size){
    if(size==1) return true;
    bool rest =sortArray(arr+1,size-1);
    return (arr[0]<arr[1] && rest);
       
   

}
void printNumber(int n){
if(n==0) return;
 printNumber(n-1);
cout<<n<<" "; 
   
}
int main(){
    int result = sum(5);
    cout << "Sum: " << result << endl;
 int p=power(2,3);
cout << "Power: "<<p<< endl;
int fact=factorial(5);
cout << "Factorial: "<<fact<<endl;
int fab=fabonacci(6);
cout<<" fab: "<<fab<<endl;
int arr[]={0,1,2,3,4,5};
int size=sizeof(arr)/sizeof(arr[0]);
int sort=sortArray(arr,size);
cout<<" sort: "<<sort<<endl;
printNumber(10);

    return 0;
}
