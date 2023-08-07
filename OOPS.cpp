#include<iostream>
#include<string>
using namespace std;
class student{
     string name;
    public:
    student(string s)
    {
        name = s;
    }
   void setName(string s) {
    name = s;
      }
      void getName() {
      cout << name <<endl;
      }
    int age;
    bool gender;
    void print(){
        cout<< name<<" "<< age<<" "<< gender<<endl;
    }
};
int main(){
    student a("zeeshan");
    a.getName();
// student arr[3];
// string s;
// for(int i=0; i<3; i++){
// cout<<"name: ";
// cin>>s;
// arr[i].setName(s);
// cout<<"age: ";
// cin>>arr[i].age;
// cout<<"gender: ";
// cin>>arr[i].gender;
// }

// 	for(int i=0; i<3; i++){
//     arr[i].print();
//     }
    return 0;
}