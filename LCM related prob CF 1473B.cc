#include <bits/stdc++.h>
using namespace std;

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Function to calculate the LCM of two numbers
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

// Function to generate repeated pattern based on length
string get_repeated_pattern(const string& s, int length) {
    string pattern = s.substr(0, length);
    for (int i = 0; i < s.size(); i += length) {
        if (s.substr(i, length) != pattern) {
            return "";
        }
    }
    return pattern;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int m = s1.length();
        int n = s2.length();
        int length_lcm = lcm(m, n);

        // Print the LCM value
        cout << "LCM of lengths: " << length_lcm << endl;

        string extended_s1 = "";
        string extended_s2 = "";

        while (extended_s1.length() < length_lcm) {
            extended_s1 += s1;
        }

        while (extended_s2.length() < length_lcm) {
            extended_s2 += s2;
        }

        if (extended_s1 == extended_s2) {
            cout << extended_s1.substr(0, length_lcm) << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
