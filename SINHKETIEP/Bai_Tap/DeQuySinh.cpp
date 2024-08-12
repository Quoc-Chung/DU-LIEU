#include<bits/stdc++.h>
using namespace std;
int n;
int a[100];
bool CHUA_KET_THUC; 

void Khoi_Tao_Ban_Dau(){
    for(int i=0;i<n;i++){
        a[i] = 0;
    }
}

void Sinh(){
   int i = n -1; 
   while(i >= 0 && a[i] == 1){
    a[i] = 0;
    i--;
   }
   if(i < 0){
    CHUA_KET_THUC = false; /*- Da Ket Thuc -*/
   }
   else{
    a[i] =1;
   }
}

int main(){
    cin >> n;
    Khoi_Tao_Ban_Dau();
    CHUA_KET_THUC = true;
    while(CHUA_KET_THUC){
      for(int i = 0; i< n ;i++){
        cout << a[i] << " ";
      }
      cout << endl;
      Sinh();
    }
}