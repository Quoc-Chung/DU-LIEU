#include<bits/stdc++.h>
using namespace std;

void Recurse(){
    Recurse();
}

void De_Quy(int n){
    if(n > 0){
        cout << n <<"  ";
        De_Quy(n-1);
    }
} 
/*- Tổng của n số tự nhiên -*/
void Tinh_Tong(int n) {
    static int count = 0;  // Biến static để lưu trữ giá trị giữa các lần gọi hàm đệ quy
    count += n;  // Cộng giá trị n vào biến count
    n = n - 1;  // Giảm giá trị n

    if (n >= 0) {
        Tinh_Tong(n);  // Gọi đệ quy với giá trị n mới
    } else {
        cout << "Tong la: " << count << endl;  // In kết quả khi đệ quy kết thúc
    }
}


int Tinh_Tong_X(int n ){
   static int count  = 0;
   count = count + n; 
   n = n -1; 
   
   if(n >= 0){
    return Tinh_Tong_X(n);
   }
   else{
     cout <<"\nTong la  : " << count << endl;
   }
}

int main(){
    
/* - 4  -   3    -   2  -  1  -  Hoặc là nó sẽ ra 4 chữ n */
    De_Quy(4);  

    Tinh_Tong(4); // 4 + 3 + 2 + 1 

    int  n;
    cout << "\nNhap n : "; 
    cin >> n;
   
    cout << Tinh_Tong_X(n);
}