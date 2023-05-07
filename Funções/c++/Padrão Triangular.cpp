/*
 * Padrão Triangular?
 *
 * O programa a seguir deveria imprimir 8 linhas exibindo um padrão visualmente
 * triângular usando-se apenas as instruções e outros recursos que aprendemos
 * até agora. Corrija os erros de sintaxe e de lógica para que ele imprima o
 * padrão 16 vezes como em uma tabela 4x4.
 *
 * A Entrada consiste de:
 *
 *     3 caracteres em uma linha, separados por espaços em branco.Cada caracter
 *     representa um lado do triângulo.
 *
 *
 * A Saída deve apresentar:
 *
 *     O resultado deve ser um padrão triângular 4x4
 *
 */

#include <iostream>

using namespace std;

string s1, s2, s3; 

void duplica(void (*f)()){
    f();
    f();
        // Havia aqui uma chamada da função f() adicional
}
void duplica_o_duplicado(void (*f)()){
    duplica(f);
    duplica(f);
}

void imprime_parte_linha1(){
    cout << " "+s1+s2+" "; // Existia um '+' adicional
}
    
void imprime_parte_linha1_fim(){
    cout << "";
}
    
void imprime_parte_linha2(){
    cout << s1 + s3 + s3 + s2;
}
    
void imprime_parte_linha2_fim(){
    cout << ' ';
}
      
void imprime_linha1(){
    duplica_o_duplicado(imprime_parte_linha1);
    imprime_parte_linha1_fim();
}

void imprime_linha2(){
    duplica_o_duplicado(imprime_parte_linha2);
    imprime_parte_linha2_fim();
}
    
void imprime_parte_padrão(){
    imprime_linha1();
    imprime_linha2(); // Existia um - ao invés de _
}

void imprime_padrao(){
    duplica_o_duplicado(imprime_parte_padrão);
}
    
int main(){
    cin >> s1 >> s2 >> s3;
    imprime_padrao();
}


