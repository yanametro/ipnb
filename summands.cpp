#include <iostream>
#include <vector>

using namespace std;

int n;

vector<int> v;

void print(const vector<int>& v, int j) {
    for (int i = 0; i < j - 1; ++i) {
        cout << v[i] << "+";
    }
    cout << v[j - 1];
    cout << "\n";
}

void gen(int step, int sum) {
    if (sum == 0) {
        cout << n << "=";
        print(v, step);
        return;
    }
    
    for (int i = 1; i <= sum; ++i) {
        v[step] = i;
        gen(step + 1, sum - i);
    }
}


int main() {
    cin >> n;
    v.resize(n);
    gen(0, n);
}

