// Kod: BEZPRZEC
// Link: https://pl.spoj.com/problems/BEZPRZEC/

#include <stdio.h>

int main(int a, int b) {
    if(printf("%d", (scanf("%d %d", &a,&b), a+b))){}
}

/*
    [PL]
    Uzywajac wyrazenia (wyr1, wyr2) najpierw wykonywane jest wyr1, a potem wyr2 i to wyr2 jest wartoscia zwrotna calego wyrazenia.
    Dlatego w programie najpierw wykona sie scanf(), ktory wczyta wartosci 'a' oraz 'b', a nastepnie wykonane zostanie wyrazenie a+b
    i to jego wynik zostanie zwrocony jako wartosci wyrazenia w nawiasach, co bedzie parametrem funkcji printf().

    [EN]
    Using the expression (exp1, exp2) firstly the exp1 is evaluated and then exp2 and the exp2 is the return value of the whole expression
    in brackets. In the givein program, firstly the scanf() function is evaluated and the values of 'a' and 'b' are read from the input buffer.
    Then the expression a+b is evaluated being and expression returned from within the brackets, being at the same time a printf()'s parameter.
*/
