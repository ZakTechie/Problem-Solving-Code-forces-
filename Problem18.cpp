#include <iostream>
using namespace std;

int main(){
    long long N ; 
    cin >> N ; 
    cout << N / 365 << " years" << endl ; 
    cout << (N % 365) / 30 << " months" << endl ;
    system("pause");
    return 0;
}