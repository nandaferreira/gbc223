#include <iostream>
#include <stack>

using namespace std;

int main(){

    string s;
    cin >> s;
    int n = s.size();


    stack<int> pilha;
    pilha.push(-1);

    int tamMaximo = 0;
    long long contador = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            pilha.push(i);
        }else{
            pilha.pop();

            if(pilha.empty()){
                pilha.push(i);
            } else {
                int len = i - pilha.top();

                if (len > tamMaximo) {
                    tamMaximo = len;
                    contador = 1;
                } else if (len == tamMaximo) {
                    contador++;
                }
            }
        }
    }

    if(tamMaximo == 0){
        cout << "0 1\n";
    }else{
        cout <<tamMaximo << " " << contador << "\n";
    }

    return 0;
}