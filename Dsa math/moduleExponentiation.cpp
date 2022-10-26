#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	int result = 1;
    
   while(n > 0){
       if(n & 1){
           //odd
           result = (1LL*result* (x)%m)%m;
       }
       x = (1LL*(x)%m*(x)%m)%m;
       n = n>>1;
   }
    return result;
}