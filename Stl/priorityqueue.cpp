#include <iostream>
#include <queue>

using namespace std;

int main() {
 priority_queue<int> maxi;
 priority_queue<int, vector<int>, greater<int>> mini;
 
 maxi.push(3);
 maxi.push(4);
 maxi.push(2);
 
 cout << "size of the priority_queue -> maxi : " << maxi.size();
 int n = maxi.size();
 cout << endl;
 for(int i=0; i<n; i++) {
     cout << maxi.top() << " ";
     maxi.pop();
     
 }
 
 mini.push(22);
 mini.push(11);
 mini.push(10);
 
 int m = mini.size();
 cout << endl;
 for(int i=0; i<m; i++) {
     cout << mini.top() << " ";
     mini.pop();
     
 }
  
 return 0;
}
