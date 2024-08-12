#include<bits/stdc++.h>
using namespace std;
int main(){
 int n, k;
 cin >> n >> k;
 int *a= new int[n];
 for(int i = 0;i< n;i++){
    cin >> a[i];
 }  
 int left = 0;
 int Tong_Hien_Tai = 0;
 int result = 0;
  
 for(int right = 0;  right < n ; right++){
    Tong_Hien_Tai+= a[right];
    while(Tong_Hien_Tai > k ){
        Tong_Hien_Tai -= a[left++];
    }
    result = max(result, right - left + 1);
 }
 cout << result <<endl;
 return 0;
}

/* 

7 20 
2 6 4 3 6 8 9
*/
