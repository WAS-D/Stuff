#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

namespace data {
    string Id0 = "#";
    string Id1 = "#";
    string Id2 = "#";
    string Id3 = "#";
    string Id4 = "#";
    string Id5 = "#";
    string Id6 = "#";
    string Id7 = "#";
    string Id8 = "#";
    string null;
    string xo;
}

int main() {
    using namespace data;
    cout << "Hello";
    getline(cin, null);
    cout << "X or Os? :";
    getline(cin, xo);
    cout << "So " << xo << "? Great!\n";
}
