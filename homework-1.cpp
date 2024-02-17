#include <iostream>
#include <string>

using namespace std;

int main(){
    string stars = "* * * *";
    for (int i = 4; i > 0; i--){
        cout << stars << "\n";
        stars = stars.substr(0, stars.size() - 2);
    }
    return 0;
}