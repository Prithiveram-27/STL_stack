#include<bits/stdc++.h>
using namespace std;

void printstack(stack<int> s)
{
    while(!s.empty())
    {
        cout<<" "<<s.top();
        s.pop();
       
    }
    cout<<endl;
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"The stack is :";
    printstack(s);
    cout<<"Size of the stack is : "<<s.size()<<endl;
    cout << "Top of the stack is : " << s.top()<<endl;
    cout << "Stack elements after popping the top element : ";
    s.pop();
    printstack(s);
}