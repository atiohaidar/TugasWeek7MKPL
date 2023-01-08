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

void showWisudawanDummy(listWan L){
    adrWan P = first(L);
    while (P!= nil){
        cout << endl;
        cout << "\t"<<"Nama     : "<< info(P).nama <<endl;
        cout << "\t"<<"Gender   : "<< info(P).gender << endl;
        cout << "\t"<<"NIM      : "<< info(P).nim <<endl;
        cout << "\t"<<"Semester : "<< info(P).semester <<endl;
        cout << "\t"<<"IPK      : "<< info(P).ipk <<endl;
        cout << "\t"<<"Sakit    : "<< info(P).sakit << endl;
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
            cout << "\t\t||\t\t"<<"Banjar Kursi: " << info(P).banjar<<endl;
            cout << "PANGGUNG"<<"\t\t||      "<<"Jenis       : "<< info(P).jenis << "\t= 1 = 2 = 3 = 4 = 5 = 6 = 7 = 8 = 9 = 10 = 11 = 13 = 13 = 14 = 15" <<endl;
            cout << "\t\t||\t\t"<<"Khusus      : " << info(P).khusus<<endl;
            cout << endl;
            P = next(P);
        }
    }
}

void autoKursi(listSi &S, adrWan Ww){
    adrWan w = Ww;
    adrSi s = first(S);
    while (w != nil){
        while (s != nil){
            //Sakit Cumlaude (IPK diatas 3,5 dan semester memenuhi) (Kursi banjar 1 Cumlaude)
            if (info(w).sakit == "Ya" && info(w).ipk > 3.5 && info(w).semester <= 8 && info(w).sakit == "Ya" && info(s).khusus == "Sakit" && info(s).jenis == "Cumlaude" && info(s).banjar==1){
                child(w) = s;
                break;
            //Sakit Tanpa Predikat (IPK diatas 3,5 dan semester tidak memenuhi) (Kursi banjar 5 Tanpa Predikat)
            }else if (info(w).sakit == "Ya" && info(w).ipk > 3.5 && info(w).semester > 8 && info(w).sakit == "Ya"&& info(s).khusus == "Sakit" && info(s).jenis == "Tanpa_Predikat" && info(s).banjar==5){
                child(w) = s;
                break;

            //Perempuan Cumlaude (IPK diatas 3,5 dan semester memenuhi) (Kursi banjar 2 dan 3 Cumlaude)
            }else if(info(w).gender == "Perempuan" && info(w).ipk> 3.5 && info(w).semester <= 8 && info(w).sakit == "Tidak" && info(s).khusus == "Perempuan" && info(s).jenis=="Cumlaude"){
                if (info(w).nim%2!=0 && info(s).banjar==3){
                    child(w)=s;
                    break;
                }else if (info(w).nim%2==0 && info(s).banjar==2){
                    child(w)=s;
                    break;
                }

            //Perempuan Tanpa Predikat (IPK diatas 3,5 dan semester tidak memenuhi) (Kursi banjar 1 dan 2 Tanpa Predikat)
            }else if(info(w).gender == "Perempuan" && info(w).ipk > 3.5 && info(w).semester > 8 && info(w).sakit == "Tidak"&& info(s).khusus == "Perempuan" && info(s).jenis=="Tanpa_Predikat"){
                if (info(w).nim%2!=0 && info(s).banjar==1){
                    child(w)=s;
                    break;
                }else if (info(w).nim%2==0 && info(s).banjar==2){
                    child(w)=s;
                }

            //Laki-Laki Cumlaude (IPK diatas 3,5 dan semester memenuhi) (Kursi banjar 4 dan 5 Cumlaude)
            }else if(info(w).gender == "Laki-Laki" && info(w).ipk > 3.5 && info(w).semester <= 8 && info(w).sakit == "Tidak"&&info(s).khusus == "Laki-Laki" && info(s).jenis=="Cumlaude"){
                if (info(w).nim%2!=0 && info(s).banjar==5){
                    child(w)=s;
                    break;
                }else if (info(w).nim%2==0 && info(s).banjar==4){
                    child(w)=s;
                    break;
                }

            //Laki-Laki Tanpa Predikat (IPK diatas 3,5 dan semester tidak memenuhi) (Kursi banjar 3 dan 4 Tanpa Predikat)
            }else if(info(w).gender == "Laki-Laki" && info(w).ipk> 3.5 && info(w).semester > 8 && info(w).sakit == "Tidak"&& info(s).khusus == "Laki-Laki" && info(s).jenis=="Tanpa_Predikat"){
                if (info(w).nim%2!=0 && info(s).banjar==3){
                    child(w)=s;
                    break;
                }else if (info(w).nim%2==0 && info(s).banjar==4){
                    child(w)=s;
                    break;
                }

            //Perempuan Tanpa Predikat (IPK 3,5 atau dibawahnya) (Kursi banjar 1 dan 2 Tanpa Predikat)
            }else if(info(w).gender == "Perempuan" && info(w).ipk<= 3.5 && info(w).sakit == "Tidak"&& info(s).khusus == "Perempuan" && info(s).jenis=="Tanpa_Predikat"){
                if (info(w).nim%2!=0 && info(s).banjar==1){
                    child(w)=s;
                    break;
                }else if (info(w).nim%2==0 && info(s).banjar==2){
                    child(w)=s;
                    break;
                }

            //Laki-Laki Tanpa Predikat (IPK 3,5 atau dibawahnya) (Kursi banjar 3 dan 4 Tanpa Predikat)
            }else if(info(w).gender == "Laki-Laki" && info(w).ipk<= 3.5 && info(w).sakit == "Tidak"&& info(s).khusus == "Laki-Laki" && info(s).jenis=="Tanpa_Predikat"){
                if (info(w).nim%2!=0 && info(s).banjar==3){
                    child(w)=s;
                    break;
                }else if (info(w).nim%2==0 && info(s).banjar==4){
                    child(w)=s;
                    break;
                }

            //Sakit Tanpa Predikat (IPK 3,5 atau dibawahnya) (Kursi banjar 5 Tanpa Predikat)
            }else if(info(w).sakit == "Ya" && info(w).ipk <= 3.5 && info(w).sakit == "Ya"&& info(s).khusus == "Sakit" && info(s).jenis == "Tanpa_Predikat" && info(s).banjar==5){
                child(w) = s;
                break;
            }
            s = next(s);
        }
        w = next(w);
    }
}

