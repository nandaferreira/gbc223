/*vetor inicialmente vazio
sao dadas N operacoes de 2 tipos possiveis: 
1- push - insere um elemento no final do vetor
2 - pop - remove o ultimo elemento do vetor. se o vetor estiver vazio essa operacao nao tem efeitos. Dada a lista de operacoes, encontre o tamanho maximo do array a qualquer momento dado


input: primeira linha contem um single N. a segunda linha contem N inteiros correspondentes as operacoes. O push eh representado por 1, enquanto o pop eh representado por 0.

output: printe um unico inteiro representando o tamanho maximo do vetor a qualquer momento dado

*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> vetor;

int main() {
    int N;
    cin >> N;
    vector<int> operacoes(N);
    for (int i = 0; i < N; i++) {
        cin >> operacoes[i];
    }

    int tamanho_max = 0; 
    for (int i = 0; i < N; i++) {
        if (operacoes[i] == 1) { 
            vetor.push_back(1); 
        } else if (operacoes[i] == 0) { 
            if (!vetor.empty()) { 
                vetor.pop_back(); 
            }
        }
        tamanho_max = max(tamanho_max, (int)vetor.size()); 
    }

    cout << tamanho_max << endl;
    return 0;
}
