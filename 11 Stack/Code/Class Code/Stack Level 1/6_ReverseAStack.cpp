#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& st, int &element) {
    if (st.empty()) {
        st.push(element);
        return;
    }

    int temp = st.top();
    st.pop();

    insertAtBottom(st, element);
    st.push(temp);
}

void reverseStack(stack<int>& st) {
    if (st.empty()) {
        return;
    }

    int element = st.top();
    st.pop();

    reverseStack(st);
    insertAtBottom(st, element);
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    reverseStack(st);

    // Print the stack to see the updated order
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
