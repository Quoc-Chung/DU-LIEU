#include <bits/stdc++.h>
using namespace std;

int n, k;
int* a; // sử dụng con trỏ để khai báo mảng động
int* x;
bool* used; // mảng đánh dấu các phần tử đã được sử dụng

void OUT_PUT() {
    for (int i = 0; i < k; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

void Try_Khong_Lap(int i) {
    for (int j = 0; j < n; j++) {
        if (used[j]== false) { // kiểm tra phần tử a[j] chưa được sử dụng
            used[j] = true; // đánh dấu phần tử a[j] đã được sử dụng
            x[i] = a[j];
            if (i == k - 1) {
                OUT_PUT();
            } else {
                Try_Khong_Lap(i + 1);
            }
           // used[j] = false; // hoàn tác để thử các phần tử khác
        }
    }
}

int main() {
    cin >> n >> k;
    a = new int[n]; // cấp phát mảng động cho a
    x = new int[k]; // cấp phát mảng động cho x
    used = new bool[n]; // cấp phát mảng động cho used
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        used[i] = false; // ban đầu tất cả các phần tử đều không được sử dụng
    }
    Try_Khong_Lap(0);

    delete[] a; // giải phóng bộ nhớ của a
    delete[] x; // giải phóng bộ nhớ của x
    delete[] used; // giải phóng bộ nhớ của used
    return 0;
}

/* 
   Input:
   2  2
   1  2  

   Output:
   1 2 
   2 1 
*/
