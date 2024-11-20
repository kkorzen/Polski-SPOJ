        // Kod: AL_20_01
        // Link: https://pl.spoj.com/problems/AL_20_01/
        	
        #define A ".-/"
        #define B "-.../"
        #define C "-.-./"
        #define D "-../"
        #define E "./"
        #define F ".-../"
        #define G "--./"
        #define H "..../"
        #define I "../"
        #define J ".---/"
        #define K "-.-/"
        #define L "..-./"
        #define M "--/"
        #define N "-./"
        #define O "---/"
        #define P ".--./"
        #define Q "--.-/"
        #define R ".-./"
        #define S ".../"
        #define T "-/"
        #define U "..-/"
        #define V "...-/"
        #define W ".--/"
        #define X "-..-/"
        #define Y "-.--/"
        #define Z "--../"
        	
        	
        #include<stdio.h>
        #include<string.h>
        #include <ctype.h>
        	
        char* LetterToMorse(char c) {
        	switch (c) {
        	case 'A': return A;
        	case 'B': return B;
        	case 'C': return C;
        	case 'D': return D;
        	case 'E': return E;
        	case 'F': return F;
        	case 'G': return G;
        	case 'H': return H;
        	case 'I': return I;
        	case 'J': return J;
        	case 'K': return K;
        	case 'L': return L;
        	case 'M': return M;
        	case 'N': return N;
        	case 'O': return O;
        	case 'P': return P;
        	case 'Q': return Q;
        	case 'R': return R;
        	case 'S': return S;
        	case 'T': return T;
        	case 'U': return U;
        	case 'V': return V;
        	case 'W': return W;
        	case 'X': return X;
        	case 'Y': return Y;
        	case 'Z': return Z;
        	
        	case ' ': return "/";
        	}
        }
        	
        int main(void) {
        	char* str = NULL;
        	size_t size = 0;
        	size_t len = 0;
         
        	while ((len = getline(&str, &size, stdin))!=-1) {
        		if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = 0;
        		for (int i = 0;i < strlen(str);i++) {
        			printf("%s", LetterToMorse(toupper(str[i])));
        		}
        		putc('\n', stdout);
        	}
        	return 0;
        }    
