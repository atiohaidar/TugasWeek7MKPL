#include "wisuda.h"

void createListWisudawan(listWan &L){
    first(L) = nil;
}

void createListKursiWisuda(listSi &L){
    first(L) = nil;
}
adrWan newElemenWisudawan(wisudawan X){
    adrWan P = new wan;
    info(P) = X;
    child(P) = nil;
    next(P) = nil;
    return P;
}

adrSi newElemenKursiWisuda(kursiWisuda X){
    adrSi P = new si;
    info(P) = X;
    next(P) = nil;
    return P;
}

void insertFirstWan(listWan &L, adrWan P){
    if (first(L)==nil){
        first(L) = P;
    }else{
        next(P) = first(L);
        first(L) = P;
    }
}

void insertAfterWan(listWan &L, adrWan after, adrWan P){
    if (first(L)==nil){
        first(L)=P;
    }else{
        next(P) = next(after);
        next(after) = P;
    }
}

void insertLastWan(listWan &L, adrWan P){
    if (first(L)==nil){
        first(L)=P;
    }else{
        adrWan Q= first(L);
        while (next(Q)!=nil){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void insertLastSi(listSi &L, adrSi P){
    if (first(L)==nil){
        first(L)=P;
    }else{
        adrSi Q = first(L);
        while(next(Q)!=nil){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void pendataanWisudawan(listWan &W, wisudawan w){
    adrWan baru = newElemenWisudawan(w);
    if (first(W)== nil){
        first(W) = baru;
    }else{
        adrWan P = first(W);
        adrWan baru = newElemenWisudawan(w);
        while(P!=nil){
            if (info(P).ipk<info(baru).ipk){
                insertAfterWan(W,P,baru);
            }else if(info(P).ipk>info(baru).ipk){
                insertFirstWan(W,baru);
            }
            P = next(P);
        }
    }
}

void showWisudawan(listWan L){
    adrWan P = first(L);
    while (P!= nil){
        cout << "Nama   : "<< info(P).nama <<endl;
        cout << "Gender : "<< info(P).gender << endl;
        cout << "NIM    : "<< info(P).nim <<endl;
        cout << "IPK    : "<< info(P).ipk <<endl;
        cout << "Sakit  : "<< info(P).sakit << endl;
        cout << endl;
        P = next(P);
    }
}

void showKursiWisuda(listSi L){
    if (first(L)==nil){
        cout << "Kosong" << endl;
    }else{
        adrSi P = first(L);
        while (P!= nil){
            cout << "Banjar Kursi: " << info(P).banjar<<endl;
            cout << "Jenis       : "<< info(P).jenis <<endl;
            cout << "Khusus      : " << info(P).khusus<<endl;
            cout << endl;
            P = next(P);
        }
    }
}

void autoKursi(listWan &W, listSi &S){
    adrWan w = first(W);
    adrSi s = first(S);
    while (w != nil && s != nil){
        if (info(w).sakit == "Ya" && info(s).khusus == "Sakit"){
            child(w) = s;
        }
        w = next(w);
        s = next(s);
    }
}
