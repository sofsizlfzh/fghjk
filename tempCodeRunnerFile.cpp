#include <iostream>
using namespace std;
class emp{
    public:
    virtual void sal(){
        cout<<"Employee Salary";
    }
};
void ~emp();
class Manager:public emp{
    public:
    void sal(){
        cout<<"Manager Salary";
    }
}
int main(){
    Emp *ptr;
    ptr->sal();
    return 0;
}