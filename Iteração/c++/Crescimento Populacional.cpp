/*
Crescimento Populacional
Jordan quer resolver um problema muito interessante. Dadas as informações sobre
o tamanho da população e a taxa de crescimento anual de duas cidades quaisquer
(A e B), ele gostaria de saber quando a cidade menor (sempre é a cidade A) irá
alcançar a cidade B em população (se é que vai alcançar). Sua tarefa é
construir um programa que faça esses cálculos, porém, em alguns casos o tempo
pode ser muito grande, e Jordan não se interessa em saber exatamente o tempo
para estes casos.

A Entrada consiste de:

    A entrada contém 4 valores: dois inteiros (100≤PA,PB≤1000000) indicando
    respectivamente a população de A e B, e dois valores (0.0 ≤ T1,T2 ≤ 100.0),
    indicando respectivamente, em percentual, o crescimento populacional de A e B.


A Saída deve apresentar:

    "Mais de um milenio." se a quantidade de anos for superior a 1000, "Vai
    alcancar em X ano(s).", onde X representa a quantidade de anos para a
    população de A alcançar o tamanho da população de B, ou "A nunca alcancara
    B.", se a população nunca for alcançar a população de B.

*/
#include <iostream>
using namespace std;

int main(){

    // Recebe os quatro dados, as populações das cidades e das taxas
    float pa, pb, ta, tb; 
    cin >> pa >> pb >> ta >> tb;

    // Se a população de B for maior que a de A e a taxa de crescimento de 
    // B é maior do que A, este é o caso quando ela nunca alcançará
    if(pb > pa and tb >= ta)
        cout << "A nunca alcancara B.\n";
    else{
        // Usamos uma variável de contador para contarmos os anos passados
        int contador = 0;

        // Enquanto a população de A é menor que a de B e ainda não se 
        // passou 1001 anos, atualizamos as populações
        while(pa < pb and contador <= 1000){
            pa = pa + int(pa*(ta/100));
            pb = pb + int(pb*(tb/100));
            ++contador;
        }

        if(contador > 1000)
            cout << "Mais de um milenio.\n";
        else
            cout << "Vai alcancar em " << contador << " ano(s).\n";
    }
}
