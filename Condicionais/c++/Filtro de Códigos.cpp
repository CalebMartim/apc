/*
Filtro de Códigos

Para programar existem alguns requisitos que nossos códigos devem atender
independente do problema. Para isso, algumas perguntas podem ser feitas durante
a implementação de um programa, conforme demonstra o guia abaixo. Sua tarefa é
implementar um programa que ajude os programadores a avaliarem seus códigos da
mesma forma que o guia. A figura apresenta a ordem das perguntas que deverão
ser feitas. 

* Figura * 

A Entrada consiste de:

    Após cada pergunta é lida uma String que pode ser do tipo 'SIM' ou 'NÃO'.

A Saída deve apresentar:

    Todas as perguntas de acordo com as respostas do usuário e por fim uma das
    cinco possíveis respostas finais.

*/

// Como o caso de tutoria pode ser chegado por 3 formas diferentes, é mais 
// sinples criar uma função para este caso
#include <iostream>
using namespace std;

void tutoria(){
    cout << "Já foi na tutoria?\n";
    string ans; cin >> ans;
    if(ans == "SIM")
        cout << "Choremos!\n";
    else
        cout << "Temos um time a disposição!\n";
}

int main(){
    // O problema sempre inicia com essa pergunta
    cout << "O programa funciona?\n";
    string ans; cin >> ans;

    // Simplesmente segue a árvore de decisões do problema
    if(ans == "SIM"){
        cout << "Você entende o que fez?\n";
        cin >> ans;
        if(ans == "SIM")
            cout << "Ótimo. Então não mexe!\n";
        else
            tutoria();
    }
    else{
        cout << "Você sabe onde estprint(á o erro?\n";
        cin >> ans;
        if(ans == "SIM"){
            cout << "Acha que pode solucionar sozinho?\n";
            cin >> ans;
            if(ans == "SIM")
                cout << "Então mão na massa!\n";
            else{
                cout << "Já pesquisou no Google?\n";
                cin >> ans;
                if(ans == "SIM")
                    tutoria();
                else
                    cout << "Corre lá então!\n";
            }
        }
        else
            tutoria();
    }
}
