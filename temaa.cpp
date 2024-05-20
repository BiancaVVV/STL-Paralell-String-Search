#include <iostream>
#include <string>
#include <algorithm>
#include <execution>

using namespace std;

bool findString(const string& haystack, const string& needle) {
    auto it = std::search(std::execution::par_unseq, haystack.begin(), haystack.end(), needle.begin(), needle.end());
    return it != haystack.end();
}

int main() {
    string haystack = "Acesta este un text de exemplu pentru a căuta un string într-un alt string.";
    string needle = "Acesta este un text de exemplu pentru";

    if (findString(haystack, needle)) {
        cout << "Șirul căutat a fost găsit în textul dat." << endl;
    }
    else {
        cout << "Șirul căutat nu a fost găsit în textul dat." << endl;
    }

    return 0;
}
