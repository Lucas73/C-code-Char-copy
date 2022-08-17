#include <stdio.h>

# define IN 1
# define OUT 0

int main()
{
        int c, nl, nw, nc, state;

        state = OUT;
        nl = nw = nc = 0;

        while ((c = getchar()) != EOF){
                if (c != ' ')
                ++nc;
                if (c == '\n'){
                        ++nl;
                }
                if ( c == ' ' || c == '\n' || c == '\t'){
                        state = OUT;
                }
                else if ( state == OUT){
                        state = IN;
                        ++nw;
                }
        }
        printf("NUMERO DE LINEAS:%d\nNUMERO DE PALABRAS:%d\nNUMERO DE CARACTERES:%d\n", nl, nw, nc);

}

