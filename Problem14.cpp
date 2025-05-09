#include <iostream>
using namespace std;

int main(){
    char ch ; 
    cin >> ch ; 
    int check = ch; 
    if(check >= 65 && check <= 90){
        check += 32 ; 
        ch = static_cast<char>(check);
        cout << ch << endl ;  
    }else{
        check -= 32 ; 
        ch = static_cast<char>(check);
        cout << ch << endl ; 
    }
    system("pause");
    return 0;
}