#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];

int pre[1005][1005];
int main(){

    int m,n;
    cin >> m >> n;
    for(int i = 1; i<= m;i++){
        for(int j = 1;j<= n ;j++){
            cin >> a[i][j];
        }
    }
    /* - Xây dựng mảng prefix sum - */
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++ ){
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];
        }
    }
    int test;
    cin >> test; 
    vector<int> result; 
    while(test--){
        int hang_dau, hang_cuoi, cot_dau,cot_cuoi;
        cin >> hang_dau >> hang_cuoi >> cot_dau >> cot_cuoi;
        int sum = pre[hang_cuoi][cot_cuoi] - pre[hang_dau -1][cot_cuoi] - pre[hang_cuoi][cot_dau -1] +pre[hang_dau-1][cot_dau -1];
        if(sum!= 0){
           result.push_back(sum);
        }     
    }
    for(auto x : result){
        cout << x << endl;
    }
    return 0;
}

/* 
    8  8 
    1 1 0 0 0 1 1 1
    1 0 0 0 1 1 1 1 
    0 1 1 1 0 0 1 0 
    1 1 1 1 0 1 1 0 
    1 1 1 1 1 0 1 1
    1 0 0 1 0 1 0 1 
    0 0 0 0 1 0 1 0 
    1 1 0 0 0 1 0 1 

    3
    2 3 1 7 
    2 2 2 7
    1 2 1 8 

*/