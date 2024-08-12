#include <bits/stdc++.h>
using namespace std;

int n;
int a[11];

void IN_CAU_HINH(int i) {
    for (int j = 0; j <= i; j++) {
        cout << a[j] << " ";
    }
    cout << endl;
}

void Try_Xuoi(int i, int current_sum) {
    for (int j = 1; j <= n; j++) { // Thử từ 1 đến n
        if (current_sum + j <= n) {
            a[i] = j;
            current_sum += j;
            if (current_sum == n) {
                IN_CAU_HINH(i); // in ra i + 1 phần tử vì đã thêm phần tử a[i]
            } else {
                Try_Xuoi(i + 1, current_sum);
            }
            current_sum -= j; // backtrack để thử giá trị tiếp theo
        }
    }
}

void Try_Nguoc(int i,int current_sum){
    for(int j =n; j>= 1;j--){
        if(current_sum+ j <= n){
            a[i] = j;
            current_sum += j;
            if (current_sum == n) {
                IN_CAU_HINH(i); // in ra i + 1 phần tử vì đã thêm phần tử a[i]
            } else {
                Try_Nguoc(i + 1, current_sum);
            }
            current_sum -= j; 
        }
    }
}
int current_sum= 0;
void Try_Thuan_Tuy(int i){
    for(int j =n; j>= 1;j--){
        if(current_sum+ j <= n){
            a[i] = j;
            current_sum += j;
            if (current_sum == n) {
                IN_CAU_HINH(i); // in ra i + 1 phần tử vì đã thêm phần tử a[i]
            } else {
                Try_Thuan_Tuy(i + 1);
            }
            current_sum -= j; 
        }
    }
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        cin >> n;
        memset(a, 0, sizeof(a)); // Khởi tạo lại mảng a
     //   Try_Nguoc(0, 0);
     //   Try_Xuoi(0,0);

        Try_Thuan_Tuy(0);
    }
    return 0;
}
