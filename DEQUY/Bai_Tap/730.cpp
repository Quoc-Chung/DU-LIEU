#include<bits/stdc++.h>
using namespace std;
void Tinh_Tong(int n){
   static int sum = 0;
   sum +=n;
   n-=1;
   if(n >= 1){
     Tinh_Tong(n);
   }
   else{
    cout <<"\nTong tu 1 den n la : "<< sum << endl;
   }
}
int Tinh_Tong_X(int n){
    static int sum = 0;
    sum +=n;
    n-=1;
    if(n >=0){
         Tinh_Tong_X(n);
    }
    else{
       return sum;
    }
}
int Tinh_Tong_Y(int n, int sum = 0) {
    if (n >= 1) {
        sum += n;
        return Tinh_Tong_Y(n - 1, sum);
    } else {
        return sum;
    }
}
int main(){
   int n;
   cout <<"\nNhap gia tri n :";
   cin >> n;
   cout << Tinh_Tong_X(n);
   cout << Tinh_Tong_Y(n);
   return 0;


}