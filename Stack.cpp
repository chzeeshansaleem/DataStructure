#include <iostream>
#include <string>
using namespace std;
#define n 100

class stack {
    int* arr;
    int top;
public:
    stack() {
        arr = new int[n];
        top = -1;
    }
    void push(int x) {
        if (top == n - 1) {
            cout << "Stackoverflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop() {
        if (top == -1) {
            cout << "No elements to pop" << endl;
            return;
        }
        top--;
    }
    int Top() {
        if (top == -1) {
            cout << "No elements on top" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty() {
        return top == -1;
    }
};

int main() {
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Top element: " << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << "Top element: " << st.Top() << endl;
    cout << "Stack empty? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}
