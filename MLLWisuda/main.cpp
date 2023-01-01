#include "wisuda.h"
int main()
{
    listWan W;
    listSi S;
    adrWan Ww;
    wisudawan w;
    kursiWisuda s;

    createListWisudawan(W);
    createListKursiWisuda(S);

    s.jenis = "Cumlaude";
    s.banjar = 1;
    s.khusus = "Sakit";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Cumlaude";
    s.banjar = 2;
    s.khusus = "Perempuan";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Cumlaude";
    s.banjar = 3;
    s.khusus = "Perempuan";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Cumlaude";
    s.banjar = 4;
    s.khusus = "Laki-Laki";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Cumlaude";
    s.banjar = 5;
    s.khusus = "Laki-Laki";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Tanpa Predikat";
    s.banjar = 1;
    s.khusus = "Perempuan";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Tanpa Predikat";
    s.banjar = 2;
    s.khusus = "Perempuan";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Tanpa Predikat";
    s.banjar = 3;
    s.khusus = "Laki-Laki";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Tanpa Predikat";
    s.banjar = 4;
    s.khusus = "Laki-Laki";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Tanpa Predikat";
    s.banjar = 5;
    s.khusus = "Sakit";
    insertLastSi(S, newElemenKursiWisuda(s));

    w.nama = "Rudi Tabuti";
    w.gender = "Laki-Laki";
    w.nim = 1302213141;
    w.ipk = 3.4;
    w.semester = 8;
    w.sakit = "Tidak";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    w.nama = "Fina Hari";
    w.gender = "Perempuan";
    w.nim = 1302213141;
    w.ipk = 3.7;
    w.semester = 9;
    w.sakit = "Tidak";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    w.nama = "Salsabillah_Febridha";
    w.gender = "Perempuan";
    w.nim = 1302213120;
    w.ipk = 3.9;
    w.semester = 7;
    w.sakit = "Ya";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    w.nama = "Surti_Sulianti";
    w.gender = "Perempuan";
    w.nim = 1302213130;
    w.ipk = 3.6;
    w.semester = 7;
    w.sakit = "Tidak";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    w.nama = "Gusti_Turu";
    w.gender = "Laki-Laki";
    w.nim = 1302213143;
    w.ipk = 3.4;
    w.semester = 7;
    w.sakit = "Tidak";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    w.nama = "Alda_Navia";
    w.gender = "Perempuan";
    w.nim = 1302213160;
    w.ipk = 3.9;
    w.semester = 7;
    w.sakit = "Tidak";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    w.nama = "Sursi_Gumelar";
    w.gender = "Perempuan";
    w.nim = 1302213176;
    w.ipk = 3.78;
    w.semester = 7;
    w.sakit = "Ya";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    w.nama = "Muhammad_Burhan";
    w.gender = "Laki-Laki";
    w.nim = 1302213140;
    w.ipk = 3.8;
    w.semester = 8;
    w.sakit = "Tidak";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    w.nama = "Irul_Rahman";
    w.gender = "Laki-Laki";
    w.nim = 1302213134;
    w.ipk = 3.5;
    w.semester = 8;
    w.sakit = "Tidak";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    w.nama = "Sulis_Yunia";
    w.gender = "Perempuan";
    w.nim = 1302213180;
    w.ipk = 3.87;
    w.semester = 7;
    w.sakit = "Ya";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    w.nama = "Budi_Kusuma";
    w.gender = "Laki-Laki";
    w.nim = 1302213141;
    w.ipk = 3.8;
    w.semester = 8;
    w.sakit = "Tidak";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    int a, nim, sem;
    float ipk;
    string nama, sakit;
    cout << endl;
    cout << "\t\t\t\t\t\t==== Selamat Datang ====" << endl;
    while(true){
        cout << "\t\t\t\t\t      Penetapan Kursi Wisuda S1 RPL" << endl;
        cout << endl;
        cout << "\t   < Halo Calon Sarjana, silahkan isi data diri Mahasiswa Kamu untuk mengetahui lokasi duduk Kamu >" << endl;
        cout << endl;
        cout << "\t\t\t\t\t1. Isi Data Diri Mahasiswa" << endl;
        cout << "\t\t\t\t\t2. Lihat Lagi Lokasi Duduk Kamu" << endl;
        cout << "\t\t\t\t\t3. Lihat Denah Kursi" << endl;
        cout << "\t\t\t\t\t4. Lihat Denah Kursi Seluruh Mahasiswa S1 RPL" << endl;
        cout << "\t\t\t\t\t5. Keluar" << endl;
        cout << endl;
        cout << "\t\t\t\t       Halo Calon Sarjana, ada yang bisa Saya bantu? ";
        cin >> a;

        if (a==1){
            cout<<"\n\n\n\n\n\n\n"<<endl;
            cout << "\t\t\t\t\tPENETAPAN OTOMATIS LOKASI DUDUK WISUDAWAN" << endl;
            cout << "\t\t\t   < Penetapan Diatur Sesuai Data Diri dan Hasil Prestasi Mahasiswa >" << endl;
            cout << endl;
            cout << "\t\t\t\t\t\tNama                : ";
            cin >> nama;
            cout << "\t\t\t\t\t\tJenis Kelamin (L/P) : ";
            string gen;
            cin >> gen;
            if (gen == "L"){
                w.gender = "Laki-Laki";
            }else if (gen == "P"){
                w.gender = "Perempuan";
            }
            cout << "\t\t\t\t\t\tNIM                 : ";
            cin >> nim;
            cout << "\t\t\t\t\t\tIPK                 : ";
            cin >> ipk;
            cout << "\t\t\t\t\t\tSemester            : ";
            cin >> sem;
            cout << "\t\t\t\t\t\tSakit (Ya/Tidak)    : ";
            cin >> sakit;
            w.nama = nama;
            w.nim = nim;
            w.ipk = ipk;
            w.semester = sem;
            w.sakit = sakit;
            Ww = newElemenWisudawan(w);
            insertLastWan(W, Ww);
            autoKursi(S, Ww);
            cout <<endl;
            showSatuLokasiKursi(W, nama, nim);
            cout<<"\n\n\n\n\n\n\n"<<endl;
        }else if(a==2){
            while(true){
                string b;
                cout<<"\n\n\n\n\n\n\n"<<endl;
                cout << "\t\t\t\t\t     < LIHAT LOKASI DUDUK WISUDAWAN >" << endl;
                cout << endl;
                cout << "\t\t\t\t\t\tNama : ";
                cin >> nama;
                cout << "\t\t\t\t\t\tNIM  : ";
                cin >> nim;
                w.nama = nama;
                w.nim = nim;
                cout <<endl;
                showSatuLokasiKursi(W, nama, nim);
                cout<<"\t\t\t\t\t     Cari Lagi (o) / Tutup Menu (x)" << endl;
                cout << "\t\t\t\t\t\t\t   ";
                cin >> b;
                if (b == "o"){
                    true;
                }else if(b == "x"){
                    break;
                }
            }
            cout<<"\n\n\n\n\n\n"<<endl;
        }else if (a==3){
            cout<<"\n\n\n\n\n\n\n"<<endl;
            showKursiWisuda(S);
            cout<<"\n\n\n\n\n\n\n"<<endl;
        }else if(a==4){
            cout<<"\n\n\n\n\n\n\n"<<endl;
            showDenahKeseluruhan(W);
            cout<<"\n\n\n\n\n\n\n"<<endl;
        }else if(a == 5){
            break;
        }
    }
}
