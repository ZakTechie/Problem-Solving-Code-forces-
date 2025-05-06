#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    const double PI = 3.141592653 ; 
    double R , area ; 
    cin >> R ; 
    area = PI * pow(R , 2.0) ; 
    cout << fixed << setprecision(9);
    cout << area <<endl; 
    return 0;
}