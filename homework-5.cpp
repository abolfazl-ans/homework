#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> users = {"user1", "user2", "user3"};
    std::string input;

    std::cout << "لطفاً نام کاربری خود را وارد کنید: ";
    std::cin >> input;

    if (std::find(users.begin(), users.end(), input) != users.end()) {
        std::cout << "با موفقیت وارد شدید" << std::endl;
    } else {
        users.push_back(input);
        std::cout << "کاربر جدید اضافه شد: "<< input << std::endl;
    }

    return 0;
}