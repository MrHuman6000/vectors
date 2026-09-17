#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> p;

    for (int i = 0; i < n; i++) {
        int score, id;
        cin >> score >> id;
        p.push_back({score, id});
    }

    sort(p.begin(), p.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first != b.first) {
            return a.first > b.first;
        }

        return a.second < b.second;
    });

    for (auto x : p) {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}