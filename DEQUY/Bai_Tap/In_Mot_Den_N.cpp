#include<bits/stdc++.h>
using namespace std;
void In_Mot_Den_N(int n, int current  = 1){
    if(current > n){
        return ;
    }
    cout << current<<" ";
    In_Mot_Den_N(n,current+1);
}

int GiaiThua(int n){  // 5 * 4 *3 * 2 * 1 = 120 
   if(n == 1){
      return 1; 
   }
   return n* GiaiThua(n-1);
}
void In_Cac_So_Tu_Mot_Den_N(int n){
    if(n <1){
        return; 
   }
   cout << n <<" "; 
   In_Cac_So_Tu_Mot_Den_N(n-1);
}

int  TinhTongTu_Mot_Den_N (int n){
    if(n == 1){
        return 1; 
    }
    return n * TinhTongTu_Mot_Den_N(n-1);
}
int main(){
    int n;
    cin >> n; 
    
    cout<<"\nDay cac so chay  tu 1 den n : "<<endl;

    In_Mot_Den_N(n);

    cout<< "\n Giai thua cua  n la  : " << GiaiThua(n) << endl;


    cout << "\n Cac so tu n den 1 la  : "<<endl;
    In_Cac_So_Tu_Mot_Den_N(n);
  
    cout <<"\nTong tu mot den n : " << TinhTongTu_Mot_Den_N(n);
    return 0; 
}