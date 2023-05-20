#include<iostream>
using namespace std;
int main(){

// for(int i=1; i<100; i++){
// if(i%3==0){
//     continue;
// }
// cout<<i<<endl;
// }
// number is prime or not
// int n;
//  cin>>n;
// int i;
// for( i=2; i<n; i++){
// if(n%i==0){
// cout<<"Number is non prime"<<endl;
// break;
// }
// }
// if(i==n){
// cout<<"Number is prime"<<endl;

// }
// print all prime numbers
int a,b;
int num,i;
cin >> a>>b;
for( num=a; num<=b; num++)
{
     for( i=2;i<=num;i++){
        if(num%i==0)
        {
            break;
        }
     }
     if(i==num){
     cout<<num<<endl;
     }
}

    return 0;
}
