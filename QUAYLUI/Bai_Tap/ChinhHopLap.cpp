#include <bits/stdc++.h>
using namespace std;

int n, k;
int* a; // sử dụng con trỏ để khai báo mảng động
int* x;

bool *used; 

void OUT_PUT() {
    for (int i = 0; i < k; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for (int j = 0; j < n; j++) {
        x[i] = a[j];
        if (i == k - 1) {
            OUT_PUT();
        } else {
            Try(i + 1);
        }
    }
}
void Try_Khong_Lap(int i){
    for(int j = 0; j < n ; j++){
        if(used[j] == false){
            used[j] = true;
            x[i] = a[j];
            if(i == k -1){
                OUT_PUT();
            }
            else{
                Try(i+1);
            }
            used[j] = false;
        }
    }
}

int main() {
    cin >> n >> k;
    a = new int[n]; // cấp phát mảng động cho a
    x = new int[k]; // cấp phát mảng động cho x
    used = new bool[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        // Ban đầu tất cả các phần tử đều không được sử dụng 
        used[i] = false; 
    }
    Try_Khong_Lap(0);

    delete[] a; // giải phóng bộ nhớ của a
    delete[] x; // giải phóng bộ nhớ của x
    return 0;
}

/* 
   Input:
   2  2
   1  2  

   Output:
   1 1 
   1 2 
   2 1 
   2 2 
*/
