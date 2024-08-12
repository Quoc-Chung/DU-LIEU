#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, K;
    int M;
    cin >> M>> N >> K;

    int *A = new int[M];
    for(int i =0;i< M ;i++){
        cin >> A[i];
    }
    sort(A,A+M);
    int max_sum = -2; // Giá trị ban đầu của tổng lớn nhất
    /*- Xây dựng mảng cộng dồn - */
    int *pre = new int[M];
    for(int i=0;i<M;i++){
        if(i==0){
            pre[i] = A[i];
        }
        else{
            pre[i] = pre[i-1] + A[i];
        }
    }
    cout << endl;
    for(int i = 0; i<= M - N;i++){
        if(A[i + N -1] - A[i] <= K){
            int current_sum = pre[i+N -1] - pre[i-1];
            if(current_sum > max_sum){
                max_sum = current_sum;
            }
        }
    }
    cout << max_sum;

}