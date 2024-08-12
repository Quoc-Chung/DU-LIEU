#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[1001] = {0}; 
bool check[1001] ={false};
void Try(int i){
   for(int j = 1;j<=n; j++){
      if(check[j] == false){
        check[j] = true;
        a[i] = j;
        if(i== k-1){
            for (int l = 0; l < k; l++) {
                    cout << a[l] << " ";
                }
                cout << endl;
        }
        else{
            Try(i+1);
        }
        check[j]=false;
      }
   }
}
void OUT_CAU_HINH(){
   for(int i = 1;i<=k ;i++ ){
    cout <<a[i] <<"  ";
   }
   cout << endl;
}
void Try_Cau_Hinh(int i){
    for(int j = a[i-1] + 1;j <= n - k + i;j++){
            a[i] = j; 
            if(i == k){
                OUT_CAU_HINH();
            }
            else{
                Try_Cau_Hinh(i+1);
            }
        }
    }
int main(){
    cin >> n >> k;
    Try_Cau_Hinh(1);
    return 0;

}