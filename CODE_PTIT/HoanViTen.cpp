#include<bits/stdc++.h>
using namespace std;
string s;
char Chu_Cai[1001];
bool check[1001] = {false};

char result[1001];

void Show(){
    for(int i = 0;i< s.length();i++){
        cout << result[i] <<" ";
    }
    cout << endl;
}
void Tach_Chu_Cai(int index){
    if(index >= s.length()){
      return;
    }
    Chu_Cai[index] = s[index];
    Tach_Chu_Cai(index +1);
}

bool Tach(int index) {
    if (index >= s.length()) {
        return true;
    }
    Chu_Cai[index] = s[index];
    return Tach(index + 1);
}
void Try(int i){
    for(int j = 0; j<s.length();j++ ){
        if(check[j] == false){
            check[j] = true;
            result[i] = Chu_Cai[j];
            if(i == s.length()-1){
                Show();
            }
            else{
                Try(i+1);
            }
            check[j]= false;
         }
    }
}
int main(){
   cin >> s; 
  /* Tach_Chu_Cai(0);*/ 
  if( Tach(0)){
    Try(0);
  }
  else{
    cout <<" Chay duoc cai dau buoi ?"<<endl;
  }
   

   return 0;
}