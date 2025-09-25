#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
       bool compare_rev = str1 + str2 == str2 + str1;
       if (!compare_rev) {
          return "";
       }
        int len = gcd(str1.size(), str2.size());
        return str1.substr(0, len);
    }

    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};