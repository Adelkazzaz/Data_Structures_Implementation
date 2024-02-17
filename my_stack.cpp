#include <iostream>
using namespace std;
//Max Size of the Stack
const int MAX_SIZE = 100;

template <class DataType>

class my_stack {
    int top;
    DataType item[MAX_SIZE];
public:
    my_stack():top(-1){}

    bool isEmpty() {
        return(top < 0);
    }
    bool isFull() {
        return(top >= (MAX_SIZE - 1));
    }

    void push(DataType Element) {
        if (isFull()) {
            cout << "The Stack is \"Full\"" << endl;
        }
        else {
            top++;
            item[top] = Element;
        }
    }
    void pop() {
        if (isEmpty()) {
            cout << "The Stack is \"Empty\"" << endl;
        }
        else {
            item[top] = 0;
            top--;
        }
    }
    int getTop() {
        if (isEmpty()) {
            cout << "The Stack is \"Empty\"" << endl;
        }
        else {
            return(item[top]);
        }
    }
    void printStack() {
        cout << "[";
        for (int i = top; i >= 0; i--)
        {
            cout << item[i];
            if (i > 0)
                cout << ",";
        }
        cout << "]";
    }

};

int main()
{
    my_stack<int> st;
    cout << st.isEmpty() << endl;
    cout << st.isFull() << endl;
    st.push(5);
    st.push(7);
    st.push(9);
    st.printStack();

    st.push(6);
    st.push(-5);
    st.printStack();

    st.pop();
    st.pop();
    st.pop();
    st.printStack();

    cout<<st.getTop();
}