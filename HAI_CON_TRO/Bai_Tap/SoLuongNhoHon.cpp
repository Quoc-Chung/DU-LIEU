#include<bits/stdc++.h>
using namespace std;
void Nhap_Mang(string ten,int a[],int n){
    
    cout <<"\nNhap so luong phan tu mang "<<ten<<":"<<endl;
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
}
void Xu_Li (int a[] , int b[],int n, int m){
    int i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            i++;
        }
        else{
            cout << i <<" ";
            j++;
        }
    }
    while(j < m){
        cout << i <<" ";
        j++;
    }
}
int main(){
    int n;
    cout <<"\nNhap n:";
    cin >> n;
    int* a = new int[n]; 
    Nhap_Mang("a",a,n);

    int m;
    cout <<"\nNhap m:";
    cin >> m;
    
    int *b = new int[n]; 
    Nhap_Mang("b",b,m);

    Xu_Li(a,b,n,m);
    return 0; 
}

/*
    6
    1 6 9 13 18 18 

    7
    2 3 8 13 15 21 25  

    1 1 2 3 4 6 6 
*/