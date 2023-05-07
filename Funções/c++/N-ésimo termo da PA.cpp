/*
 * N-ésimo termo da PA
 *
 * Elabore uma função n_termo() que recebe como parâmetros:  i o primeiro termo
 * de uma progressão aritmética, r a razão dessa progressão aritmética e n seu
 * número de termos e retorne o n-ésimo termo da PA.
 *
 * A Entrada consiste de:
 *
 *     Não há entrada para essa questão, apenas os parâmetros da função
 * n_termo(), i, r e n, três números inteiros.
 *
 *
 * A Saída deve apresentar:
 *
 *     Não há saída para essa questão, apenas é necessário que a função retorne
 * o n-ésimo da progressão aritmética.
 *
 */

// Considerando a fórmula da posição do n-ésimo termo de uma progressão aritmética
// a_n = a_i + (n - 1)*r retornamos o resultado dessa equação dado os paramêtros
int n_termo(int i, int r, int n){
    return i + (n - 1)*r;
}

int main(){

}
