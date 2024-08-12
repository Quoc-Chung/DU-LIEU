#include<bits/stdc++.h>
using namespace std;
int main(){
     int n, q;
     cin >> n >> q; 
     vector<int> a(n); 
     for(auto &x :a){
          cin >> x;
     } 
     /*- Xây dựng mảng hiệu -*/ 
     vector<int> D(n); 
     for(int i =0;i<n;i++){
      if(i ==0){
          D[i] = a[i]; 
      }
      else{
          D[i] = a[i] - a[i-1];
      }
     }
     /*- Xây dựng đoạn tăng -*/ 
     while(q--){
          int left, right , k;
          cin >> left >> right >> k;
          D[left] += k;
          D[right+1] -= k; 
     }

     for(int i=0;i<n;i++){
          if(i==0){
            a[i] = D[0];
          }
          else{
            a[i] = a[i-1] + D[i];
          }
     }
     for(auto x : a){
          cout << x << " ";
     }
     return 0; 
}
