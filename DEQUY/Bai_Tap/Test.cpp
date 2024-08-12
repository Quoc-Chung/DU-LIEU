#include <iostream>
using namespace std;

void printUserInfo(string name, int age = 18) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    printUserInfo("Alice"); // Sử dụng giá trị mặc định cho tuổi
    printUserInfo("Bob", 25); // Cung cấp giá trị cho cả hai tham số
    
    return 0;
}
