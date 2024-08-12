#include<bits/stdc++.h>
using namespace std;

int n;

int * x;

int *t;
void IN_KET_QUA (int k){
    cout << n <<" = ";
    for(int i = 1; i< k ;i++){
        cout << x[i] << " + ";
    }
    cout<< x[k]<<endl;
}
void Try(int i){
    for(int j = x[i]; j <= (n - t[i]) / 2 ; j++){
        x[i+1] = j;
        t[i+1] = t[i] + x[i+1];

        Try(i+1);
    }
    /*- Không thỏa điều kiện -*/
    x[i+1] = n - t[i];
    IN_KET_QUA(i +1);
}

int main(){
    cout <<"\nNhap n : "; 
    cin >> n; 
    x = new int[n +1];
    t = new int[n +1];
    t[0] = 0;
    x[0]  =  1;
    Try(0);

}

/*
5 = 1 + 1 + 1 + 1 + 1
5 = 1 + 1 + 1 + 2
5 = 1 + 1 + 3
5 = 1 + 2 + 2
5 = 1 + 4
5 = 2 + 3
5 = 5


*/