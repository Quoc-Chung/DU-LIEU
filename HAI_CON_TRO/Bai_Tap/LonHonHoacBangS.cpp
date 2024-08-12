/* - Tìm dãy con liên tiếp có độ dài ngắn nhất mà có tổng >= s*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s; 
    cin >> n >> s; 
    int *a= new int[n];
    for(int i = 0;i< n;i++){
        cin >> a[i];
    }
    int left = 0; 
    int Tong = 0;
    int result= 1e9;

    for(int right = 0; right < n ; right++){
        sum += a[right];
        while(sum >= s){
            result = min (ans, right- left +1);
            sum -= a[left++];
        }
    }
    cout << result<<endl;
    return 0; 
}