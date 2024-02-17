#include <iostream>

using namespace std;

int main(){
    int ascII[] = {65, 98, 111, 108, 102, 97, 122, 108, 32, 65, 110, 115, 97, 114, 105};
cout << "MyName: \n";
    for (int i : ascII) {
        cout << char(i);
    }
    return 0;
}