#include<iostream>
#include<string>
using namespace std;

int main(){
    // reverse String
// string str="muzammal murtaza";
//     int n=str.length();
//     for(int i=0;i<n/2;i++){
//         char temp=str[i];
//         str[i]=str[n-i-1];
//         str[n-i-1]=temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<str[i];
//     }

// Palindrome string
// string st="a5aa";
// int l=st.length();
// bool flag=true;
// for(int i=0;i<l/2;i++)
// {
//     if(st[i]!=st[l-i-1]){
//         flag=false;
//         break;
//     }
// }
// if(flag){
//     cout<<"palindrome"<<endl;
// }else{
//        cout<<" not palindrome"<<endl;
 
// }
//  non repeated
   char count[256];
    string str="muzammal";
    for (int i = 0;i<str.length(); i++) 
        count[str[i]]++;         
      int index = -1, j; 
     for (j = 0; j < str.length(); j++) { 
        if (count[str[j]] == 1) { 
                index = j; 
                break; 
            } 
        } 
    cout<<str[index]<<endl;

    return 0;
}