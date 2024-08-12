/* 
Đề bài: Nhập vào mảng 1 chiều các số nguyên,
xuất ra mảng vừa nhập và thực hiện các thao
tác sau:
a/ Tính tổng các phần tử của mảng.
b/ Tìm Min - Max của mảng.
c/ Đếm số lượng các số chẵn trong mảng.
d/ Sắp xếp mảng tăng dần/giảm dần theo chiều từ trên xuống dưới, từ trái qua phải.

*/
#include<bits/stdc++.h>
using namespace std;
void Nhap_Mang(int a[],int n ,int Chi_So = 0){
    if(n == 0){
        return; 
    }
    if(Chi_So<n){
        cout <<"\nNhap a["<<Chi_So<<"]:"; 
        cin >> a[Chi_So];
        Nhap_Mang(a,n,Chi_So+1);
    }
}
void Xuat_Mang(int a[],int n,int Chi_So = 0){
    if(n == 0){
        return; 
    }
    if(Chi_So<n){
        cout <<a[Chi_So]<<" ";
        Xuat_Mang(a,n,Chi_So+1);
    }
}

int Gia_Tri_Max_Mang(int a[],int n,int Chi_So = 0){
    static int Max = 0;
    if(n == 0){
        return a[0];
    }
    else{
        if(Chi_So < n){
           Max = max(Max,a[Chi_So]);
           Gia_Tri_Max_Mang(a,n,Chi_So+1);
        }
    }
}
bool Tim_Kiem_Nhi_Phan(int a[], int n, int search) {
   int left = 0, right = n - 1;
   while (left <= right) { // Sửa điều kiện vòng lặp để bao gồm cả khi left == right
      int mid = left + (right - left) / 2; // Tránh tràn số khi left và right lớn
      if (a[mid] == search) {
         return true; // Nếu tìm thấy, trả về true
      } else if (search < a[mid]) {
         right = mid - 1;
      } else {
         left = mid + 1;
      }
   }
   return false; // Nếu không tìm thấy, trả về false
}

bool Tim_Kiem_Nhi_Phan_Recursive(int a[], int left, int right, int search) {
    if (left > right) {
        return false;
    }
    
    int mid = left + (right - left) / 2;
    
    if (a[mid] == search) {
        return true;
    } else if (search < a[mid]) {
        return Tim_Kiem_Nhi_Phan_Recursive(a, left, mid - 1, search);
    } else {
        return Tim_Kiem_Nhi_Phan_Recursive(a, mid + 1, right, search);
    }
}


int main(){
   int n;
   cout <<"\nNhap n :";
   cin >> n;

   int *a= new int[n];
   Nhap_Mang(a,n);
   cout <<"\nCac gia tri trong mang :"<< endl;
   Xuat_Mang(a,n);

   cout <<"\nGia tri max cua mang :"<< Gia_Tri_Max_Mang(a,n) << endl;

   int search; 
   cout <<"\nNhap gia tri tim kiem : ";
   cin >> search; 

   if(Tim_Kiem_Nhi_Phan(a,n,search)){
    cout <<"\nTim thay phan tu"<<endl;
   }
   else{
    cout <<"\nKhong tim thay phan tu"<<endl;
   }

   return 0;
}