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
    cout<<"r Factorial : "<<rr<<", n Factorial : "<<nn<<" ,n-r Factorial : "<<nr<<endl;
    int ncr=(nn)/((nr)*rr);
    return ncr;
}
int main(){
    int n,r;
    cin >>n>>r;
   // cout<< fact(n)<<endl;  // for factorial
 int total=nCr(n,r);
 cout<<total<<endl;
return 0;
}