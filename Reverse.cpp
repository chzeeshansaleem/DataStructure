#include<iostream>
#include<math.h>
using namespace std;
int main(){

// int n;
// cin>>n;
// int revrse=0;
// while(n>0){
//     int lastDigit=n%10;
//     revrse=revrse*10 + lastDigit;
//     n=n/10;

// }
// cout<<revrse<<endl;

int n;
cin >> n;

int sum=0;
while(n>0){
    int lastDigit=n%10;
    
    sum+= pow(lastDigit,3);
    n=n/10;

}
cout<<sum<<endl;
return 0;
}