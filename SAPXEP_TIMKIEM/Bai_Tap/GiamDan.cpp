#include <iostream>
#include <algorithm>

using namespace std;

bool cmp1(int a, int b){
	if(a > b)
		return true;
	else
		return false;
}

bool cmp2(int a,int b){
    if(a < b){
        return true;
    }
    else{
        return false;
    }
}

bool cmp(int x, int y) {
    // Chẵn đứng trước, lẻ đứng sau
    if ((x % 2 == 0) && (y % 2 != 0)) return true;
    if ((x % 2 != 0) && (y % 2 == 0)) return false;

    // Nếu cả hai đều chẵn, sắp xếp giảm dần
    if ((x % 2 == 0) && (y % 2 == 0)) return x > y;

    // Nếu cả hai đều lẻ, sắp xếp tăng dần
    if ((x % 2 != 0) && (y % 2 != 0)) return x < y;

    // Trường hợp mặc định (không cần thiết vì đã xét đủ các trường hợp)
    return false;
}

int main(){
	int a[] = {1, 3, 3, 3, 2, 1, 2, 4, 2, 4, 0, 2};
	int n = 12;
	sort(a, a + n, cmp);
	cout << "Mang giam dan : ";
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}