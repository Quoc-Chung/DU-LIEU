#include<bits/stdc++.h>
using namespace std;
bool Kiem_Tra_Day_Con(string s, string t){
    int i = 0, j = 0; 
    while(i < s.size() && j < t.size()){
        if(s[i] == t[j]){
            i++;
        }
        j++;
    }
    return i== s.size();
}
bool Kiem_Tra_Day_Con_De_Quy(string a, string b, int i = 0, int j = 0) {
    if (i == a.size()) {
        // Đã duyệt hết chuỗi a
        return true;
    }
    if (j == b.size()) {
        // Đã duyệt hết chuỗi b mà chưa duyệt hết chuỗi a
        return false;
    }
    if (a[i] == b[j]) {
        // Ký tự hiện tại khớp, kiểm tra ký tự tiếp theo của cả hai chuỗi
        return Kiem_Tra_Day_Con_De_Quy(a, b, i + 1, j + 1);
    } else {
        // Ký tự hiện tại không khớp, kiểm tra ký tự tiếp theo của chuỗi b
        return Kiem_Tra_Day_Con_De_Quy(a, b, i, j + 1);
    }
}
int main(){
   string a="chung";
   string b="tuquocchung";
   if(Kiem_Tra_Day_Con(a,b)){
      cout << "\nDay a chua day b"<< endl;
   }
   else{
      cout <<"\nDay a khong chua day b"<<endl;
   }
   return 0;
}
