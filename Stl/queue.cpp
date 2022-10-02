
#include <iostream>
#include <queue>

using namespace std;

int main() {
 queue <string> q;
 q.push("mahesh");
 q.push("hari");
 q.push("more");
 
 cout <<"size of queue : "<<q.size()<<endl;
 cout <<"top of queue : "<<q.front()<<endl;
 
 q.pop();
 cout <<"top of queue : "<<q.front()<<endl;
 cout <<"size of queue after pop : "<<q.size()<<endl;
 cout <<"bottom of queue : "<<q.back()<<endl;
 
 return 0;
}
