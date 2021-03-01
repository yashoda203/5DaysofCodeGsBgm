#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

void stackchange(stack<int> &stack1, stack<int> &stack2){
    while(!stack1.empty()){
        stack2.push(stack1.top());
        stack1.pop();
    }
}

int main()
{
    int query,choice,element;
    stack<int>stack1,stack2;
    cin>>query;
    while(query--){
        cin>>choice;
        if(choice==1){
             cin>>element;
              stack1.push(element);
        }
        if(choice==2){
            if(stack2.empty()){
              stackchange(stack1,stack2);
            }
            stack2.pop();
        }
        if(choice==3){
            if(stack2.empty()){
              stackchange(stack1,stack2);
            }
        cout<<stack2.top()<<endl;
        }
    }
    return 0;
}
