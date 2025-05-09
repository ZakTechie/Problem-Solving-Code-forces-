#include <iostream>
using namespace std;

int main(){
    char ch ; 
    cin >> ch ; 
    int check = static_cast<int>(ch);
    if(check >= 48 && check <=57)cout << "IS DIGIT" << endl;
    else if(check >= 65 && check <= 90) cout << "ALPHA\nIS CAPITAL" << endl ;
    else cout << "ALPHA\nIS SMALL" << endl ;
    system("pause");
    return 0;
}