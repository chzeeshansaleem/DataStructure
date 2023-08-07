#include<iostream>
#include<string>
using namespace std;
bool hasCycle(int nums[], int size) {
 
    int slow = nums[0];  // Slow pointer
    int fast = nums[0];      // Fast pointer

    // Move the slow and fast at different speeds until they meet
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Reset the slow to the start while keeping fast at the meeting point m 
    slow = nums[0];

    // Move slow and fast at the same speed until they meet again
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    // If they meet again at the starting point, there is a cycle
   if(nums[slow] == nums[fast])
   {
    return 1;	
   }
   else return 0;
   
   
    
    
}
bool isOneEditAway(const string& str1, const string& str2) {
    int len1 = str1.length();
    int len2 = str2.length();

    // Check if the difference in lengths is more than 1
    if (abs(len1 - len2) > 1) {
        return false;
    }

    int i = 0, j = 0;
    int count = 0;

    // Traverse both strings simultaneously
    while (i < len1 && j < len2) {
        // If characters don't match
        if (str1[i] != str2[j]) {
            if (count == 1) {
                return false;
            }

            // If lengths are equal, move both pointers
            if (len1 == len2) {
                i++;
                j++;
            } else if (len1 > len2) {
                i++; // Move pointer of the longer string
            } else {
                j++; // Move pointer of the longer string
            }

            count++;
        } else {
            // If characters match, move both pointers
            i++;
            j++;
        }
    }

    // If there are remaining characters in any string
    if (i < len1 || j < len2) {
        count++;
    }

    // Return true if count is 1, indicating only one edit away
    return (count == 1);
}
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int prev = 0;
    int curr = 1;
    int next;

    for (int i = 2; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}
string findRepeatedAlphabets(const string& input) {
    const int MAX_CHAR = 256; // Maximum number of ASCII characters
    int count[MAX_CHAR] = {0}; // Initialize the count array with zeroes
    string repeatedAlphabets;

    for (char ch : input) {
        count[ch]++;
        if (count[ch] ==2) {
            repeatedAlphabets += ch;
        }
    }

    return repeatedAlphabets;
}
int findMissingNumber(int arr[], int size) {
    int n = 5; // Highest number in the range
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    return  expectedSum-actualSum;
}
int main(){
// //Sum of two large numbers stored as string
// string str1 = "123";
//     string str2 = "981";
//     string str;
//     if(str1.length()>str2.length()){
//         string temp=str1;
//         str1=str2;
//         str2=temp;
//     }
//     int n1=str1.length();
//     int n2=str2.length();
//     int diff=n2-n1;
//     int carry=0;
   
//     for(int i=n1-1; i>=0; i--){
//        int sum=((str1[i]-'0')+(str2[i+diff]-'0')+carry);
//         str+=sum%10 + '0';
//         carry=sum/10;
//     }
//     for(int i=n2-n1-1; i>=0; i--){
//        int sum=((str2[i]-'0')+carry);
//         str+=sum%10 + '0';
//         carry=sum/10;
//     }
//     if(carry) str+=carry+'0';
//     int n=str.length();
//     for(int i=0;i<n/2;i++){
//         char temp=str[i];
//         str[i]=str[n-i-1];
//         str[n-i-1]=temp;
    
//     }
//      cout<<str1<<endl;
//      cout<<str2<<endl;
//     cout<<"----\n";
//     cout<<str<<endl;
//     cout<<"----\n";
//Reverse a string
    // string str="zeeshan";
    // int n=str.length();
    // for(int i=0;i<n/2;i++){
    //     char temp=str[i];
    //     str[i]=str[n-i-1];
    //     str[n-i-1]=temp;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<str[i];
    // }
// //Check a string is palindrome or not
//  string str="a23a";
//     int n=str.length();
//     bool flag=true;
//     for(int i=0;i<n/2;i++){
//         if(str[i]!=str[n-i-1]) {flag=false; break;}
//     }
//     if(flag) cout<<"palindrome\n";
//     else cout<<"no\n";
// //Find first non-repeating character in string

//  int count[256] = {0};
//     string str = "aahmmw";

//     for (int i = 0; i < str.length(); i++) {
//         count[str[i]]++;
//     }

//     int index = -1, j;
//     for (j = 0; j < str.length(); j++) {
//         if (count[str[j]] == 1) {
//             index = j;
//             break;
//         }
//     }

//     if (index != -1) {
//         cout << str[index] << endl;
//     }

// find repeating  alphabet
//   string input = "afabadsfb";
//     string repeated = findRepeatedAlphabets(input);

//     if (repeated.empty()) {
//         cout << "No repeated alphabets found.\n";
//     } else {
//        cout << "Repeated alphabets: " << repeated << "\n";
//     }
// find missing number
    // int arr[] = {1,2,3,5}; // Array containing numbers from 1 to 100 with one number missing
    // int size = sizeof(arr) / sizeof(arr[0]);

    // int missingNumber = findMissingNumber(arr, size);
    // cout << "The missing number is: " << missingNumber <<endl;

    //fabonic series
//        int count;
//     cout << "Enter the number of Fibonacci numbers to generate: ";
// cin >> count;

//     cout << "Fibonacci Series: ";
//     for (int i = 0; i < count; i++) {
//         cout << fibonacci(i) << " ";
//     }

//  string str1, str2;

//     cout << "Enter the first string: ";
//     cin >> str1;

//     cout << "Enter the second string: ";
//     cin >> str2;

//     if (isOneEditAway(str1, str2)) {
//         cout << "The strings are one edit away." << endl;
//     } else {
//         cout << "The strings are not one edit away." << endl;
//     }

//   int nums[] = {2, 4, 1, 3, 5,4};  // Example array with a cycle
//     int size = sizeof(nums) / sizeof(nums[0]);

//     if (hasCycle(nums, size)) {
//         cout << "The array has a cycle." << endl;
//     } else {
//         cout << "The array does not have a cycle." <<endl;
//     }
int a=4,b=5;
// a^a=0;
// a^0=a;

a=a^b;
b=b^a;
a=a^b;
cout<<a<<endl;
cout<<b<<endl;
    return 0;
}

