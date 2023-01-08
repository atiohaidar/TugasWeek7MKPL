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
    string nama, gender, sakit;
    float ipk;
    int semester, nim;
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
    adrSi child;
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
void insertLastWan(listWan &L, adrWan P);
void insertLastSi(listSi &L, adrSi P);
void autoKursi(listSi &S, adrWan Ww);
void showWisudawanDummy(listWan L);
void showKursiWisuda(listSi L);
void showDenahPerBanjarC(listWan W, int j);
void showDenahPerBanjarTP(listWan W, int j);
void showDenahKeseluruhan(listWan W);
void showSatuLokasiKursi(listWan W, string nama, int nim);
void hapusDataWisudawan(listWan &W, string nama, int nim);
void hapusKursiWisudawan(listSi &S, int banjar, string jenis);

#endif // WISUDA_H_INCLUDED
