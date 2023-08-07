#include<iostream>
using namespace std;
int main(){

// int r,c;
// cout << "Enter No of Rows"<<endl;
// cin >>r;
// cout << "Enter No of Columns"<<endl;
// cin >>c;
// // **Rectangle Pattern**//
// for(int i=0; i<r; i++) {
//    for(int j=0; j<c; j++) {
//    cout<<"*";
//    }
//    cout<<endl;
// }
//Hollow Rectangle Pattern
// for(int i=1; i<=r; i++) {
//    for(int j=1; j<=c; j++) {
//   if( i==1|| i==r||  j==1 ||j==c) {
// cout<<"*";}
//    else{
//     cout<<" ";
//    }
// }
// cout<<endl;
// }

// inverted Half Pyramid
// int n=5;
// for (int i=n; i>=1;i--) {
//       for (int j=1; j<=i; j++) {
// cout<<"*";
// }
// cout<<endl;
// }
// Half Pyramid after 180 deg rotation
// int n=5;
// for (int i=n; i>=1;i--) {
//       for (int j=1; j<=i; j++) {
// cout<<"#";
// }
// for (int k=n; k>=i; k--) {
// cout<<"*";
// }
// cout<<endl;
// }
// Half Pyramid number

// int n=5;
// for (int i=1; i<=n; i++)
// {
//     for (int k=1; k<=i; k++)
//     {
//         cout<<i;
//     }
//     cout<<endl;
// }
// Floyd's Triangle
// int n=5;
// int count=1;
// for (int i=1; i<=n; i++)
// {
//     for (int k=1; k<=i; k++)
//     {
//         cout<<count<<" ";
//         count++;
//     }
//     cout<<endl;
// }
// Buuterfly pattern
// int n;
// cin>>n;
// for (int i=1; i<=n; i++)
// {
// for(int j=1; j<=i;j++){
//     cout<<"*";

// }
// int spaces=2*n-2*i;
// for(int j=1; j<=spaces;j++){
//     cout<<" ";

// }
// for(int j=1; j<=i;j++){
//     cout<<"*";

// }
// cout<<endl;
// }

// for (int i=n; i>=1; i--)
// {
// for(int j=1; j<=i;j++){
//     cout<<"*";

// }
// int spaces=2*n-2*i;
// for(int j=1; j<=spaces;j++){
//     cout<<" ";

// }
// for(int j=1; j<=i;j++){
//     cout<<"*";

// }
// cout<<endl;
// }
// inverted Pattern
// int n=5;

// for(int i=1; i<=n; i++){
//     int count=1;
//     for(int j=n; j>=i; j--){
//         cout<<count<<" ";
//         count++;
//     }
//     cout<<endl;
// }
//  0-1 Pattern
// int n=5;
// for(int i=1; i<=n; i++){
    
//     for(int j=1; j<=i; j++){
//       if((i+j)%2==0 ){
//         cout<<"i ";
//       }else{ cout<<"o ";}
//     }
//     cout<<endl;
// }
// // Rhombus Pattern
// int n=5;
// for(int i=1; i<=n; i++){
    
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//     }
//       for(int k=1; k<=n; k++){
//         cout<<"*";
//     }

//     cout<<endl;
// }
// Number Pattern
int n=5;
for(int i=1; i<=n; i++){
    
    for(int j=1; j<=n-i; j++){
        cout<<" ";
    }
      for(int k=1; k<=i; k++){
        cout<<k<<" ";
    }

    cout<<endl;
}
//palindromic Pattern
// int n=5;
for(int i=1; i<=n; i++){
    
    for(int j=1; j<=n-i; j++){
        cout<<" ";
    }
      for(int k=1; k<=i; k++){
        cout<<"* ";
    }

    cout<<endl;
}
for(int i=n; i>=1; i--){
    
    for(int j=1; j<=n-i; j++){
        cout<<" ";
    }
      for(int k=1; k<=i; k++){
        cout<<"* ";
    }

    cout<<endl;
}
    return 0;
}