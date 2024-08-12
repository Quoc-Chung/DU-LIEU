#include<bits/stdc++.h>
using namespace std;
 /*-   1/3 + 1/5 + ...+ 1/(2n+1)  n bat dau tu 1 voi n = 3    -*/
 /*-  1/3 + 1/5 + 1/7 = 0,676*/

void TinhToan(int n){
    float tong = 0;
    for (int i=1;i<=n;i++){
        tong += (float)1/(2*i+1);
    }
    cout <<"\nTong cua bieu thuc la :"<<fixed<<setprecision(2)<< tong <<endl;
}

void TinhToan_DeQuy(int n,int i =1){
    static float tong = 0;
    if(i <= n){
        tong +=(float)1/(2*i+1);
        i=i+1;
        TinhToan_DeQuy(n ,i);
    }
    else{
        cout <<"\nTong cua bieu thuc la :"<<fixed<<setprecision(2)<< tong <<endl;
    }
}

float TinhToan_DeQuy_Return(int n, int i = 1) {
    static float tong = 0;+
    if (i <= n) {
        tong += (float)1 / (2 * i + 1);
        i+=1;
        TinhToan_DeQuy_Return(n, i);
    } else {
        return tong; // Trả về giá trị đã làm tròn đến 2 chữ số thập phân
    }
}

int main (){
   TinhToan(3);
   TinhToan_DeQuy(3);
   cout <<"\nTong la  :" << fixed<<setprecision(2) <<TinhToan_DeQuy_Return(3);
}