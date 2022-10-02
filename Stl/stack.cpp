#include <iostream>
#include <stack>

using namespace std;

int main() {
 stack <string> s;
 s.push("mahesh");
 s.push("hari");
 s.push("more");
 
 cout <<"size of stack : "<<s.size()<<endl;
 cout <<"top of stack : "<<s.top()<<endl;
 
 s.pop();
 cout <<"top of stack : "<<s.top()<<endl;
 
 return 0;
}