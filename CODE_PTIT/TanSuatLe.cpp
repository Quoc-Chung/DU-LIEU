#include<bits/stdc++.h>
using namespace std;
// 1 2 3 2 3 1 3

// 1 1 2 2 3 3 3 
void So_Xuat_Hien_Chan(int a[],int n){
    int left = 0;
    int So_Tiep_Theo = 0;
    int result = 0;
    int dem = 1;
    sort(a,a+n);
    while(left  < n){
       So_Tiep_Theo = left + 1;
       if(a[left] == a[So_Tiep_Theo]){
        dem++;
       }
       else{
        if(dem % 2!= 0){
            result = a[left];
        }
        dem = 1;
       }
        left++;
    }
    cout << result;
}

int demX = 1;
int Ket_Qua = 0;
void Try(int i,int a[], int n){
    if(i >= n ){ 
        cout << "\nSo xuat hien voi tan so le la : "<< Ket_Qua <<endl;
        return ;
    }
    if(a[i] == a[i+1]){
        demX++;
    }
    else{
        if(demX %2 != 0){
            Ket_Qua = a[i];
        }
        demX = 1; 
    }
    Try(i+1,a,n);
}

int main(){
    int test;
    cin >> test; 
    while(test --){
        int n;
        cin >> n;
        int *a = new int[n];
        for(int i =0;i<n;i++){
            cin >> a[i];
        }
        // So_Xuat_Hien_Chan(a,n);
        sort(a,a+n);
        Try(0,a,n);
        // map<int,int> p;
        // for(int i= 0;i<n;i++){
        //     p[a[i]]++; 
        // }
        // for(auto x: p){
        //     if(x.second %2 != 0){
        //         cout << x.first<<endl;
        //         return 0;
        //     }
        // }
    }
}
/*
1
7
1 2 3 2 3 1 3
3
*/