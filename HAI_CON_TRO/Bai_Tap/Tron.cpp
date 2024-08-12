#include<bits/stdc++.h>
using namespace std;

void SapXep(int *a, int n) {
    sort(a, a + n);
}
void Tron_Hai_Mang(int a[] ,int m,int b[],int n){
    cout <<"\nCac phan tu sau khi tron hai mang :" << endl;
    int i = 0, j = 0;
    while(i < m && j < n){
        if(a[i] < b[j]){
            cout <<a[i]<<" ";
            i++;
        }
        else{
            cout << b[j] <<" ";
            j++;
        }
    }
    while(i < m){
        cout << a[i] << " ";
        i++;
    }
    while(j < n){
        cout << b[j]<< " ";
        j++;
    }
}

void TronHaiMang_De_Quy(int a[], int m, int b[], int n, int i = 0, int j = 0) {
    if (i == m && j == n) {
        // Cả hai mảng đều đã được duyệt hết
        return;
    }   
    if (i < m && (j >= n || a[i] < b[j])) {
        // Nếu mảng a chưa duyệt hết và phần tử a[i] nhỏ hơn b[j]
        cout << a[i] << " ";
        TronHaiMang_De_Quy(a, m, b, n, i + 1, j);
    } else if (j < n) {
        // Nếu mảng b chưa duyệt hết và phần tử b[j] nhỏ hơn hoặc bằng a[i]
        cout << b[j] << " ";
        TronHaiMang_De_Quy(a, m, b, n, i, j + 1);
    }
}
int main() {
    int m, n;
    cout << "\nNhap gia tri m: ";
    cin >> m;
    int *a = new int[m];
    cout << "Nhap cac phan tu mang a:\n ";
    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }

    cout << "\nNhap gia tri n: ";
    cin >> n;
    int *b = new int[n];
    cout << "Nhap cac phan tu mang b:\n ";
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    SapXep(a, m);
    SapXep(b, n);

    cout << "Mang a sau khi sap xep: ";
    for(int i = 0; i < m; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Mang b sau khi sap xep: ";
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    Tron_Hai_Mang(a,m,b,n);

    cout << "\nCac phan tu sau khi tron bang de quy : "<<endl;
    TronHaiMang_De_Quy(a,m,b,n);

    delete[] a;
    delete[] b;

    return 0;
}
