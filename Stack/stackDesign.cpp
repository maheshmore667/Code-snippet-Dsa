
#include<stack>
class SpecialStack {
    // Define the data members.
    stack<int> s;
    int mini;

    /*----------------- Public Functions of SpecialStack -----------------*/
    public:
        
    void push(int data) {
       if(s.empty()) {
           s.push(data);
           mini = data;
       }
        else {
            if(data < mini) {
                s.push(2*data-mini);
                mini = data;
            } else {
                s.push(data);
            }
        }
    }

    int pop() {
       if(s.empty()) {
           return -1;
       }
        int curr = s.top();
        s.pop();
       if( curr > mini) {
           return curr;
       } else {
           int prevMini = mini;
           int val = 2*mini - curr;
           mini = val;
           return prevMini;
       }
    }

    int top() {
        if(s.empty()) {
           return -1;
        } 

        if(s.top() < mini) {
            return mini;
        } else {
            return s.top();
        }
    }

    bool isEmpty() {
        return s.empty();
    }

    int getMin() {
        if(s.empty()) {
           return -1;
        } 
            return mini;
        
    }  
};