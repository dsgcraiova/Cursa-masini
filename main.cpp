#include <stdio.h>

#include <stdio.h>

int main() {
    int A = 0, B = 0;
    int finish = 10;
    int i;

    printf("Cursa de masini\n\n");

    while (A < finish && B < finish) {

        for (i = 0; i < finish; i++) {
            if (i == A) printf("A");
            else printf(".");
        }
        printf("\n");


        for (i = 0; i < finish; i++) {
            if (i == B) printf("B");
            else printf(".");
        }
        printf("\n\n");


        A++;
        B++;


        for (long j = 0; j < 50000000; j++);
    }


    if (A == finish && B == finish)
        printf("Egalitate! Ambele masini au ajuns simultan.\n");
    else if (A == finish)
        printf("Castiga masina A!\n");
    else
        printf("Castiga masina B!\n");

    return 0;
}
