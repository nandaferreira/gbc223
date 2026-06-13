// n dragoes a cada nivel
//nivel de força representada por inteiro 
// forca inicial = s
//se(forca_Kirito < forca_dragao(xi)) = kirito perde e morre
// se (forca_Kirito > forca_dragao)= kirito vence; forca_kirito recebe bonus (yi)
// se ganhar todos os duelos, avança para o proximo nivel

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;

    vector<pair<int,int>> dragoes(n);

    for (int i = 0; i < n; i++) {
        cin >> dragoes[i].first >> dragoes[i].second; 
    }

    sort(dragoes.begin(), dragoes.end());

    for (auto& dragao : dragoes) {
        if (s <= dragao.first) {
            cout << "NO" << endl;
            return 0;
        }
        s += dragao.second;
    }

    cout << "YES" << endl;
    return 0;
}