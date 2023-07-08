#include <iostream>
using namespace std;

int main() {
    char name1[] = "World";
    char name2[] = {'W', 'o', 'r', 'l', 'd', '\0'}; // notice the null char, it means the string is ending there
    char name3[6] = {'W', 'o', 'r', 'l', 'd', '\0'};
    cout << "name1 = " << name1 << '\n';
    cout << "name2 = " << name1 << '\n';
    cout << "name3 = " << name1 << '\n';
    return 0;
}
