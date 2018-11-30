<!-- footer: M Fraschini 2018-2019 -->

<!-- page_number: true -->


# C: Strutture

Elementi di Informatica 2018/2019

---

# Strutture

**Tipo derivato**: deve far riferimento ad un tipo *base*

- Quando si usa una struttura :question: 

	- Quando abbiamo necessitÃ  di trattare un **insieme NON omogeneo** di dati :exclamation:

---



# Strutture

**Esempio*: memorizzare una data

`int giorno, mese, anno;`

Tre variabili per ogni data. Se serve unâ€™altra data, dobbiamo dichiarare altre tre variabiliâ€¦

**Le tre variabili sono logicamente collegate**

Sarebbe utile poterle raggruppare! Usiamo le struttureâ€¦


---

# Strutture

```C
struct data
{
 int giorno;
 int mese;
 int anno;
};
```

---

# Strutture: definizione

```C
struct data
{
 int giorno;
 int mese;
 int anno;
};
```

Questa rappresenta la **DEFINIZIONE** di una strutture.

La definizione permette di creare un **NUOVO TIPO**


---

# Strutture: dichiarazione


```C
struct data oggi;
struct data data_nascita;
```

Con la dichiarazione viene allocato lo spazio in memoria

---

# Strutture: come accedere

Accedere ad una struttura:

`nome_variabile.nome_membro`

```C
oggi.giorno=6;
oggi.mese=11;
oggi.anno=2018;
```

---

# Strutture

Esempio:

```C
#include <stdio.h>

int main() {

 struct data {
 int giorno;
 int mese;
 int anno;
};

struct data oggi;

printf("Inserisci la data di oggi: ");
scanf("%d%d%d",&oggi.giorno,&oggi.mese,&oggi.anno);
printf("Oggi: %d/%d/%d",oggi.giorno,oggi.mese,oggi.anno);
}
```

---

# Strutture: inizializzazione

```C
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
```

---

# Strutture: inizializzazione

```C
#include <stdio.h>

int main() {

 struct data {
 int giorno;
 int mese;
 int anno;
};

struct data oggi = {.giorno=6, .mese=11, .anno=2018};

printf("\nOggi e' %d/%d/%d",oggi.giorno,oggi.mese,oggi.anno);
}
```

---

# Strutture: inizializzazione

```C
#include <stdio.h>

int main() {

 struct data {
 int giorno;
 int mese;
 int anno;
} oggi = {.giorno=6, .mese=11, .anno=2018};

printf("\nOggi e' %d/%d/%d",oggi.giorno,oggi.mese,oggi.anno);
}
```

