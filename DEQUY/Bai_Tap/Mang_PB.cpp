/*
10
2 2 2 1 3 2 5 1 4 2
5 
*/
#include<bits/stdc++.h>
using namespace std;
bool Tim_Kiem_Nhi_Phan(int a[], int left, int right, int Tim_Kiem) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == Tim_Kiem) {
            return true;
        } else if (Tim_Kiem < a[mid]) {
            return Tim_Kiem_Nhi_Phan(a, left, mid - 1, Tim_Kiem);
        } else {
            return Tim_Kiem_Nhi_Phan(a, mid + 1, right, Tim_Kiem);
        }
    }
    return false;  // Trả về false nếu không tìm thấy giá trị
}
bool SoLanXuatHienCuaMotSo(int a[], int n, int Gia_Tri_Xet, int chi_so = 0, int dem = 0) {
    // Kiểm tra nếu đã duyệt hết mảng
    if (chi_so == n) {
        return dem == 1; // Trả về true nếu chỉ xuất hiện đúng 1 lần, ngược lại trả về false
    }  
    // Nếu giá trị tại vị trí hiện tại bằng Gia_Tri_Xet, tăng dem
    if (a[chi_so] == Gia_Tri_Xet) {
        dem++;
    }
    // Gọi đệ quy cho phần tử tiếp theo trong mảng
    return SoLanXuatHienCuaMotSo(a, n, Gia_Tri_Xet, chi_so + 1, dem);
}
string SoPhanTu(int a[],int n , int chi_so = 0){
    static int dem = 0;
    if(chi_so <= n){
       
    }
}

bool SoXuatHienMotLan(int a[], int n, int Gia_Tri_Xet, int Vi_Tri, int index = 0) {
    if (index >= n) {
        return true;
    }
    if (a[index] == Gia_Tri_Xet && index != Vi_Tri) {
        return false;
    }
    return SoXuatHienMotLan(a, n, Gia_Tri_Xet, Vi_Tri, index + 1);
}

bool Tim_Kiem_De_Quy(int a[],int n, int Gia_Tri_Search, int index = 0 ){
    if(index >= n){
       return false;
    }
    if(a[index] == Gia_Tri_Search){
        return true; 
    }
    return Tim_Kiem_De_Quy(a,n,Gia_Tri_Search, index + 1);
}


void In_Mang(int a[],int n, int index = 0){
    if(index >= n){
        return;
    }
    else{
        cout  << a[index] <<" ";
        In_Mang(a,n,index +1);
    }
}
int main() {
    int n = 7;
    int *a = new int[n] {4, 5, 7, 1, 3, 5, 8};
    
    cout << "\nCac phan tu xuat hien mot lan :"<<endl;
    for (int i = 0; i < n; i++) {
        if (SoXuatHienMotLan(a, n, a[i], i)) {
           cout << a[i] << " ";
        }
    }
    cout << "\nNhap gia tri tim kiem:";
    int search ; 
    cin >> search; 

    if(Tim_Kiem_De_Quy(a,n,search)){
        cout << "\nDa tim thay phân tu "<< search <<" trong mang "<<endl;
    }
    else{
        cout  << "\nKhong tim thay " << endl; 
    }

    delete[] a;
    return 0;
}