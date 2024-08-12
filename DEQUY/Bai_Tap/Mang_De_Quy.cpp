#include<bits/stdc++.h>
using namespace std;

void Nhap_Mang(int a[] , int n, int i = 0){
    if(i == n){
       return; 
    }
    cout <<"\nNhap phan tu thu "<< i+1 <<": ";
    cin >> a[i];
    Nhap_Mang(a,n,i+1);
}

void In_Mang(int a[],int n,int i=0){
    if(i == n){
        return; 
    }
    cout <<"\nPhan tu thu "<< i+1 <<" :"<<a[i];
    In_Mang(a, n, i+1);
    
}

int TongPhanTuMang(int a[],int n,int i=0){
    if(i >= n){
       return 0; 
    }   
    return a[i] + TongPhanTuMang(a,n,i+1);
}

int XuatHien_Nhieu_Nhat_Mang(int a[], int n) {
    map<int, int> mp; 
    // Đếm số lần xuất hiện của từng phần tử trong mảng
    for (int i = 0; i < n; i++) {
        mp[a[i]]++;
    }  
    int max_count = 0;
    int max_value = a[0];
    
    // Tìm phần tử xuất hiện nhiều nhất
    for (auto it : mp) {
        if (it.second > max_count) {
            max_count = it.second;
            max_value = it.first;
        }
    }
    return max_value;
}
int main(){
    int n; 
    cout  << "\nNhap so luong phan tu :";
    cin >> n;
    int  *a = new int[n];
    Nhap_Mang(a,n);
    

    cout << "\nCac  phan tu trong mang la :"<<endl;
    In_Mang(a,n);

    cout << "\n Phan tu xuat hien nhieu nhat mang :" << XuatHien_Nhieu_Nhat_Mang(a,n) <<endl; 

    return 0;
}