#include<bits/stdc++.h>
using namespace std;
void Dem_Chu_So(int n){
    int dem = 0;
    while(n > 0){
       dem+=1;
       n/=10;
    }
    cout <<"\nSo luong chu so cua  n la: "<<dem <<endl; 
}
void Dem_Chu_So_X(int n){
     static int dem= 0;
     dem+=1;
     n/=10;
     if(n>0){
        Dem_Chu_So_X(n);
     }
     else{
        cout <<"\nSo luong chu so cua  n la: "<<dem <<endl; 
     }
}
int Dem_Chu_So_Y(int n,int dem = 0){
    if(n > 0){
        dem+=1;
        Dem_Chu_So_Y(n/10,dem);
    }
    else{
        return dem;
    }
}
void SoLuongSoChan(int n){
    static int dem = 0;
    if(n > 0){
        dem += ((n%10)%2 ==0) ?1 : 0;
        SoLuongSoChan(n/10);
    }
    else{
        cout <<"\nSo luong so chu so chan : "<< dem <<endl;
    }
}
int SoLuongSoChan_X(int n, int dem = 0){
    if(n > 0){
       dem += ((n%10)%2 ==0) ?1 : 0;
      return SoLuongSoChan_X(n/10,dem);
    }
    else{
        return dem;
    }
}
int main(){
   Dem_Chu_So(12345);
   Dem_Chu_So_X(12345);

   cout << Dem_Chu_So_Y(12345);


   SoLuongSoChan(12345); /*=24=*/

   cout <<SoLuongSoChan_X(12345,0); 
   return 0;
}