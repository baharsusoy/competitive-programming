#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int a = 40;
    int* p = &a;
    printf ("pointer değeri: %d\n", *p);
    printf ("sayının değeri: %d\n", a);
    printf ("poiterın tuttugu adres: %x", &p);
}