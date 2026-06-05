#include <iostream>
#include <cctype>
using namespace std;
int main() {
char str[1000001];
cin >> str;
int flag = 0;
for (int i = 0; str[i] != '\0'; i++) {
if (isdigit(str[i])) {
flag |= (1 << (str[i] - '0'));
}}
cout << (flag == ((1 << 10) - 1) ? "Yes" : "No") << endl;
 return 0;
}
