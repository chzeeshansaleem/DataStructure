#include<iostream>
#include<math.h>
using namespace std;
int fact(int num)
{
    int factorial=1;
    for(int i=1; i<=num; i++)
    {
        factorial*=i;
    }
    return factorial;
}
int nCr(int n,int r){
    int rr=fact(r);
    int nn=fact(n);
    int nr=fact(n-r);
    int ncr=(nn)/((nr)*rr);
    return ncr;
}
int main(){
    int n,r;
    cin >>n>>r;
//    // cout<< fact(n)<<endl;  // for factorial
//     cout<<nCr(n,r)<<endl;
return 0;
}