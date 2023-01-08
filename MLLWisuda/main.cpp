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

    s.jenis = "Tanpa_Predikat";
    s.banjar = 1;
    s.khusus = "Perempuan";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Tanpa_Predikat";
    s.banjar = 2;
    s.khusus = "Perempuan";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Tanpa_Predikat";
    s.banjar = 3;
    s.khusus = "Laki-Laki";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Tanpa_Predikat";
    s.banjar = 4;
    s.khusus = "Laki-Laki";
    insertLastSi(S, newElemenKursiWisuda(s));

    s.jenis = "Tanpa_Predikat";
    s.banjar = 5;
    s.khusus = "Sakit";
    insertLastSi(S, newElemenKursiWisuda(s));

    w.nama = "Rudi_Tabuti";
    w.gender = "Laki-Laki";
    w.nim = 1302213141;
    w.ipk = 3.4;
    w.semester = 8;
    w.sakit = "Tidak";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    w.nama = "Fina_Hari";
    w.gender = "Perempuan";
    w.nim = 1302213147;
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
    w.nim = 1302213149;
    w.ipk = 3.8;
    w.semester = 8;
    w.sakit = "Tidak";
    Ww = newElemenWisudawan(w);
    insertLastWan(W, Ww);
    autoKursi(S, Ww);

    int a, nim, sem, banjar;
    float ipk;
    string nama, sakit, jenis;
    cout << endl;
    cout << "\t\t\t\t\t\t==== Selamat Datang ====" << endl;
    while(true){
        cout << "\t\t\t\t\t      Penetapan Kursi Wisuda S1 RPL" << endl;
        cout << endl;
        cout << "\t   < Halo Calon Sarjana, silahkan isi data diri Mahasiswa Kamu untuk mengetahui lokasi duduk Kamu >" << endl;
        cout << endl;
        cout << "\t\t\t\t\tMenu untuk Wisudawan" << endl;
        cout << "\t\t\t\t\t1. Isi Data Diri Mahasiswa" << endl;
        cout << "\t\t\t\t\t2. Lihat Lagi Lokasi Duduk Kamu" << endl;
        cout << "\t\t\t\t\t3. Lihat Denah Kursi" << endl;
        cout << "\t\t\t\t\t4. Lihat Denah Kursi Seluruh Mahasiswa S1 RPL" << endl;
        cout << "\t\t\t\t\t5. Keluar" << endl;
        cout << endl;
        cout << "\t\t\t\t\tCatatan :" << endl;
        cout << "\t\t\t\t\tProgram awalnya harus dioperasikan oleh Admin, karena banjaran kursi harus dibuat terlebih dahulu" << endl;
        cout << "\t\t\t\t\tAdmin bisa pakai Menu Wisudawam" << endl;
        cout << endl;
        cout << "\t\t\t\t\tMenu untuk Admin" << endl;
        cout << "\t\t\t\t\t99. Tampilkan Data Wisudawan Dummy" << endl;
        cout << "\t\t\t\t\t88. Hapus Wisudawan Terdaftar" << endl;
        cout << "\t\t\t\t\t77. Buat Banjar Kursi (Auto/Manual)" << endl;
        cout << "\t\t\t\t\t66. Hapus Banjar Kursi (Semua/Sesuai Keinginan)" << endl;
        cout << "\t\t\t\t\t55. Keluar" << endl;
        cout << endl;
        cout << "\t\t\t\t       Halo Calon Sarjana, ada yang bisa Saya bantu? ";
        cin >> a;

        if (a==1){
            while(true){
                cout<<"\n\n\n\n\n\n\n"<<endl;
                cout << "\t\t\t\t\tPENETAPAN OTOMATIS LOKASI DUDUK WISUDAWAN" << endl;
                cout << "\t\t\t   < Penetapan Diatur Sesuai Data Diri dan Hasil Prestasi Mahasiswa >" << endl;
                cout << endl;
                cout << "\t\t\t   Aturan : " << endl;
                cout << "\t\t\t   Spasi ganti dengan UNDERSCORE" << endl;
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
                cout<<endl;
                cout<<"\t\t\t\t\t     Daftar Lagi (o) / Tutup Menu (x)" << endl;
                cout << "\t\t\t\t\t\t\t   ";
                string b;
                cin >> b;
                if (b == "o"){
                    true;
                }else if(b == "x"){
                    break;
                }
            }
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
        }else if(a == 99){
            showWisudawanDummy(W);
        }else if(a == 88){
            while(true){
                string b;
                cout<<"\n\n\n\n\n\n\n"<<endl;
                cout << "\t\t\t\t\t     < HAPUS WISUDAWAN TERDAFTAR >" << endl;
                cout << endl;
                cout << "\t\t\t\t\t\tNama : ";
                cin >> nama;
                cout << "\t\t\t\t\t\tNIM  : ";
                cin >> nim;
                w.nama = nama;
                w.nim = nim;
                cout <<endl;
                hapusDataWisudawan(W, nama, nim);
                cout<<"\t\t\t\t\t     Hapus Lagi (o) / Tutup Menu (x)" << endl;
                cout << "\t\t\t\t\t\t\t   ";
                cin >> b;
                cout<<"\n\n\n\n\n\n\n"<<endl;
                if (b == "o"){
                    true;
                }else if(b == "x"){
                    break;
                }
            }
        }else if(a==77){
            cout<<"\n\n\n\n\n\n\n"<<endl;
            cout << "\t\t\t\t\t     < BUAT BANJAR KURSI >" << endl;
            cout << "\t\t\t\t\ta. Buat Jumlah Banjar Kursi Secara Auto (dengan ketentuan umum)" << endl;
            cout << "\t\t\t\t\tb. Buat Jumlah Banjar Kursi Secara Manual" << endl;
            cout << "\t\t\t\t\t\t     Pilihan : ";
            string bk;
            cin >> bk;
            if (bk == "a"){
                cout << endl;
                cout << "\t\t\t\t\t< Buat Jumlah Banjar Kursi Secara Umum >" <<endl;
                cout << "\t\t\t\t\t     Aturan Jumlah Banjar : 5 atau 10" <<endl;
                cout << "\t\t\t\t\t\t     Berapa : ";
                int tb;
                cin >> tb;
                if (tb == 10){
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
                    s.khusus = "Perempuan";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Cumlaude";
                    s.banjar = 5;
                    s.khusus = "Perempuan";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Cumlaude";
                    s.banjar = 6;
                    s.khusus = "Laki-Laki";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Cumlaude";
                    s.banjar = 7;
                    s.khusus = "Laki-Laki";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Cumlaude";
                    s.banjar = 8;
                    s.khusus = "Laki-Laki";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Cumlaude";
                    s.banjar = 9;
                    s.khusus = "Laki-Laki";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Cumlaude";
                    s.banjar = 10;
                    s.khusus = "Laki-Laki";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 1;
                    s.khusus = "Perempuan";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 2;
                    s.khusus = "Perempuan";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 3;
                    s.khusus = "Perempuan";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 4;
                    s.khusus = "Perempuan";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 5;
                    s.khusus = "Laki-Laki";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 6;
                    s.khusus = "Laki-Laki";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 7;
                    s.khusus = "Laki-Laki";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 8;
                    s.khusus = "Laki-Laki";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 9;
                    s.khusus = "Laki-Laki";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 10;
                    s.khusus = "Sakit";
                    insertLastSi(S, newElemenKursiWisuda(s));
                }else if(tb == 5){
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

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 1;
                    s.khusus = "Perempuan";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 2;
                    s.khusus = "Perempuan";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 3;
                    s.khusus = "Laki-Laki";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 4;
                    s.khusus = "Laki-Laki";
                    insertLastSi(S, newElemenKursiWisuda(s));

                    s.jenis = "Tanpa_Predikat";
                    s.banjar = 5;
                    s.khusus = "Sakit";
                    insertLastSi(S, newElemenKursiWisuda(s));
                }
            }else if(bk == "b"){
                cout<<"\n\n\n\n\n\n\n"<<endl;
                cout << "\t\t\t\t\t     < Buat Jumlah Banjar Kursi Secara Manual >" <<endl;
                cout << endl;
                cout << "\t\tAturan : " << endl;
                cout << "\t\tJenis Kursi hanya ada 2 macam yaitu Cumlaude (Kelompok Kiri dari Panggung) dan Tanpa_Predikat (Kelompok Kiri dari Panggung) " << endl;
                cout << "\t\tKekhusussan Kursi hanya ada 3 macam yaitu Sakit, Perempuan, dan Laki-Laki" << endl;
                cout << "\t\tBanjar sakit hanya untuk dibagian banjar paling kiri dan paling kanan" << endl;
                cout << "\t\tTanpa_Predikat pakai UNDERSCORE" << endl;
                cout << "\t\tMasukkan jumlah banjar kursi yang ingin dibuat : ";
                int jk;
                cin >> jk;
                cout << endl;
                for (int i = 1; i <= jk;i++){
                    string jenis, khusus;
                    int banjar;
                    cout << "\t\tJenis  : ";
                    cin>> jenis;
                    cout << "\t\tBanjar : ";
                    cin>> banjar;
                    cout << "\t\tKhusus : ";
                    cin>> khusus;
                    cout << endl;
                    s.jenis = jenis;
                    s.banjar = banjar;
                    s.khusus = khusus;
                    insertLastSi(S, newElemenKursiWisuda(s));
                }
            }
        }else if(a == 66){
            cout<<"\n\n\n\n\n\n\n"<<endl;
            cout << "\t\t\t\t\t     < HAPUS BANJAR KURSI >" << endl;
            string bj;
            cout << "\t\t\t\t\ta. Hapus semua banjar Kursi" << endl;
            cout << "\t\t\t\t\tb. Hapus banjar Kursi Sesuai Keinginan" << endl;
            cout << "\t\t\t\t\t\t     Pilihan : ";
            cin >> bj;
            if (bj == "a"){
                first(S) = nil;
            }else if (bj=="b"){
                while(true){
                    string b;
                    int N;
                    cout<<endl;
                    cout << "\t\t\t\t\tBerapa banjar kursi yang ingin dihapus : ";
                    cin >> N;
                    for (int i = 1; i <= N; i++){
                        cout << "\t\t\t\t\t     < HAPUS BANJAR KURSI >" << endl;
                        cout << endl;
                        cout << "\t\t\t\t\t\tBanjar : ";
                        cin >> banjar;
                        cout << "\t\t\t\t\t\tJenis  : ";
                        cin >> jenis;
                        s.banjar = banjar;
                        s.jenis = jenis;
                        cout <<endl;
                        hapusKursiWisudawan(S, banjar, jenis);
                    }
                    cout<<"\t\t\t\t\t     Cari Lagi (o) / Tutup Menu (x)" << endl;
                    cout << "\t\t\t\t\t\t\t   ";
                    cin >> b;
                    if (b == "o"){
                        true;
                    }else if(b == "x"){
                        break;
                    }
                }
            }
        }else if(a == 55){
            break;
        }
    }
}
