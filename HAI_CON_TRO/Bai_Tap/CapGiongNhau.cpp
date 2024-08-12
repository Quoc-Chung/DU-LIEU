#include <bits/stdc++.h>
using namespace std;

void Nhap_Mang(string ten, int a[], int n) {
    cout << "\nNhap so luong phan tu mang " << ten << ": " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void Xu_Li(int a[] , int b[], int n,int m){
    int i =0, j = 0; 
    int result = 0;

    while(i < n && j  < m ){
        if(a[i] < b[j]){
            i++;
            continue;
        }
        else if(a[i] > b[j]){
            j++;
            continue;
        }
        int dem1 = 0, dem2 = 0; 
        while(a[i] == b[j]){
          dem1++;
          i++;
        }
        i--;
        while (a[i] == b[j]){
            dem2++;
            j++;
        }
        result += dem1* dem2;
    }
    cout << result<<endl;
}


void In_Map(map<int,int> mp1){
    cout <<"_______THONG TIN MAP _______\n";
    for(auto it = mp1.begin(); it != mp1.end(); it++){
        cout << (*it).first <<" - " << (*it).second<< endl;
    }
}
int Gop_Map(map<int, int> mp1, map<int, int> mp2) {
    int result = 0;
    for (auto it = mp1.begin(); it != mp1.end(); it++) {
        auto it2 = mp2.find(it->first);
        if (it2 != mp2.end()) {
            result += it->second * it2->second;
        }
    }
    return result;
}
void Xu_Li_Mot(int a[] , int b[], int n,int m){
    map<int,int> Mang_One; 
    map<int,int> Mang_True;
    int result = 0;    
    for(int i = 0; i < n ;i++){
        Mang_One[a[i]]++;
    }
    for(int j = 0 ;j < m;j++){
        Mang_True[b[j]]++;
    }
    In_Map(Mang_One);
    In_Map(Mang_True);

    result = Gop_Map(Mang_One, Mang_True);
    cout << result;
}
int main() {
    int n;
    int m;
    cin >> n >> m;

    int* a = new int[n];
    Nhap_Mang("a", a, n);
    int* b = new int[m];
    Nhap_Mang("b", b, m);
    Xu_Li_Mot(a, b, n, m);

    return 0;
}


/*
   8  7
   1 1 3 3 3 5 8 8 
   1 3 3 4 5 5 5

   11
*/