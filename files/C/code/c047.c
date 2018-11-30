#include <stdio.h>

int main() {

 struct data {
 int giorno;
 int mese;
 int anno;
};

struct data oggi = {6, 11, 2018};

printf("\nOggi e' %d/%d/%d",oggi.giorno,oggi.mese,oggi.anno);
}
