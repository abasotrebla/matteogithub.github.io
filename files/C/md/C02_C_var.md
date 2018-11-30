<!-- footer: M Fraschini 2018-2019 -->

<!-- page_number: true -->


# C: variabili e assegnamenti

Elementi di Informatica 2018/2019

---

# Dichiarazione di variabili

- Dichiarazione delle variabili che saranno utilizzate nel programma.
- Assegnazione di un **nome** (identificatore) e attribuzione del **tipo**.
- Il tipo definisce le caratteristiche che regolano lâ€™uso di una variabile.

`tipo nomevariabile;`
`tipo nomevariabile, nome_var;`
`tipo variabile, var1, var2;`


---

# Dichiarazione di variabili

`tipo variabile, var1, var2;`

```C
int i;
int a,b;
float c;
int j=0;

```

NB: il C è *case sensitive*!

---

# Dichiarazione di costanti

Viene assegnato un valore in maniera permanente

```C
const float PiGreco = 3.14;
const int N = 100;
```

```C
#define N 100 

//direttiva al preprocessore 
//non e' scope-controlled
```

Vantaggi: chiarezza e parametrizzazione

---
# Istruzione di assegnamento

Viene utilizzato il simbolo `=`

Permette di assegnare ad una variabile un valore o il risultato di una espressione (*o il valore restituito da una funzione*).

identificatore `<-` valore

```C
a=0;
c='a';
x=x+1; //ATTENZIONE!
```

---

# Operatori aritmetici

`+` addizione
`-` sottrazione
`*` moltiplicazione
`/` divisione

`%` modulo (resto della divisione)

---

# Istruzioni di input e output

Standard output: `printf()`
Standard input: `scanf()`

---

# Istruzione printf

Stampa su video

```C
printf("Ciao"); //stampa a video: Ciao

printf("Ciao\n"); //stampa a video: Ciao

```

Necessita dell'inclusione della libreria `stdio.h`

```C
#include <stdio.h>
```

---

# Istruzione printf

Stampa su video

```C
#include <stdio.h>

int main()
{
  int var=1;
  char c='a';
  printf("%d\n",var); 
  //%d formato di stampa: intero sistema decimale
  printf("%c\n",c);
  //%c formato di stampa: carattere
  return 0;
}
```

---
# Istruzione printf

```C
#include <stdio.h>

int main()
{
  int base=2;
  int altezza=4;
  int area;

  printf("La base vale: %d\n",base);
  printf("L'altezza vale: %d\n",altezza);

  area = base * altezza;

  printf("L'area del rettangolo vale: %d\n",area);

  return 0;
}
```
---
# Istruzione printf

```C
#include <stdio.h>

int main()
{
  int base=2;
  int altezza=4;

  printf("Base: %d Altezza: %d\n",base,altezza);
  printf("L'area vale: %d\n",base * altezza);

  return 0;
}
```

---
# Istruzione scanf

Inserimento di valori (da tastiera)

```C
scanf("%d", &base);
```
`&` indica l'indirizzo di memoria della variabile `base`

---
# Istruzione scanf

```C
#include <stdio.h>

int main()
{
  int base, altezza;

  printf("Inserisci la base: ");
  scanf("%d", &base);

  printf("Inserisci l'altezza: ");
  scanf("%d", &altezza);

  printf("L'area vale: %d\n",base * altezza);

  return 0;
}
```

---
# Esercizio

Scrivere un programma in C che esegua la somma di due numeri interi

---
# Soluzione

```C
#include <stdio.h>

int main()
{
  int n, m, somma;

  printf("Inserisci i numeri: ");
  scanf("%d%d", &n,&m);

  somma=n+m;

  printf("%d + %d: %d\n",n,m, somma);

  return 0;
}

```
---
# Espressioni aritmetiche e precedenze

```C
#include <stdio.h>

int main()
{
  int n1=4, n2=2;
  float f1=4,f2=2;

  printf("1 + n1 / 2 * n2 = %d", 1 + n1 / 2 * n2); //5
  printf("\n");
  printf("1 + f1 / 2 * f2 = %f", 1 + f1 / 2 * f2); //5.0
  printf("\n");

  return 0;
}
```
---
# Istruzioni composte

Unione di operatori aritmetici e assegnazione:
`operatore_aritmetico=` ("`+=`")

`count += 10;`

somma l’espressione a destra con l’espressione a sinistra e assegna alla variabile a sinistra

`count = count + 10;`

---
# Esercizio

Calcolare diametro, circonferenza e aria di un cerchio a partire dal valore del raggio.

# ![](/Users/matteo/Downloads/images/cerchio.png)

---

# Soluzione

```C
#include <stdio.h>

int main()
{
  const float Pi=3.14;
  float raggio, diametro, circ, area;

  printf("Inserisci raggio: ");
  scanf("%f",&raggio);

  diametro=2*raggio;
  circ=diametro*Pi;
  area=Pi*raggio*raggio;

  printf("Diametro: %f ",diametro);
  printf("Circonferenza: %f ",circ);
  printf("Area: %f ",area);

  return 0;
}
```
---

# Conversione

```C
#include <stdio.h>
int main()
{
    float f1=3.7, f2; 
    int i1,i2=-10;

    i1=f1; //conversione da float ad intero: 3
    printf("%f -> ad intero produce: %d\n", f1, i1);

    f1=i2; // conversione da intero a float: -10.000
    printf("%d -> a float produce: %f\n", i2, f1);

    f1=i2/3; // divisione tra interi: -3.000
    printf("%d diviso 3 produce: %f\n", i2, f1);

    f2=i2/3.0; // intero diviso float: -3.333
    printf("%d diviso 3.0 produce: %f\n",i2,f2);

    f2=(float) i2/3; //cast: -3.333
    printf("(float) %d diviso 3 produce: %f\n",i2,f2);
    return 0;
}
```

