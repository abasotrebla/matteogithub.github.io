#include <stdio.h>

int main() {
char stringa[]="Elementi di informatica";
int i=0;

while(stringa[i]!='\0') {
  printf("%c",stringa[i]);
  ++i;
}
}
