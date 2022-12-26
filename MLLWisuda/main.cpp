#include "wisuda.h"
int main()
{
    listWan W;
    listSi S;
    wisudawan w;
    kursiWisuda s;

    createListWisudawan(W);
    createListKursiWisuda(S);

    for (int i = 1; i <= 20;i++){
        s.jenis = "Cumlaude";
        if (i == 1){
            s.banjar = i;
            s.khusus = "Sakit";
            insertLastSi(S, newElemenKursiWisuda(s));
        }else if (i == 2){
            while (i <= 6){
                s.banjar = i;
                s.khusus = "Perempuan";
                i = i + 1;
                insertLastSi(S, newElemenKursiWisuda(s));
                if(i==6){
                    while (i <= 10){
                        s.banjar = i;
                        s.khusus = "Laki-Laki";
                        i = i + 1;
                        insertLastSi(S, newElemenKursiWisuda(s));
                    }
                }
            }
        }
    }

    for (int i = 11; i <= 20;i++){
        s.jenis = "Tanpa Predikat";
        if (i == 11){
            while (i <= 14){
                s.banjar = i;
                s.khusus = "Perempuan";
                i = i + 1;
                insertLastSi(S, newElemenKursiWisuda(s));
                if (i == 14){
                    while (i <= 19){
                        s.banjar = i;
                        s.khusus = "Laki-Laki";
                        i = i + 1;
                        insertLastSi(S, newElemenKursiWisuda(s));
                        if (i == 20){
                            s.banjar = i;
                            s.khusus = "Sakit";
                            insertLastSi(S, newElemenKursiWisuda(s));
                        }
                    }
                }
            }
        }
    }

    /*
    cout << endl;
    cout << "\t\t\t\t\t\t==== Selamat Datang ====" << endl;
    cout << "\t\t\t\t\t      Penetapan Kursi Wisuda S1 RPL" << endl;
    cout << "\t\t\t\t\t     Silahkan Isi Data Calon Sarjana" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\tNama                : ";
    cin >> w.nama;
    cout << "\t\t\t\t\t\tJenis Kelamin (L/P) : ";
    string gen;
    cin >> gen;
    if (gen == "L"){
        w.gender = "Laki-Laki";
    }else if (gen == "P"){
        w.gender = "Perempuan";
    }
    cout << "\t\t\t\t\t\tNIM                 : ";
    cin >> w.nim;
    cout << "\t\t\t\t\t\tIPK                 : ";
    cin >> w.ipk;
    cout << "\t\t\t\t\t\tSakit (Ya/Tidak)    : ";
    cin >> w.sakit;
    */

    w.nama = "Burhan";
    w.gender = "Laki-Laki";
    w.nim = "1302213109";
    w.ipk = 3.8;
    w.sakit = "Tidak";
    insertLastWan(W, newElemenWisudawan(w));

    w.nama = "Salma";
    w.gender = "Perempuan";
    w.nim = "1302213111";
    w.ipk = 3.7;
    w.sakit = "Tidak";
    insertLastWan(W, newElemenWisudawan(w));

    w.nama = "Salsa";
    w.gender = "Perempuan";
    w.nim = "1302213120";
    w.ipk = 3.9;
    w.sakit = "Ya";
    insertLastWan(W, newElemenWisudawan(w));

    w.nama = "Ryan";
    w.gender = "Laki-Laki";
    w.nim = "1302213178";
    w.ipk = 3.6;
    w.sakit = "Tidak";
    insertLastWan(W, newElemenWisudawan(w));

    showWisudawan(W);
    showKursiWisuda(S);
}
