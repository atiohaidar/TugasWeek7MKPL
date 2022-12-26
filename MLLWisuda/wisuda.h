#ifndef WISUDA_H_INCLUDED
#define WISUDA_H_INCLUDED

#include <iostream>
using namespace std;

#define info(p) (p)->info
#define next(p) (p)->next
#define child(p) (p)->child
#define first(L) (L).first
#define nil NULL

struct wisudawan{
    string nama, nim, gender, sakit;
    float ipk;
};

struct kursiWisuda{
    string jenis, khusus;
    int banjar;
};

typedef struct wan *adrWan;
typedef struct si *adrSi;

struct wan{
    wisudawan info;
    adrWan next;
    adrWan child;
};

struct si{
    kursiWisuda info;
    adrSi next;
};

struct listWan{
    adrWan first;
};

struct listSi{
    adrSi first;
};

void createListWisudawan(listWan &L);
void createListKursiWisuda(listSi &L);
adrWan newElemenWisudawan(wisudawan X);
adrSi newElemenKursiWisuda(kursiWisuda X);
void insertFirstWan(listWan &L, adrWan P);
void insertAfterWan(listWan &L, adrWan after, adrWan P);
void insertLastWan(listWan &L, adrWan P);
void insertLastSi(listSi &L, adrSi P);
void pendataanWisudawan(listWan &L, wisudawan w);
void showWisudawan(listWan L);
void showKursiWisuda(listSi L);

void autoKursi(listWan &W, listSi &S, adrWan w, adrSi s);

#endif // WISUDA_H_INCLUDED
