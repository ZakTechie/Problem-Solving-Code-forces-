#include <iostream>
using namespace std;

int main(){
    int  A , B , C , Min , Max ; 
    cin >> A >> B >> C  ; 
    Min = A , Max = A ;
    if(B < Min) Min = B ; 
    if(C <  Min) Min = C; 
    if(B > Max) Max = B ; 
    if(C > Max) Max = C ; 
    cout << Min << " " << Max << endl; 
    system("pause");
    return 0;
}