#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

vector<char> extract_letters(const string& line) {
    vector<char> letters;
    for (char ch : line) {
        if (isupper(static_cast<unsigned char>(ch))) {
            letters.push_back(ch);
        }
    }
    return letters;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string firstLine;
    while (getline(cin, firstLine)) {
        if (!firstLine.empty()) {
            break;
        }
    }

    if (firstLine.empty()) {
        return 0;
    }

    int t;
    stringstream(firstLine) >> t;

    vector<vector<string>> cases;
    vector<string> currentCase;

    string line;
    while (getline(cin, line)) {
        if (line.empty()) {
            if (!currentCase.empty()) {
                cases.push_back(currentCase);
                currentCase.clear();
            }
        } else {
            currentCase.push_back(line);
        }
    }

    if (!currentCase.empty()) {
        cases.push_back(currentCase);
    }

    vector<int> answers;
    for (int caseIndex = 0; caseIndex < min(t, static_cast<int>(cases.size())); ++caseIndex) {
        const vector<string>& block = cases[caseIndex];
        if (block.empty()) {
            answers.push_back(0);
            continue;
        }

        char maxNode = block[0].front();
        int n = maxNode - 'A' + 1;
        vector<vector<int>> adj(n);

        for (size_t i = 1; i < block.size(); ++i) {
            vector<char> letters = extract_letters(block[i]);
            if (letters.size() >= 2) {
                int u = letters[0] - 'A';
                int v = letters[1] - 'A';
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }

        vector<bool> visited(n, false);
        int components = 0;
        for (int i = 0; i < n; ++i) {
            if (!visited[i]) {
                ++components;
                vector<int> stack;
                stack.push_back(i);
                visited[i] = true;

                while (!stack.empty()) {
                    int u = stack.back();
                    stack.pop_back();
                    for (int v : adj[u]) {
                        if (!visited[v]) {
                            visited[v] = true;
                            stack.push_back(v);
                        }
                    }
                }
            }
        }

        answers.push_back(components);
    }

    for (size_t i = 0; i < answers.size(); ++i) {
        if (i > 0) {
            cout << "\n\n";
        }
        cout << answers[i];
    }

    return 0;
}
