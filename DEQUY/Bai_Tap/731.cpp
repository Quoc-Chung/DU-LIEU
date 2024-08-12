#include<bits/stdc++.h>
using namespace std;
/*  1 + 4 + 9 = 14  , n = 3 */
void Tinh_Tong(int n){
    static int Tong = 0;
    Tong+=pow(n,2);
    n-=1;
    if(n >=1){
        Tinh_Tong(n);
    }
    else{
        cout <<"\nTong tu mot den n : "<< Tong <<endl;
    }
}
int main(){
     Tinh_Tong(3);
}