///////////////////////////////////////////////////////////////////////////////////////
/////                                                                               ///
/////                                                                               ///
/////                           PROJEK PELATIHAN BAHASA C                           ///
/////                        PENILAIAN UJIAN AKHIR SEMESTER                         ///
/////                                                                               ///
/////                      NAMA : VIRA NARULLITA                                    ///
/////                      ANGKATAN : 22                                            ///
/////                      PRODI : D3 MANAJEMEN INFORMATIKA                         ///
/////                                                                               ///
/////                   WINDOWS SIZE :                                              ///
/////                                 WEIGHT : 120                                  ///   
/////                                 HIGHT  : 30                                   ///
/////                                                                               ///
/////                                                                               ///
///////////////////////////////////////////////////////////////////////////////////////



// ======================================== LIBRARY ==========================================================================//
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>
#include "warna.c"
#include "validasi.c"
// ======================================== PROTOTYPE =============================================================================//
void awal();
void bingkai_besar();
void vilaundry();
void gambar_pakaian();
void teks_menu();
void login();
void teks_login();
void daftar();
void teks_makasih();
void menu();
void pelayanan();
void kiloan();
void biodata_kilostandar();
void biodata_kiloexpres();
void biodata_satuan_stand();
void biodata_satuan_express();
void kiloan_standar();
void kiloan_express();
void daftar_barang_kilo();
void satuan();                      
void satuan_standar();
void satuan_express();
void info();
void teks_info();
void layanan_tambahan_stankilo();
void layanan_tambahan_exkilo();
void layanan_tambahan_standar_satuan();
void layanan_tambahan_ex_satuan();
void struk_kilo();
void struk_satuan_standar();
void struk_satuan_express();
void history();
void bayar();
void editbiodata();
void tampilkilo();
void tampilsatuanex();
void tampilsatuanstan();
void hapuskilo(int panjang);
void hapussatuanstan(int panjang);
void hapussatuanex(int panjang);
// ====================================== VARIABLE GLOBAL ============================================================================//
char tam_nama[50][50];
char tam_alamat[50][50];
char tam_jenis_kelamin[50][50];
char tam_nohp[50][50];
char user[10];
char tampuser[100][25];
char pass[10];
char alamat[100];
char nama[50];
char jenis_kelamin[2];
char nohp[13];
char pilih;
char pilih2[50];
char pilih3[50];
char pilihitem[50];
char pilihkilo[50];
char pilih_lagi[10];
char jumlah[100][10];
char input;
char harga[100];
char daftar_kilo[4][100]={"Baju","Celana","Kerudung","Rok",};
char daftar_satuan[21][100]={"Handuk kecil","Handuk sedang","Handuk besar","Sprei kecil","Sprei sedang","Sprei besar","Selimut tipis","Selimut sedang","Selimut tebal","Sarung bantal/guling",
                            "bantal/guling","Jas/blazer","Tas kecil","Tas sedang","Tas besar","Boneka kecil","Boneka sedang","Boneka besar","Topi","Jaket","Sweater"};
