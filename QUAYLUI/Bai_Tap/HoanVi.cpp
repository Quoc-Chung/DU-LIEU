#include<bits/stdc++.h>
using namespace std;
int n;
int *result;
bool *check;
void OUT_PUT(){
    for(int i = 0; i< n; i++){
        cout <<result[i] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = 1 ;j <= n; j++){
        if(check[j] == false ){
            check[j] = true;
            result[i] = j; 
            if(i == n -1){
                OUT_PUT();
            }
            else{
                Try(i+1);
            }
            check[j] = false;
        }
    }
}
int main(){
  cin >> n;
  result = new int[n];
  check  = new bool[n+1]; 
  for (int i = 1; i <= n; i++) {
        check[i] = false;
    }
  Try(0);
  return 0;
}