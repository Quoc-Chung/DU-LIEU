#include<bits/stdc++.h>
using namespace std;
int n, k , a[100];

bool CHECK_CUOI_CUNG; 
void Khoi_Tao_Dau_Tien(){
  for(int i = 1;i<= k; i++){
    a[i] = i;
  }
}
void Sinh(){
   int i = k; 
   /* - Khi nó đạt max tại một vị trí thì nó mới dịch bit - */
   while(i >=1 && a[i] == n - k + i){
      i--;
   } 
   if(i == 0){
     CHECK_CUOI_CUNG = true;
   }
   else{
    a[i]++;
   for(int j = i +1 ; j <= k ; j++){
            a[j] = a[j-1] + 1;
        }
   }
}
int main(){
  cout <<"\nNhap n va k:";
  cin >> n >> k;
  CHECK_CUOI_CUNG = false;
  Khoi_Tao_Dau_Tien();
  
  while(!CHECK_CUOI_CUNG){
    for(int i = 1;i<= k ;i++){
      cout << a[i]<< " ";
    }
    cout << endl;
    Sinh();
  }
  return 0; 
}