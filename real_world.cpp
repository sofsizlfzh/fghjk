//Real world problem to implement stack and inheritance
#include <iostream>
using namespace std;
class Stack{
    protected:
    int arr[100];
    int top;
    public:
    int stack(){
        top = -1;
    }
    void push(int x){
        arr[++top] = x;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
    }
    void display(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
//Single inheritance
class Browserstack:public Stack{
    public:
    void visitpage(int page){
        push(page);
    }
};
//multilevel inheritance
class SecureBrowserstack:public Browserstack{
    public:
    void securevisit(int page){
        visitpage(page);
    }
};
//Hierarchical inheritance
class UndoStack:public Stack{
    public:
    void undo(){
        pop();
    }
};
class RedoStack:public Stack{
    public:
    void redo(){
        pop();
    }
};
//Multiple inheritance
class EditorStack:virtual public UndoStack, virtual public RedoStack{
    public:
    void edit(){
        undo();
        redo();
    }
};
//Template - It allows to create a single class to handle different data types. It is a powerful feature of C++ that enables code reusability and type safety. With templates, you can write a function or a class that can work with any data type without the need for code duplication. This is achieved by using template parameters, which are placeholders for the data types that will be specified when the function or class is instantiated. Templates are commonly used in C++ for creating generic programming constructs such as containers, algorithms, and smart pointers.