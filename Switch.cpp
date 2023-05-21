#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter the two numbers "<<endl;
cin>>n1>>n2;

cout<<"Enter A to D"<<endl;
char a;
cin >> a;
switch(a)
{
    case 'A':
    cout<<(n1+n2)<<endl;
    break;
     case 'S':
    cout<<(n1-n2)<<endl;
    break;
     case 'M':
    cout<<(n1*n2)<<endl;
    break;
     case 'D':
   if(n1>=n2)
   {
     cout<<(n1/n2)<<endl;
   }
    break;
    default:
    break;
}

    return 0;
}