bool ex = false;
int harga_satuan[100]={5000, 8000, 10000, 10000, 12000, 15000, 10000, 15000, 18000, 1000, 15000, 15000, 10000, 15000, 18000, 6000, 8000, 16000, 7000, 15000, 12000};
int harga_satuan_express=5000;
int harga_kilo[2]={7000, 9000};
int harga_kilo_express=5000;
int index_menu=0;
int jumlah_kilo;
int jumlah_item;
int ongkir=0;
int total_semua;
int lagi;
int jml=0;
int tamp_baru[100];
int tamp_harga[100];
//================================================= BINGKAI =======================================================///
void bingkai_besar(){
    color(15, 3);
    for(int i=0;i<=28;i++){
        for(int j=0;j<=118;j++){
            if(i==0 || i==28 || j==0 || j==118){
                printf("%c",219);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

void bingkai(int x,int y,int panjang,int lebar,int text,int background){
    for(int i = 0; i <= panjang; i++){
        for(int j = 0; j <= lebar; j++){
            if(i == 0 || j == 0 || i == panjang || j == lebar){
                kursor(x+i,y+j);color(text,text);printf("%c",219);
            }
            else{
                kursor(x+i,y+j);color(background,background);printf(" ");
            }
        }
    }
}

void bingkai_barang(){
    bingkai(0,0,118,28,15,15);
    bingkai(9,2,43,13,15,3); //kiri
    bingkai(60,2,43,13,15,3); //kanan
}

//=========================================== GAMBAR & TULISAN ====================================================//
void teks_pelayanan(){
kursor(8, 3);printf("    ___    ___     _        ___   __   __   ___     _  _     ___     _  _  ");
kursor(8, 4);printf("   | _ \\  | __|   | |      /   \\  \\ \\ / /  /    \\  | \\| |   /   \\   | \\| | ");
kursor(8, 5);printf("   |  _/  | _|    | |__    | - |   \\ V /   | - |   | .` |   | - |   | .` | ");
kursor(8, 6);printf("  _|_|_   |___|   |____|   |_|_|   _|_|_   |_|_|   |_|\\_|   |_|_|   |_|\\_| ");
kursor(8, 7);printf("_| ... |_|.....|_|......|_|.....|_|.....|_|.....|_|......|_|.....|_|......| ");
kursor(8, 8);printf("'`-0-0-''`-0-0-'' `-0-0-''`-0-0-''`-0-0-''`-0-0-'' `-0-0-''`-0-0-'' `-0-0-' ");
kursor(15, 9);printf("Berikut adalah daftar pelayanan kami");
}

void teks_makasih(){
    system("cls");
    bingkai_besar();
    Sleep(100);kursor(10,12);color(5, 3);printf(" TTTTTTTT  EEEEEEE  RRRRRRR   II MMMM   MMMM     AAAA     KK   KK     AAAA     SSSSSSS II HH    HH      ");
    Sleep(105);kursor(10,13);color(5, 3);printf("    TT     EE       RR    RR  II MM  MMM  MM    AA  AA    KK  KK     AA  AA    S       II HH    HH       ");
    Sleep(110);kursor(10,14);color(5, 3);printf("    TT     EEEEEEE  RRRRRRR   II MM       MM   AAAAAAAA   KKKK      AAAAAAAA   SSSSSSS II HHHHHHHH       ");
    Sleep(115);kursor(10,15);color(1, 3);printf("    TT     EE       RR   RR   II MM       MM  AA      AA  KK  KK   AA      AA        S II HH    HH       ");
    Sleep(120);kursor(10,16);color(1, 3);printf("    TT     EEEEEEE  RR     RR II MM       MM AA        AA KK   KK AA        AA SSSSSSS II HH    HH       ");
    exit(0);
}  

void teks_menu(){
    kursor(35, 2);   printf(" ____    ____  ________  ____  _____  _____  _____ ");
    kursor(35, 3); printf("|_   \\  /   _||_   __  ||_   \\|_   _||_   _||_   _| ");
    kursor(35, 4); printf("  |   \\/   |    | |_ \\_|  |   \\ | |    | |    | |  ");
    kursor(35, 5); printf("  | |\\  /| |    |  _| _   | |\\ \\| |    | '    ' |  ");
    kursor(35, 6); printf(" _| |_\\/_| |_  _| |__/ | _| |_\\   |_    \\ \\__/ /  "); 
    kursor(35, 7); printf("|_____||_____||________||_____|\\____|    `.__.'  ");  

}

void teks_login(){
    kursor(40, 4);     printf(".____                 .__        \n");
    kursor(40, 5); printf("|    |    ____   ____ |__| ____  \n");
    kursor(40, 6); printf("|    |   /  _ \\ / ___\\|  |/    \\ \n");
    kursor(40, 7); printf("|    |__(  <_> ) /_/  >  |   |  \\\n");
    kursor(40, 8); printf("|_______ \\____/\\___  /|__|___|  /\n");
    kursor(40, 9); printf("        \\/    /_____/         \\/ \n");
}

void teks_daftar(){
    kursor(42,2);printf("______  ___  ______ _____ ___  ______"); 
    kursor(42,3);printf("|  _  \\/ _ \\ |  ___|_   _/ _ \\ | ___ \\ "); 
    kursor(42,4);printf("| | | / /_\\ \\| |_    | |/ /_\\ \\| |_/ / "); 
    kursor(42,5);printf("| | | |  _  ||  _|   | ||  _  ||    / "); 
    kursor(42,6);printf("| |/ /| | | || |     | || | | || |\\ \\ "); 
    kursor(42,7);printf("|___/ \\_| |_/\\_|     \\_/\\_| |_/\\_| \\_|"); 
}

void teks_info(){
    color(5, 15);
    kursor(35,3);printf(" _        __                               _ "); 
    kursor(35,4);printf("(_)      / _|                             (_) ");
    kursor(35,5);printf(" _ _ __ | |_ ___  _ __ _ __ ___   __ _ ___ _  ");
    kursor(35,6);printf("| | '_ \\|  _/ _ \\| '__| '_ ` _ \\ / _` / __| | ");
    kursor(35,7);printf("| | | | | || (_) | |  | | | | | | (_| \\__ \\ | ");
    kursor(35,8);printf("|_|_| |_|_| \\___/|_|  |_| |_| |_|\\__,_|___/_| ");
}

void gambar_pakaian(){
    kursor(2, 2); printf("  !=======!====================================== HELLO WELCOME TO =========================================!=====!");
    kursor(2, 3); printf("  |___ ___|");
    kursor(2, 4); printf(" /| |/|\\| |\\ ");
    kursor(2, 5); printf("/_|   |.` |_\\ ");
    kursor(2, 6); printf("  |   |.  | ");
    kursor(2, 7); printf("  |   |.  | ");
    kursor(2, 8); printf("  |___|.__| ");

    kursor(110, 3); printf("|==c==|");
    kursor(110, 4); printf("|_/|\\_|");
    kursor(110, 5); printf("|  |` |");
    kursor(110, 6); printf("|  |  |");
    kursor(110, 7); printf("|  |  |");
    kursor(110, 8); printf("|__|__|");
}

void gmbr_baju(){
    color(15,3);
    kursor(3,2); printf("  .--=   =--.");
    kursor(3,3); printf(" /    \\./    \\");
    kursor(3,4); printf("(__|   :   |__)");
    kursor(3,5); printf("   |   :   |");
    kursor(3,6); printf("   |   :   |");
    kursor(3,7); printf("   |___:___|");

    kursor(102,2); printf("  .--=   =--.");
    kursor(102,3); printf(" /    \\./    \\");
    kursor(102,4); printf("(__|   :   |__)");
    kursor(102,5); printf("   |   :   |");
    kursor(102,6); printf("   |   :   |");
    kursor(102,7); printf("   |___:___|");
}

void vilaundry(){   
    bingkai_besar();
    gambar_pakaian();
    color(15, 3);
    Sleep(100); kursor(23, 12);    printf(" %c%c    %c%c %c%c %c%c	      %c%c%c%c%c%c  %c%c   %c%c %c%c%c%c    %c%c %c%c%c%c%c%c  %c%c%c%c%c   %c%c    %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Sleep(110); kursor(23, 12+1);  printf(" %c%c    %c%c %c%c %c%c       %c%c	   %c%c %c%c   %c%c %c%c%c%c%c   %c%c %c%c   %c%c %c%c   %c%c  %c%c  %c%c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Sleep(120); kursor(23, 12+2);  printf(" %c%c    %c%c %c%c %c%c       %c%c%c%c%c%c%c%c %c%c   %c%c %c%c  %c%c  %c%c %c%c   %c%c %c%c%c%c%c%c    %c%c%c%c   ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Sleep(130); kursor(23, 12+3);  printf("  %c%c  %c%c  %c%c %c%c       %c%c	   %c%c %c%c   %c%c %c%c   %c%c %c%c %c%c   %c%c %c%c   %c%c    %c%c     ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    Sleep(140); kursor(23, 12+4);  printf("   %c%c%c%c   %c%c %c%c%c%c%c%c%c%c %c%c	   %c%c %c%c%c%c%c%c%c %c%c    %c%c%c%c %c%c%c%c%c%c  %c%c   %c%c    %c%c ",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);     
    color(7, 3);
    kursor(47, 19); printf("creator by Vira Narullita");
    color(5,15);
    kursor(45, 20); printf("Tekan [ENTER] untuk next =>> ");
    while((input = getch()) != 13){
    }
    awal();
}

void vilaundry2(){
    kursor(13,3); printf(" __   __   __     __         ______     __  __     __   __     _____     ______     __  __   ");
    kursor(13,3+1); printf("/\\ \\ / /  /\\ \\   /\\ \\       /\\  __ \\   /\\ \\/\\ \\   /\\ '-.\\ \\   /\\  __-.  /\\  == \\   /\\ \\_\\ \\  ");
    kursor(13,3+2); printf("\\ \\ \' /   \\ \\ \\  \\ \\ \\____  \\ \\  __ \\  \\ \\ \\_\\ \\  \\ \\ \\-.  \\  \\ \\ \\/\\ \\ \\ \\  __<   \\ \\____ \\ ");
    kursor(13,3+3); printf(" \\ \\__|    \\ \\_\\  \\ \\_____\\  \\ \\_\\ \\_\\  \\ \\_____\\  \\ \\_\\ '\\_\\  \\ \\____-  \\ \\_\\ \\_\\  \\/\\_____\\ ");
    kursor(13,3+4); printf("  \\/_/      \\/_/   \\/_____/   \\/_/\\/_/   \\/_____/   \\/_/ \\/_/   \\/____/   \\/_/ /_/   \\/_____/    ");
}

// ============================================================================================================================ //
void awal(){
    system("cls");
    bingkai(0,0,118,28,3,15);

    bingkai(3,1,112,9,15,9);
    color(15, 9);
    vilaundry2();

    bingkai(10, 12, 20, 4, 3, 15);
    kursor(12, 14);
    color(5, 15);
    printf("1. LOGIN");

    bingkai(36, 12, 20, 4, 3, 15);
    kursor(38, 14);
    color(5,15);
    printf("2. DAFTAR AKUN");

    bingkai(62, 12, 20, 4, 3, 15);
    kursor(64, 14);
    color(5,15);
    printf("3. INFO");

    bingkai(88, 12, 20, 4, 3, 15);
    kursor(90, 14);
    color(5,15);
    printf("4. KELUAR PROGRAM");

    bingkai(45, 18, 29, 8, 3, 15);
    bingkai(47, 20, 25, 4, 3, 15);
    kursor(49, 22);
    color(5,15);
    printf("PILIH : ");
    pilih = getche();
    if(pilih == '1'){
        login();
    }
    else if(pilih == '2'){
        daftar();
    }
    else if(pilih== '3'){
        info();
    }
    else if(pilih == '4'){
        teks_makasih();
    }
    else{
        kursor(47, 25);
        printf("INVALID ! Input angka 1-4");
        Sleep(1000);
        awal();
    }
}

void daftar(){
    system("cls");
    bingkai_besar();
    teks_daftar();

    bingkai(33, 9, 55, 15, 15, 3);
    kursor(37, 11);
    color(15, 3);
    printf("Nama\t\t: ");
    valNama(nama);
    kursor(37, 13);
    printf("Alamat\t\t: "); 
    valAlamat(alamat);
    kursor(37, 16);
    printf("Jenis Kelamin\t: ");
    valJenis_kelamin(jenis_kelamin);
    kursor(37, 18);
    printf("No Hp\t\t: +628"); 
    valNohp(nohp); 
    kursor(37, 20);
    printf("Username\t\t: ");
    valUser(user); 
    kursor(37, 22);
    printf("Password\t\t: "); 
    valPass(pass); 

    kursor(45, 26);
    printf("AKUN ANDA BERHASIL TERDAFTAR ");
    Sleep(2000);

    FILE *daftar;
    daftar = fopen("daftar.txt", "a");
    fprintf(daftar, "%s$%s$%s \n", nama, alamat, nohp);
    fclose(daftar);

    FILE *datauser;
    datauser = fopen("username.txt", "a");
    fprintf(datauser, "%s \n", user);
    fclose(datauser);

    FILE *datasandi;
    datasandi = fopen("password.txt", "a");
    fprintf(datasandi, "%s \n", pass);
    fclose(datasandi);

    login();
    kursor(55, 25);
    color(15, 3);
    
}

void login(){ 
    char user1[50][50],pass1[50][50];
    int idx=0,sign=-1;
    system("cls");
    bingkai_besar();
    teks_login();
    bingkai(37, 12, 40, 4, 15, 3);
    kursor(39, 14);
    color(15, 9);
    printf("username: "); 
    valUser(user); 
    bingkai(37, 19, 40, 4, 15, 3);
    kursor(39, 21);
    color(15, 9);
    printf("Password: "); 
    valPass(pass);
    
    FILE *datauser = fopen("username.txt", "r");
    while(fscanf(datauser, "%s\n",user1[idx])!=EOF){
        if(!(strcmp(user,user1[idx]))){
            sign=idx;
        }
        idx++;
    }
    fclose(datauser);
    idx=0;
    FILE *datasandi = fopen("password.txt", "r");
    while(fscanf(datasandi, "%s\n",&pass1[idx])!=EOF){
        
        idx++;
    }
    fclose(datasandi);
    if(!(strcmp(pass,pass1[sign]))){
        kursor(47, 25);
        printf("ANDA BERHASIL LOGIN");
        Sleep(1200);
        menu();
    }
    else{
        kursor(50, 25);
        printf("LOGIN GAGAL !");
        Sleep(1200);
        kursor(30, 25);
        printf("Tekan Y/y untuk Daftar akun, dan Tekan T/t untuk kembali Login");
        while((input = getch()) != 'Y' && input != 'y' && input != 't' && input != 'T'){

        } 
        if (input == 'y' || input == 'Y'){
        kursor(35,25);
        printf("                                                            ");
        daftar();
        }
        else{
        kursor(35,25);
        printf("                                                            ");
        login();
        }
    }
}

void info(){
    teks_info();
    char input;
    bingkai(0,0,118,28,3,15); //besar
    bingkai(0,0,118,10,3,15); //sedang
    bingkai(2,2,114,6,5,15); //kecil
    teks_info();
    color(3,15);
    kursor(12, 12);
    printf("Vilaundry adalah aplikasi yang memudahkan hidup anda dengan menyediakan layanan pencucian pakaian");
    kursor(12, 13);
    printf("Anda mager mencuci? atau tidak sempat mencuci?");
    kursor(12, 14);
    printf("Padahal cucian kotor sudah menumpuk");
    kursor(12, 15);
    printf("Dan stok baju bersih habis pas lagi butuh");
    kursor(12, 16);
    printf("Atau bingung nyari tempat laundry?");
    kursor(12, 17);
    printf("Tenang, masukkan sekarang cucian kotor mu ke Laundry kami");
    kursor(12, 18);
    printf("Tersedia layanan Laundry kiloan standar, express siap dalam 2 hari dan 2 hari");
    kursor(12, 19);
    printf("Tersedia layanan Laundry satuan standar, express siap dalam 2 hari dan 2 hari");
    kursor(12, 20);
    printf("Pakaian jadi bersih, rapih dan wangi");
    kursor(12, 21);
    printf("Datang sekarang juga ke Laundry kami");
    kursor(12, 22);
    printf("ALAMAT VILAUNDRY");
    kursor(12, 23);
    printf("Di Jalan Dakota No.8A, kelurahan Sukaraja, Kec. Cicendo, Kota Bandung");
    kursor(12, 24);
    printf("DATA PEMILIK LAUNDRY");
    kursor(12, 25);
    printf("Nama : Vira Narullita");
    kursor(55,27);color(15,5);printf("     <<-- TEKAN [esc] UNTUK KEMBALI KE MENU UTAMA");
    while((input = getch()) != 27){
    }
    awal();
}

void menu(){
    bingkai(0,0,118,28,3,15); //besar
    bingkai(0,0,118,9,3,15);
    color(5, 15);
    teks_menu();
    bingkai(47, 20, 25, 4, 3, 15);
    kursor(49, 22);
    color(5,15);
    bingkai(15, 12, 25, 4, 3, 15);
    kursor(17, 14);
    color(5, 15);
    printf("1. PELAYANAN");
    bingkai(79, 12, 25, 4, 3, 15);
    kursor(81, 14);
    color(5,15);
    printf("2. HISTORY");
    bingkai(0, 22, 7, 6, 3, 15);
    bingkai(1, 24, 4, 3, 5, 15); 
    bingkai(111, 22, 7, 6, 3, 15);
    bingkai(113, 24, 4, 3, 5, 15); 
    
    bingkai(47, 20, 25, 4, 3, 15);
    kursor(49, 22);
    color(5,15);
    printf("PILIH (1-2) : "); 
    pilih=getche();
    if(pilih=='1'){
        pelayanan();
    }
    else if(pilih=='2'){
        history();
    }
  
}

void pelayanan(){
    system("cls");
    bingkai(2,1,115,27,15,3);
    bingkai(4,2,95,8,3,15);
    bingkai(113,2,2,25,15,3); //garis
    bingkai(111,2,2,25,15,3); 
    color(5, 15);
    teks_pelayanan();
    kursor(82, 26);
    color(15, 5);
    printf("tekan [esc] 2x untuk kembali");
    kursor(21, 21);
    color(15, 5);
    bingkai(60, 12, 25, 4, 15, 3);
    kursor(62, 14);
    color(15, 5);
    printf("1. LAUNDRY KILOAN");
    bingkai(60, 20, 25, 4, 15, 3);
    kursor(62, 22);
    color(15, 5);
    printf("2. LAUNDRY SATUAN");
    bingkai(20, 15, 25, 4, 15, 3);
    kursor(22, 17);
    color(15, 5);
    printf("PILIH (1-2): ");
    pilih = getche();
    if(pilih == '1'){
        kiloan();
    }
    else if(pilih == '2'){
        satuan();
    } 
    else{
    while((input = getch()) != 27){
    kursor(21, 21);
    printf("INVALID ! Input angka 1-2");
    Sleep(100);
    pelayanan();
    }
    menu();
    }
}


void kiloan(){
    system("cls");
    bingkai(0,0,118,28,5,3);
    color(15,3);
    vilaundry2();
    kursor(82, 26);
    color(15, 5);
    printf("tekan [esc] 2x untuk kembali");
    bingkai(28, 12, 25, 4, 15, 3);
    kursor(30, 14);
    color(5, 15);
    printf("1. STANDAR (5 Hari)");
    bingkai(60, 12, 25, 4, 15, 3);
    kursor(62, 14);
    color(5, 15);
    printf("2. EXPRESS (2 Hari)");
    bingkai(45, 20, 25, 4, 15, 3);
    kursor(47, 22);
    color(5, 15);
    printf("PILIH (1-2): ");
    pilih=getche();
    if(pilih=='1'){
        biodata_kilostandar();
    }
    else if(pilih=='2'){
        biodata_kiloexpres();
    }
    else{
        while((input = getch()) != 27){
        kursor(45, 26);
        printf("INVALID ! Input angka 1-2");
        Sleep(100);
        kiloan();
        }
        pelayanan();
    }
}

void biodata_satuan_express()
{
    system("cls");
    bingkai(1,0,117,28,3,7);
    bingkai(27,6,65,18,3,15);
    bingkai(29,7,2,16,7,14);//garis kiri
    bingkai(88,7,2,16,7,14);//garis kanan
    color(8,15);
    kursor(35, 11);
    printf("Nama\t\t\t: "); 
    valNama(nama);
    kursor(35, 13);
    printf("Alamat\t\t: "); 
    valAlamat(alamat);
    kursor(35, 16);
    printf("No Hp\t\t:+628"); 
    valNohp(nohp);
    kursor(35, 18);
    printf("Jenis Kelamin\t: "); 
    valJenis_kelamin(jenis_kelamin);

    FILE *data = fopen("biodata.txt", "a");
    fprintf(data, "%s$%s$%s$%s\n",nama,alamat,nohp,jenis_kelamin);
    fclose(data);
    int v = 0;
    while(1){
    color(5,7);
    kursor(42, 25);
    printf("Apakah biodata anda sudah benar?");
    kursor(35, 26);
    printf("Klik y/Y untuk edit biodata, Klik t/T untuk lanjut");
    input=getch();
    if(input == 'Y' || input =='y'){
        v =1;
        break;
    }
    else if(input=='T' || input == 't'){
        v=2;
        break;
    }
    else{
        kursor(35, 25);
        printf("                                                    ");
        kursor(35, 26);
        printf("                                                    ");
        kursor(55, 27);
        color(5,7);
        printf("inputan invalid");
        Sleep(700);
        kursor(55, 27);
        printf("               ");
    }
    }
    if(v==1){
        editbiodata();
    }
        satuan_express();
    
}


void biodata_satuan_stand(){
    system("cls");
    bingkai(1,0,117,28,3,7);
    bingkai(27,6,65,18,3,15);
    bingkai(29,7,2,16,7,14);//garis kiri
    bingkai(88,7,2,16,7,14);//garis kanan
    color(8,15);
    kursor(35, 11);
    printf("Nama\t\t\t: "); 
    valNama(nama);
    kursor(35, 13);
    printf("Alamat\t\t: "); 
    valAlamat(alamat);
    kursor(35, 16);
    printf("No Hp\t\t:+628"); 
    valNohp(nohp);
    kursor(35, 18);
    printf("Jenis Kelamin\t: "); 
    valJenis_kelamin(jenis_kelamin);

    FILE *data = fopen("biodata.txt", "a");
    fprintf(data, "%s$%s$%s$%s\n",nama,alamat,nohp,jenis_kelamin);
    fclose(data);
    int v = 0;
    while(1){
    color(5,7);
    kursor(42, 25);
    printf("Apakah biodata anda sudah benar?");
    kursor(35, 26);
    printf("Klik y/Y untuk edit biodata, Klik t/T untuk lanjut");
    input=getch();
    if(input == 'Y' || input =='y'){
        v =1;
        break;
    }
    else if(input=='T' || input == 't'){
        v=2;
        break;
    }
    else{
        kursor(35, 25);
        printf("                                                    ");
        kursor(35, 26);
        printf("                                                         ");
        kursor(55, 27);
        color(5,7);
        printf("inputan invalid");
        Sleep(700);
        kursor(55, 27);
        printf("               ");
    }
    }
    if(v==1){
        editbiodata();
    }
        satuan_standar();
  
}

void biodata_kiloexpres(){
    system("cls");
    bingkai(1,0,117,28,3,7);
    bingkai(27,6,65,18,3,15);
    bingkai(29,7,2,16,7,14);//garis kiri
    bingkai(88,7,2,16,7,14);//garis kanan
    color(8,15);
    kursor(35, 11);
    printf("Nama\t\t\t: "); 
    valNama(nama);
    kursor(35, 13);
    printf("Alamat\t\t: "); 
    valAlamat(alamat);
    kursor(35, 16);
    printf("No Hp\t\t:+628"); 
    valNohp(nohp);
    kursor(35, 18);
    printf("Jenis Kelamin\t: "); 
    valJenis_kelamin(jenis_kelamin);

    FILE *data = fopen("biodata.txt", "a");
    fprintf(data, "%s$%s$%s$%s\n",nama,alamat,nohp,jenis_kelamin);
    fclose(data);
    int v = 0;
    while(1){
    color(5,7);
    kursor(42, 25);
    printf("Apakah biodata anda sudah benar?");
    kursor(35, 26);
    printf("Klik y/Y untuk edit biodata, Klik t/T untuk lanjut");
    input=getch();
    if(input == 'Y' || input =='y'){
        v =1;
        break;
    }
    else if(input=='T' || input == 't'){
        v=2;
        break;
    }
    else{
        kursor(35, 25);
        printf("                                                    ");
        kursor(35, 26);
        printf("                                                    ");
        kursor(55, 27);
        color(5, 7);
        printf("invalid");
        Sleep(700);
        kursor(55, 27);
        printf("               ");
    }
    }
    if(v==1){
        editbiodata();
    }
        kiloan_express();
}

void biodata_kilostandar(){
    system("cls");
    bingkai(1,0,117,28,3,7);
    bingkai(27,6,65,18,3,15);
    bingkai(29,7,2,16,7,14);//garis kiri
    bingkai(88,7,2,16,7,14);//garis kanan
    color(8,15);
    kursor(35, 11);
    printf("Nama\t\t\t: "); 
    valNama(nama);
    kursor(35, 13);
    printf("Alamat\t\t: "); 
    valAlamat(alamat);
    kursor(35, 16);
    printf("No Hp\t\t:+628"); 
    valNohp(nohp);
    kursor(35, 18);
    printf("Jenis Kelamin\t: "); 
    valJenis_kelamin(jenis_kelamin);

    FILE *data = fopen("biodata.txt", "a");
    fprintf(data, "%s$%s$%s$%s\n",nama,alamat,nohp,jenis_kelamin);
    fclose(data);
    int v = 0;
    while(1){
    color(5,7);
    kursor(42, 25);
    printf("Apakah biodata anda sudah benar?");
    kursor(35, 26);
    printf("Klik y/Y untuk edit biodata, Klik t/T untuk lanjut");
    input=getch();
    if(input == 'Y' || input =='y'){
        v =1;
        break;
    }
    else if(input=='T' || input == 't'){
        v=2;
        break;
    }
    else{
        kursor(35, 25);
        printf("                                                    ");
        kursor(55, 26);
        printf("                                                    ");
        kursor(55, 27);
        color(5,7);
        printf("inputan invalid");
        Sleep(700);
        kursor(55, 27);
        printf("               ");
    }
    }
    if(v==1){
        editbiodata();
    }
        kiloan_standar();
}


void kiloan_standar(){
    strcmp(pilih_lagi, "y");
    do{
    int tamp_harga=0;
    
    system("cls");
    bingkai_besar();
    bingkai(30,6,55,13,7,15);
    bingkai(48,7,20,2,15,3);
    gmbr_baju();

    kursor(35, 12);
    color(0,15);
    printf("1. Harga Rp 7000/kg");
    kursor(35, 14);
    color(0,15);
    printf("2. Harga Rp 9000/kg");
    kursor(50, 22);
    color(0,3);
    printf("PILIH (1-2) : "); 
    do{
    valPilih(&pilih);
    if(pilih == '1'){
        tamp_harga=harga_kilo[0];
    }
    else if(pilih =='2'){
        tamp_harga=harga_kilo[1];
    }
    if(pilih !='1' && pilih !='2'){
        kursor(47, 25);
        printf("INVALID ! Input angka 1-2");
        Sleep(50);
        kursor(47, 25);
        printf("                         ");
        kursor(63, 22);
        printf(" ");
    }}while(pilih != '1' && pilih != '2');
    
    if(pilih == '1'){
        daftar_barang_kilo();
    }
    else if(pilih =='2'){
        daftar_barang_kilo();
    }

    kursor(58, 5);
    color(15, 3);
    printf("Masukkan jumlah kilo : "); valjumlah(jumlah);
    kursor(58, 7);
    color(15, 3);
    printf("ingin menambah loundry lagi ?  y / t?  ");
    kursor(58, 8);
    printf("Pilih = "); valPilih_lagi(pilih_lagi);

    FILE *kilo;
    kilo = fopen("kilo.txt", "a");
    fprintf(kilo,"%s$%d$%s$%s\n",daftar_kilo[index_menu-1],tamp_harga,jumlah,user);
    fclose(kilo);

    }while(strcmp(pilih_lagi, "y") == 0 || strcmp(pilih_lagi, "Y") == 0);
    strcmp(pilih_lagi, "y");
    layanan_tambahan_stankilo();
}

void daftar_barang_kilo(){
    system("cls");
    bingkai(0,0,118,28,3,15);
    bingkai(9,2,43,13,10,3); //kiri
    bingkai(55,2,55,13,10,3); //kanan
    bingkai(20,3,21,2,3,15);
    kursor(25,4); color(10,15); printf("Nama Barang");
    for (int a = 0; a < 4; a++)
    {
        kursor(14, 7 + a);
        color(15, 3);
        printf("%d", a + 1);
        kursor(17, 7 + a);
        color(15, 3);
        printf("%s", daftar_kilo[a]);
    }
    
    kursor(58, 4);
    color(15, 3);
    printf("Pilih barang :   ");
    valPilih_kilo(pilihkilo);
    index_menu=atoi(pilihkilo);
}

void kiloan_express()
{
    do{
    int tamp_harga=0;
    system("cls");
    bingkai_besar();
    bingkai(30,6,55,13,7,15);
    bingkai(48,7,20,2,15,3);
    gmbr_baju();

    kursor(35, 12);
    color(0,15);
    printf("1. Harga Rp 12000/kg");
    kursor(35, 14);
    color(0,15);
    printf("2. Harga Rp 14000/kg");
    kursor(50, 22);
    color(0,3);
    printf("PILIH (1-2) : "); 
    do{
    valPilih(&pilih);
    if(pilih == '1'){
        tamp_harga=harga_kilo[0]+harga_kilo_express;
    }
    else if(pilih =='2'){
        tamp_harga=harga_kilo[1]+harga_kilo_express;
    }
    if(pilih !='1' && pilih !='2'){
        kursor(47, 25);
        printf("INVALID ! Input angka 1-2");
        Sleep(50);
        kursor(47, 25);
        printf("                         ");
        kursor(63, 22);
        printf(" ");
    }}while(pilih != '1' && pilih != '2');
    
    if(pilih == '1'){
        daftar_barang_kilo();
    }
    else if(pilih =='2'){
        daftar_barang_kilo();
    }

    kursor(58, 5);
    color(15, 3);
    printf("Masukkan jumlah kilo : "); valjumlah(jumlah);
    kursor(58, 7);
    color(15, 3);
    printf("ingin menambah loundry lagi ?  y / t?  ");
    kursor(58, 8);
    printf("Pilih = "); valPilih_lagi(pilih_lagi);

    // tamp_harga*=atoi(jumlah);
    FILE *kilo;
    kilo = fopen("kilo.txt", "a");
    fprintf(kilo, "%s$%d$%s$%s\n", daftar_kilo[index_menu-1],tamp_harga,jumlah,user);
    fclose(kilo);

    }while(strcmp(pilih_lagi, "y") == 0 || strcmp(pilih_lagi, "Y") == 0);
    layanan_tambahan_exkilo();
}

void layanan_tambahan_stankilo(){
    kursor(58, 9);
    printf("pilih layanan yang ingin anda gunakan ");
    kursor(58, 10);
    printf("1. Antar alamat (BERTAMBAH BIAYA sebesar RP 10.000)");
    kursor(58, 11);
    printf("2. Ambil sendiri ke tempat Laundry");
    kursor(58, 12);
    printf("PILIH : ");
    valPilih(&pilih);

    if(pilih=='1'){
        ongkir=10000;
        kursor(65, 13);
        printf("Biaya bertambah sebesar Rp 10.000");
        bingkai(27,18,71,7,3,15);
        color(3,15);
        kursor(29, 20);
        printf("LAYANAN YANG ANDA PILIH LAYANAN LAUNDRY KILOAN DENGAN PAKET STANDAR");
        kursor(29, 22);
        printf("Anda melaundry hari ini dan Laundry an akan di antar 5 hari kemudian");
        Sleep(2000);
        struk_kilo();
    }
    else if(pilih=='2'){
        ongkir=0;
        bingkai(23,18,75,7,3,15);
        color(3,15);
        kursor(25, 20);
        printf("LAYANAN YANG ANDA PILIH LAYANAN LAUNDRY KILOAN DENGAN PAKET STANDAR");
        kursor(25, 22);
        printf("Anda melaundry hari ini dan Laundry an anda bisa di ambil 5 hari kemudian");
        Sleep(2000);
        struk_kilo();
    }
 
}
void layanan_tambahan_exkilo()
{
    kursor(58, 9);
    printf("pilih layanan yang ingin anda gunakan ");
    kursor(58, 10);
    printf("1. Antar alamat (BERTAMBAH BIAYA sebesar RP 10.000)");
    kursor(58, 11);
    printf("2. Ambil sendiri ke tempat Laundry");
    kursor(58, 12);
    printf("PILIH : ");
    valPilih(&pilih);

    if(pilih=='1'){
        ongkir=10000;
        kursor(65, 13);
        printf("Biaya bertambah sebesar Rp 10.000");
        bingkai(27,18,71,7,3,15);
        color(3,15);
        kursor(29, 20);
        printf("LAYANAN YANG ANDA PILIH LAYANAN LAUNDRY KILOAN DENGAN PAKET EXPRESS");
        kursor(29, 22);
        printf("Anda melaundry hari ini dan Laundry akan di antar 2 hari kemudian");
        Sleep(2000);
        struk_kilo();
        ex = true;
    }
    else if(pilih=='2'){
        ongkir=0;
        bingkai(23,18,75,7,3,15);
        color(3,15);
        kursor(25, 20);
        printf("LAYANAN YANG ANDA PILIH LAYANAN LAUNDRY KILOAN DENGAN PAKET EXPRESS");
        kursor(25, 22);
        printf("Anda melaundry hari ini dan Laundry an bisa anda ambil 2 hari kemudian");
        Sleep(2000);
        struk_kilo();
    }
}

void struk_kilo(){
    char daftar_kilo[100][20];
    char tampuser[100][20];
    int tamp_harga[20];
    int jumlah[20];
    int i=0;

    system("cls");
    bingkai_besar();
    bingkai(3,2,64,24,2,14);
    color(0, 15);
    kursor(15,10);
    printf("JENIS ");
    kursor(38,10);
    printf("HARGA/Kg ");
    kursor(56,10);
    printf("JUMLAH ");
    color(8, 8);
    kursor(5, 12);
    printf("============================================================");
    color(8, 14);
    kursor(5, 9);
    printf("============================================================");

    FILE *kilo = fopen("kilo.txt","r");
    int j = 0;  
    while(fscanf(kilo,"%[^$]$%d$%d$%[^\n]\n",daftar_kilo[i],&tamp_harga[i],&jumlah[i],tampuser[i]) != EOF){
        if (strcmp(tampuser[i],user)==0)
        {
            kursor(6,14+j);
            printf("%d. ",1+j);
            kursor(10,14+j);
            printf("%s",daftar_kilo[i]);
            kursor(47,14+j);
            printf("%d",tamp_harga[i]);
            kursor(62,14+j);
            printf("%d",jumlah[i]);

        jml += tamp_harga[i]*jumlah[i];
        j++;

        } 
        i++;
    }
    fclose(kilo); 
    
    FILE *data = fopen("biodata.txt", "r");
    kursor(6,4);color(2,14);
    printf("%s\t\t%s\t\t%s\t+628%s",nama,alamat,jenis_kelamin,nohp);
    fclose(data);
    
    bingkai(73, 2, 28, 4, 8, 14);
    kursor(75, 4);
    color(0, 15);
    if ( ex == 0)
    {
    jml+=ongkir;
    }
    printf("harga = %d", jml);

    bayar();
}

void satuan(){
    system("cls");
    bingkai(0,0,118,28,5,3);
    color(15,3);
    vilaundry2();
    kursor(82, 26);
    color(15, 5);
    printf("tekan [esc] 2x untuk kembali");
    bingkai(28, 12, 25, 4, 15, 3);
    kursor(30, 14);
    color(5, 15);
    printf("1. STANDARD (5 Hari)");
    bingkai(60, 12, 25, 4, 15, 3);
    kursor(62, 14);
    color(5, 15);
    printf("2. EXPRESS (2 Hari)");
    bingkai(45, 20, 25, 4, 15, 3);
    kursor(47, 22);
    color(5, 15);
    printf("PILIH (1-2): ");
    pilih=getche();
    if(pilih=='1'){
        biodata_satuan_stand();
    }
    else if(pilih=='2'){
        biodata_satuan_express();
    }
    else{
        while((input = getch()) != 27){
        kursor(46, 26);
        printf("INVALID ! Input angka 1-2");
        Sleep(100);
        satuan();
        }
        pelayanan();
    }
}

void satuan_standar(){
    do{
    system("cls");
    bingkai(0,0,118,28,15,3);
    bingkai(5,2,35,25,14,3); //kiri
    bingkai(40,2,30,25,14,3); //kanan
    bingkai(11,3,20,2,3,15);
    kursor(15,4); color(5,15); printf("Nama Barang");
    bingkai(45,3,20,2,3,15);
    kursor(48,4); color(5,15); printf("Harga per item");
    for (int a = 0; a < 21; a++)
    {
        kursor(8, 6 + a);
        color(15, 3);
        printf("%d", a + 1);
        kursor(12, 6 + a);
        color(15, 3);
        printf("%s", daftar_satuan[a]);
        kursor(45, 6 + a);
        color(15, 3);
        printf("RP.%d", harga_satuan[a]);
    }
    kursor(75, 4);
    color(15, 3);
    printf("Pilih item :   ");
    valpilih_item(pilihitem);
    index_menu=atoi(pilihitem); 

    kursor(75, 5);
    color(15, 3);
    printf("Masukkan jumlah item : "); valjumlah(jumlah);
    kursor(75, 7);
    color(15, 3);
    printf("ingin menambah loundry lagi ?  y / t?  ");
    kursor(75, 8);
    printf("Pilih = "); valPilih_lagi(pilih_lagi);

    FILE *satuan;
    satuan = fopen("satuanstandar.txt", "a");
    fprintf(satuan, "%s$%d$%s$%s\n" ,daftar_satuan[index_menu-1],harga_satuan[index_menu-1],jumlah,user);
    fclose(satuan);

    }while(strcmp(pilih_lagi, "y") == 0 || strcmp(pilih_lagi, "Y") == 0);
    layanan_tambahan_standar_satuan();
}

void satuan_express(){
    do{
    system("cls");
    bingkai(0,0,118,28,15,3);
    bingkai(5,2,35,25,14,3); //kiri
    bingkai(40,2,30,25,14,3); //kanan
    bingkai(11,3,20,2,3,15);
    kursor(15,4); color(5,15); printf("Nama Barang");
    bingkai(45,3,20,2,3,15);
    kursor(48,4); color(5,15); printf("Harga per item");
    for (int a = 0; a < 21; a++)
    {
        kursor(8, 6 + a);
        color(15, 3);
        printf("%d", a + 1);
        kursor(12, 6 + a);
        color(15, 3);
        printf("%s", daftar_satuan[a]);
        kursor(45, 6 + a);
        color(15, 3);
        tamp_baru[a]=harga_satuan[a]+harga_satuan_express;
        printf("RP.%d", tamp_baru[a]);
    }
    kursor(75, 4);
    color(15, 3);
    printf("Pilih item :   ");
    valpilih_item(pilihitem);
    index_menu=atoi(pilihitem); 

    kursor(75, 5);
    color(15, 3);
    printf("Masukkan jumlah item : "); valjumlah(jumlah);
    kursor(75, 7);
    color(15, 3);
    printf("ingin menambah loundry lagi ?  y / t?  ");
    kursor(75, 8);
    printf("Pilih = "); valPilih_lagi(pilih_lagi);

    FILE *satuan;
    satuan = fopen("satuanekpres.txt", "a");
    fprintf(satuan, "%s$%d$%s$%s\n" ,daftar_satuan[index_menu-1],tamp_baru[index_menu-1],jumlah,user);
    fclose(satuan);
    }while(strcmp(pilih_lagi, "y") == 0 || strcmp(pilih_lagi, "Y") == 0);
    layanan_tambahan_ex_satuan();
}

void layanan_tambahan_standar_satuan(){
    kursor(75, 9);
    printf("pilih layanan yang ingin anda gunakan ");
    kursor(75, 10);
    printf("1. Antar alamat (+BIAYA sebesar RP 10.000)");
    kursor(75, 11);
    printf("2. Ambil sendiri ke tempat Laundry");
    kursor(75, 12);
    printf("PILIH : ");
    valPilih(&pilih);

    if(pilih=='1'){
        ongkir=10000;
        kursor(75, 13);
        printf("Biaya bertambah sebesar Rp 10.000");
        system("cls");
        bingkai_besar();
        bingkai(23,13,75,7,15,3);
        color(3,15);
        kursor(25, 15);
        printf("LAYANAN YANG ANDA PILIH LAYANAN LAUNDRY SATUAN DENGAN PAKET STANDAR");
        kursor(25, 16);
        printf("Anda melaundry hari ini dan laundry an akan di antar 5 hari kemudian");
        Sleep(2500);
        struk_satuan_standar();
    }
    else if(pilih=='2'){
        ongkir=0;
        system("cls");
        bingkai_besar();
        bingkai(23,13,75,5,15,3);
        color(3,15);
        kursor(25, 15);
        printf("LAYANAN YANG ANDA PILIH LAYANAN LAUNDRY SATUAN DENGAN PAKET STANDAR");
        kursor(25, 16);
        printf("Anda melaundry hari ini dan laundry an bisa anda ambil 5 hari kemudian");
        Sleep(2500);
        struk_satuan_standar();
    }
}

void layanan_tambahan_ex_satuan()
{
    kursor(75, 9);
    printf("pilih layanan yang ingin anda gunakan ");
    kursor(75, 10);
    printf("1. Antar alamat (+BIAYA sebesar RP 10.000)");
    kursor(75, 11);
    printf("2. Ambil sendiri ke tempat Laundry");
    kursor(75, 12);
    printf("PILIH : ");
    valPilih(&pilih);

    if(pilih=='1'){
        ongkir=10000;
        kursor(77, 13);
        printf("Biaya bertambah sebesar Rp 10.000");
        system("cls");
        bingkai_besar();
        bingkai(23,13,75,7,15,3);
        color(3,15);
        kursor(25, 15);
        printf("LAYANAN YANG ANDA PILIH LAYANAN LAUNDRY SATUAN DENGAN PAKET EXPRESS");
        kursor(25, 16);
        printf("Anda melaundry hari ini dan laundry an akan di antar 2 hari kemudian");
       Sleep(2500);
        struk_satuan_express();
    }
    else if(pilih=='2'){
        ongkir=0;
        system("cls");
        bingkai_besar();
        bingkai(23,13,75,5,15,3);
        color(3,15);
        kursor(25, 15);
        printf("LAYANAN YANG ANDA PILIH LAYANAN LAUNDRY SATUAN DENGAN PAKET EXPRESS");
        kursor(25, 16);
        printf("Anda melaundry hari ini dan laundry an bisa anda ambil 2 hari kemudian");
        Sleep(2500);
        struk_satuan_express();
    }
}

void struk_satuan_standar(){
    char daftar_satuantamp[50][50];
    char tampuser[100][50];
    int jumlahtamp[100];
    int i=0;

    system("cls");
    bingkai_besar();
    bingkai(3,2,64,24,2,14);
    color(0, 15);
    kursor(15,10);
    printf("JENIS ");
    kursor(45,10);
    printf("HARGA/ITEM ");
    kursor(56,10);
    printf("JUMLAH ");
    color(8, 8);
    kursor(5, 12);
    printf("============================================================");
    color(8, 14);
    kursor(5, 9);
    printf("============================================================");
    jml=0;
    FILE *satuan = fopen("satuanstandar.txt","r");
    int j = 0;  
    while(fscanf(satuan,"%[^$]$%d$%d$%[^\n]\n",daftar_satuantamp[i],&harga_satuan[i],&jumlahtamp[i],tampuser[i]) != EOF){
        if (strcmp(tampuser[i],user)==0)
        {
            kursor(6,14+j);
            printf("%d. ",1+j);
            kursor(10,14+j);
            printf("%s",daftar_satuantamp[i]);
            kursor(47,14+j);
            printf("%d",harga_satuan[i]);
            kursor(62,14+j);
            printf("%d\n",jumlahtamp[i]);

        jml += harga_satuan[i]*jumlahtamp[i];
        j++;

        } 
        i++;
    }
    fclose(satuan); 
    
    FILE *data = fopen("biodata.txt", "r");
    kursor(6,4);color(3,14);
    printf("%s\t\t%s\t\t%s\t+628%s\n",nama,alamat,jenis_kelamin,nohp);
    fclose(data);
    
    bingkai(73, 2, 28, 4, 8, 14);
    kursor(75, 4);
    color(0, 15);
    if ( ex == 0)
    {
    jml+=ongkir;
    }
    printf("harga = %d", jml);

    bayar();
}

void struk_satuan_express(){
    char daftar_satuan[50][50];
    // char tampuser[100][50];
    int tamp_baru[100];
    int jumlah[100];
    int i=0;

    system("cls");
    bingkai_besar();
    bingkai(3,2,64,24,2,14);
    color(0, 15);
    kursor(15,10);
    printf("JENIS ");
    kursor(45,10);
    printf("HARGA/ITEM ");
    kursor(56,10);
    printf("JUMLAH ");
    color(8, 8);
    kursor(5, 12);
    printf("============================================================");
    color(8, 14);
    kursor(5, 9);
    printf("============================================================");

    FILE *satuan = fopen("satuanekpres.txt","r");
    int j = 0;  
    while(fscanf(satuan,"%[^$]$%d$%d$%[^\n]\n",daftar_satuan[i],&tamp_baru[i],&jumlah[i],tampuser[i]) != EOF){
        if (strcmp(tampuser[i],user)==0)
        {
            kursor(6,14+j);
            printf("%d. ",1+j);
            kursor(10,14+j);
            printf("%s",daftar_satuan[i]);
            kursor(47,14+j);
            printf("%d",tamp_baru[i]);
            kursor(62,14+j);
            printf("%d\n",jumlah[i]);

        jml += tamp_baru[i]*jumlah[i];
        j++;

        } 
        i++;
    }
    fclose(satuan); 
    
    FILE *data = fopen("biodata.txt", "r");
    kursor(6,4);color(3,14);
    printf("%s\t\t%s\t\t%s\t+628%s\n",nama,alamat,jenis_kelamin,nohp);
    fclose(data);
    
    bingkai(73, 2, 28, 4, 8, 14);
    kursor(75, 4);
    color(0, 15);
    if ( ex == 0)
    {
    jml+=ongkir;
    }
    printf("harga = %d", jml);

    bayar();
}


void bayar()
{
    int uang;
    int kmbli;
    kursor(73, 10);
    printf("Masukkan uang : RP.");
    scanf("%d",&uang);
    kursor(73, 11);
    if (uang == jml)
    {
        kursor(73,12);
        printf("UANG ANDA PAS ");
        
    }
    else if (uang > jml)
    {
        kursor(73,12);
        kmbli = uang - jml;
        printf("Kembalian : RP.%d ", kmbli);
    }
    else if (uang < jml)
    {
        kursor(73,12);
        printf("uang anda kurang ");
        Sleep(100);
        printf("                   ");
        bayar();
    }
    kursor(65,23);
    int v = 0;
    while(1){
    kursor(57, 26);
    printf("tekan 1 ke menu pelayanan, tekan 0 ke menu utama");
    input=getch();
    if(input == '1'){
        v =1;
        break;
    }
    else if(input=='0'){
        v=2;
        break;
    }
    else{
        kursor(35, 23);
        printf("                                                    ");
        kursor(45, 25);
        printf("invalid");
        Sleep(700);
        kursor(45, 25);
        printf("               ");
    }
    }
    if(v==1){
        menu();
    }
    else if(v==2){
        awal();
    }
}


void editbiodata(){
    char namamu[100], alamatmu[100], nohpmu[100];
    char alamat[100], nohp[100];
    system("cls");
    bingkai_besar();
    int sama = 0;
    int i=0,sign;
    do{
    kursor(3,3);
    color(3,15);
    printf("Masukan nama yang anda input sebelumnya : "); valNama(nama);
    FILE *data = fopen("biodata.txt","r");

    color(15,3);
    while(fscanf(data,"%[^$]$%[^$]$%[^$]$%[^\n]\n",tam_nama[i],tam_alamat[i],tam_nohp[i],tam_jenis_kelamin[i]) != EOF){
        if (strcmp(tam_nama[i],nama)==0){
            kursor(3,5);
            printf("1. %s",tam_nama[i]);
            kursor(3,6);
            printf("2. %s",tam_alamat[i]);
            strcpy(alamatmu,tam_alamat[i]);
            kursor(3,7);
            printf("3. %s",tam_nohp[i]);
            strcpy(nohpmu,tam_nohp[i]);
            sign=1; 
            sama = i;
        }
        i++;  
    }
    fclose(data);
    if(sign==0){
        kursor(3,5);
        printf("DATA TIDAK ADA");
    }
    else{
    FILE *data2 = fopen("baru.txt","w");    
            kursor(3,9);
            printf("Pilih yang ingin diedit (1-3) : "); valPilih3(&pilih);
            if(pilih=='1'){
                kursor(3,11);
                printf("Nama : "); valNama(namamu);
                for(int j=0; j<i; j++){
                    if(strcmp(nama,tam_nama[j])==0){  
                        fprintf(data2,"%s$%s$%s$%s\n",namamu,tam_alamat[j],tam_nohp[j],tam_jenis_kelamin[j]);
                        kursor(3,11); color(5,15);
                        printf("Data anda berhasil tersimpan");
                        Sleep(500);
                    }else{
                        fprintf(data2,"%s$%s$%s$%s\n",tam_nama[j],tam_alamat[j],tam_nohp[j],tam_jenis_kelamin[j]);
                    }
                }
            }
            else if(pilih == '2'){
                kursor(3,11); 
                printf("Alamat : "); valAlamat(alamat);
                for(int j=0; j<i; j++){
                    if(strcmp(alamatmu,tam_alamat[j])==0){
                        fprintf(data2,"%s$%s$%s$%s\n", tam_nama[j],alamat,tam_nohp[j],tam_jenis_kelamin[j]);
                        kursor(3,11); color(5,15);
                        printf("Data anda berhasil tersimpan");
                        Sleep(500);
                    }else{
                        fprintf(data2,"%s$%s$%s$%s\n",tam_nama[j],tam_alamat[j],tam_nohp[j],tam_jenis_kelamin[j]);
                    }
                }
            }
            else if(pilih == '3'){
                kursor(3,11);
                printf("No Hp : +628"); valNohp(nohp);
                for(int j=0; j<i; j++){
                    if(strcmp(nohpmu,tam_nohp[j])==0){
                        fprintf(data2,"%s$%s$+628%s$%s\n", tam_nama[j],tam_alamat[j],nohp,tam_jenis_kelamin[j]);
                        kursor(3,11); color(5,15);
                        printf("Data anda berhasil tersimpan");
                        Sleep(500);
                    }else{
                        fprintf(data2,"%s$%s$%s$%s\n",tam_nama[j],tam_alamat[j],tam_nohp[j],tam_jenis_kelamin[j]);
                    }
                }
            }
        fclose(data2);
        remove("biodata.txt");
        rename("baru.txt","biodata.txt");    
    }
    }while(sign==0);
}


void history(){
    strcpy(user,"ahmad");
    system("cls");
    bingkai(0,0,118,28,15,3);
    bingkai(10, 10, 25, 4, 15, 3);
    kursor(12, 12);
    color(5, 15);
    printf("1. Kiloan");
    bingkai(45, 10, 25, 4, 15, 3);
    kursor(47, 12);
    color(5, 15);
    printf("2. Satuan Standar");
    bingkai(80, 10, 25, 4, 15, 3);
    kursor(82, 12);
    color(5, 15);
    printf("3. Satuan Express");
    bingkai(45, 20, 25, 4, 15, 3);
    kursor(47, 22);
    color(5, 15);
    printf("PILIH : ");
    pilih=getche();
    if(pilih=='1'){
        tampilkilo();
    }
    else if(pilih=='2'){
        system("cls");
        tampilsatuanstan();
    }
    else if(pilih=='3'){
        tampilsatuanex();
    }
    else{
        kursor(47, 25);
        printf("INVALID ! Input angka 1-3");
        Sleep(1000);
        history();
    }
}

void tampilkilo(){
    system("cls");
    bingkai_besar();
    int i=0;
    int j = 0;
    FILE *kilo = fopen("kilo.txt","r");
    kursor(5,5);
    color(15,3);
    while(fscanf(kilo,"%[^$]$%d$%[^$]$%[^\n]\n",daftar_kilo[i],&tamp_harga[i],jumlah[i],tampuser[i]) != EOF){
        if (strcmp(tampuser[i],user)==0)
        {
            kursor(6,14+j);
            printf("%d. ",1+j);
            kursor(10,14+j);
            printf("%s",daftar_kilo[i]);
            kursor(47,14+j);
            printf("%d",tamp_harga[i]);
            kursor(62,14+j);
            printf("%s\n",jumlah[i]);

        jml += tamp_harga[i]*atoi(jumlah[i]);
        j++;

        } 
        i++;
    }
    fclose(kilo);
    int pnj=i;


    kursor(50,23);
    color(5,15);
    printf("klik y/Y untuk hapus, klik t/T untuk kembali ke menu pelayanan");
    pilih=getche();
    if(pilih=='y'||pilih=='Y'){
        hapuskilo(pnj);
    }
    else if(pilih=='t'||pilih=='T'){
        menu();
    }
    else{
        printf("INVALID");
    }

}

void hapuskilo(int panjang){
    int i=0;
    int j = 0;
    FILE *kilo = fopen("kilo.txt","w");
    for(int index=0 ; index<panjang ; index++){
        if (strcmp(tampuser[index],user)==1)
        {
        fprintf(kilo, "%s$%d$%s$%s\n",daftar_kilo[index],tamp_harga[index],jumlah[index],tampuser[index]);
        }
        i++;
    }
    fclose(kilo);
    printf("terhapus");
    getch();
}

void tampilsatuanstan(){
    system("cls");
    bingkai_besar();
    int i = 0;
    int j = 0;
    FILE *satuan = fopen("satuanstandar.txt","r");
    
    kursor(5,5);
    color(15,3);
    while(fscanf(satuan,"%[^$]$%d$%[^$]$%[^\n]\n",&daftar_satuan[i],&harga_satuan[i],&jumlah[i],&tampuser[i]) != EOF){
        if (strcmp(tampuser[i],user)==0)
        {
            kursor(6,16+j);
            printf("%d. ",1+j);
            kursor(10,16+j);
            printf("%s",daftar_satuan[i]);
            kursor(47,16+j);
            printf("%d",harga_satuan[i]);
            kursor(62,16+j);
            printf("%s\n",jumlah[i]);

        jml += harga_satuan[i]*atoi(jumlah[i]);
        j++;

        } 
        i++;
    }
    fclose(satuan);
    int pnj=i;


    kursor(50,23);
    color(5,15);
    printf("klik y/Y untuk hapus, klik t/T untuk kembali ke menu pelayanan");
    pilih=getche();
    if(pilih=='y'||pilih=='Y'){
        hapussatuanstan(pnj);
    }
    else if(pilih=='t'||pilih=='T'){
        menu();
    }
    else{
        printf("INVALID");
    }
}

void hapussatuanstan(int panjang){
    int i=0;
    int j = 0;
    FILE *kilo = fopen("kilo.txt","w");
    for(int index=0 ; index<panjang ; index++){
        if (strcmp(tampuser[index],user)==1)
        {
       fprintf(kilo, "%s$%d$%s$%s\n",daftar_satuan[index],harga_satuan[index],jumlah[index],tampuser[index]);
        }
        i++;
    }
    fclose(kilo);
    printf("terhapus");
    getch();
}

void tampilsatuanex(){
    system("cls");
    int i = 0;
    int j = 0;
    FILE *satuanex = fopen("satuanekpres.txt","r");

    while(fscanf(satuanex,"%[^$]$%d$%[^$]$%[^\n]\n",daftar_satuan[i],&tamp_baru[i],jumlah[i],tampuser[i]) != EOF){
        if (strcmp(tampuser[i],user)==0)
        {
            kursor(6,14+j);
            printf("%d. ",1+j);
            kursor(10,14+j);
            printf("%s",daftar_satuan[i]);
            kursor(47,14+j);
            printf("%d",tamp_baru[i]);
            kursor(62,14+j);
            printf("%s\n",jumlah[i]);

        jml += tamp_baru[i]*atoi(jumlah[i]);
        j++;

        } 
        i++;
    }
    fclose(satuanex);
    int pnj=i;

    kursor(50,23);
    color(5,15);
    printf("klik y/Y untuk hapus, klik t/T untuk kembali ke menu pelayanan");
    pilih=getche();
    if(pilih=='y'||pilih=='Y'){
        hapussatuanex(pnj);
    }
    else if(pilih=='t'||pilih=='T'){
        menu();
    }
    else{
        printf("INVALID");
    }
}

void hapussatuanex(int panjang){
    int i = 0;
    int j = 0;
    FILE *satuanex = fopen("satuanekpres.txt","w");

    for(int index=0 ; index<panjang ; index++){
        if (strcmp(tampuser[index],user)==1)
        {            
        fprintf(satuanex, "%s$%d$%s$%s\n",daftar_satuan[index],tamp_baru[index],jumlah[index],tampuser[index]);
        }
        i++;
    } 
    fclose(satuanex);
    printf("terhapus");
    menu();
}

void main(){
    vilaundry();
    getch();
}