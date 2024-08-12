#include<bits/stdc++.h>
using namespace std;

void TinhToan(int n){
    float Tong = 0;
    for (int i=1;i<=n;i++){
        Tong+= (float)i/(i+1);
    }
    cout <<"\nTong la : "<< Tong<<endl;
}
void TinhToan_DeQuy(int n , int i = 1){
    static float Tong  =0; 
    if(i<= n){
       Tong+=(float)i/(i+1);
       TinhToan_DeQuy(n,i+1);
    }
    else{
       cout << "\nTong la  : "<<Tong<<endl;
    }
}
int main(){
    TinhToan(3);

    TinhToan_DeQuy(3);
}