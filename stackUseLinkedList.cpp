#include<iostream>
using namespace std;

template <class DataType>

class stack{
    struct node
    {
        DataType item;
        node*next;
    };
    node*top,*cur;
public:
    stack(){
        top=NULL;
    }
    bool isEmpty(){
        return (top == NULL);
    }
    void push(DataType Element){
        node *newElementPtr=new node;
        if(newElementPtr==NULL){
            cout<<"Stack push cannot allocate memory";
        }else{
        newElementPtr->item=Element;
        newElementPtr->next=top;
        top=newElementPtr;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is Emptyn\n";
        }else{
            node*temp=top;
            top = top->next;
            temp= temp->next=NULL;
            delete temp;
        }
    }
    void pop(DataType&stackTop){
        if(isEmpty()){
            cout<<"Stack is Emptyn\n";
        }else{
            stackTop = top->item;
            node*temp=top;
            top = top->next;
            temp= temp->next=NULL;
            delete temp;
        }
    }
    void Display(){
        cur=top;
        cout<<"\nitem in the stack : ";
        cout<<"[";
        while (cur!=NULL)
        {
            cout<<cur->item<<" ";
            cur=cur->next;            
        }
        cout<<"]\n";
        
    }
};
int main(){
    stack<int>s;
    s.push(5);
    s.push(2);
    s.push(9);
    s.push(1);
    s.pop();
    s.Display();
    int Adel=0;
    s.pop(Adel);
    s.Display();
    cout<<"The Elemnet : "<<Adel<<" is delete\n";

    return(0);
}