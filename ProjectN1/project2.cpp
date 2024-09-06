#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void MyFunction(int num) {
    string result;
    int num1 = num;
    while (num1 != 0) {
        if(num1%2==0) {
            result += to_string(0);
        }
        else {
            result += to_string(1);
        }
        num1 = num1/2;
    }
    int len1 = result.length();
    for (int i = 0; i < (8-len1); i++) {
        result += "0";
    }
    reverse(result.begin(), result.end());
    cout << "Binary version:" + result << endl;
};


int MyFunction2(string num) {
    reverse(num.begin(), num.end());
    int len = num.length();
    int result = 0;
    for (int i = 0; i < len; i++) {
        result += (pow(2,i) * (num[i] - '0'));
    }
    return result;
}

int main() {
    string input;
    cout << "Binary(enter 1) or Decimal (enter 2)" << endl;
    cin >> input;
    if (input[0] == '1') {
        int c,d;
        cout << "Enter first binary number: ";
        cin>>c;
        cout << "Enter second binary number: ";
        cin>>d;
        MyFunction(MyFunction2(to_string(c)) + MyFunction2(to_string(d)));
    }
    else if (input[0] == '2') {
        int a,b;
        cout << "Enter first decimal number: ";
        cin >> a;
        cout << "Enter second decimal number: ";
        cin >> b;
        MyFunction(a+b);
    }
    return 0;
}