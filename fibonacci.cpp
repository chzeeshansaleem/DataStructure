#include<iostream>
#include<math.h>
using namespace std;
void fibonacci(int n){
    int t1=0;
    int t2=1;
    int next;
    for(int i=0; i<n;i++)
    {
        cout <<t1<<endl;
        next =t1+t2;
        t1=t2;
        t2=next;
    }
}
int main(){
int a;
cin>>a;
fibonacci(a);

return 0;
}