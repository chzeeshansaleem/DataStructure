#include<iostream>
using namespace std;
int HexaToDecimal(string n)
{
    int ans=0;
    int x=1;
    int s=n.size();
    for (int i=s-1; i>=0; i--) {
if(n[i]>='0'&& n[i]<='9')
{
    ans+=x*(n[i]-'0');
}
else if(n[i]>='A' && n[i]<='F'){
    ans+=x*(n[i]-'A'+10);
}
else{
    x*=16;
}
    }
  
    return ans;
}
int main(){
// int a;
// cin >> a;
// int sum = 0;
// for(int i=1; i<=a; i++) 
// {sum +=i;}
// cout << sum << endl;
string n;
cin >> n ;
cout << HexaToDecimal(n)<<endl;

    return 0;
}