void showDenahPerBanjarC(listWan W, int j){
    adrWan w = first(W);
    int i = 0;
    while (w != nil){
        adrSi s = child(w);
        if(info(s).banjar==j && info(s).jenis=="Cumlaude"){
            i = i + 1;
            cout << "\t"<< "/ "<< "==================================" << " \\"<<endl;
            cout << "\t"<<"\t       "<<info(s).jenis<<endl;
            cout << "\t"<< endl;
            cout << "\t"<<"   Nama : "<<info(w).nama<<endl;
            cout << "\t"<<"   NIM  : "<<info(w).nim<<endl;
            cout << "\t"<< endl;
            cout << "\t"<<"   < Kursi Banjar > < Kursi Baris >"<<endl;
            cout << "\t"<<"\t <"<< info(s).banjar << ">\t\t  <"<< i << ">"<<endl;
            cout << "\t"<< "\\ "<<"==================================" << " /"<<endl;
            cout<<endl;
        }
        w = next(w);
    }
}
void showDenahPerBanjarTP(listWan W, int j){
    adrWan w = first(W);
    int i = 0;
    while (w != nil){
        adrSi s = child(w);
        if(info(s).banjar==j && info(s).jenis=="Tanpa_Predikat"){
            i = i + 1;
            cout << "\t\t\t\t\t\t\t"<<"/ "<< "==================================" << " \\"<<endl;
            cout << "\t\t\t\t\t\t\t"<<"\t    "<<info(s).jenis<<endl;
            cout << "\t\t\t\t\t\t\t"<< endl;
            cout << "\t\t\t\t\t\t\t"<<"   Nama : "<<info(w).nama<<endl;
            cout << "\t\t\t\t\t\t\t"<<"   NIM  : "<<info(w).nim<<endl;
            cout << "\t\t\t\t\t\t\t"<< endl;
            cout << "\t\t\t\t\t\t\t"<<"   < Kursi Banjar > < Kursi Baris >"<<endl;
            cout << "\t\t\t\t\t\t\t"<<"\t <"<< info(s).banjar << ">\t\t  <"<< i<< ">"<<endl;
            cout << "\t\t\t\t\t\t\t"<< "\\ "<<"==================================" << " /"<<endl;
            cout<<endl;
        }
        w = next(w);
    }
}

void showSatuLokasiKursi(listWan W, string nama, int nim){
    adrWan w = first(W);
    int i = 0;
    while (w != nil){
        adrSi s = child(w);
        if (info(w).nama==nama && info(w).nim==nim){
            i = i + 1;
            cout << "\t\t\t\t\t"<<"/ "<< "==================================" << " \\"<<endl;
            cout << "\t\t\t\t\t"<<"\t       "<<info(s).jenis<<endl;
            cout << "\t\t\t\t\t"<< endl;
            cout << "\t\t\t\t\t"<<"   Nama : "<<info(w).nama<<endl;
            cout << "\t\t\t\t\t"<<"   NIM  : "<<info(w).nim<<endl;
            cout << "\t\t\t\t\t"<< endl;
            cout << "\t\t\t\t\t"<<"   < Kursi Banjar > < Kursi Baris >"<<endl;
            cout << "\t\t\t\t\t"<<"\t <"<< info(s).banjar << ">\t\t  <"<< i << ">"<<endl;
            cout << "\t\t\t\t\t"<< "\\ "<<"==================================" << " /"<<endl;
            cout<<endl;
        }
        w = next(w);
    }
}

void showDenahKeseluruhan(listWan W){
    for(int i = 1;i<=10;i++){
        showDenahPerBanjarC(W,i);
    }
    for(int i = 1;i<=10;i++){
        showDenahPerBanjarTP(W,i);
    }
}

void hapusDataWisudawan(listWan &W, string nama, int nim){
    adrWan w= first(W);
    adrWan Ww = nil;
    while(w != nil && (info(w).nama != nama || info(w).nim != nim)){
        Ww = w;
        w = next(w);
    }
    if(w == nil) return;
    if(Ww == nil){
        first(W)= next(first(W));
    }else{
        next(Ww) = next(w);
    }
    w = nil;
}

void hapusKursiWisudawan(listSi &S, int banjar, string jenis){
    adrSi s= first(S);
    adrSi Ss = nil;
    while(s != nil && (info(s).banjar != banjar || info(s).jenis != jenis)){
        Ss = s;
        s = next(s);
    }
    if(s == nil) return;
    if(Ss == nil){
        first(S)= next(first(S));
    }else{
        next(Ss) = next(s);
    }
    s = nil;
}
