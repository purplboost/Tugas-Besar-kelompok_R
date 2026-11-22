#ifndef PELANGGAN_H
#define PELANGGAN_H
#include <string>
using namespace std;

struct Pelanggan {
    string id, nama, telepon;
};

struct ElmPelanggan {
    Pelanggan info;
    AdrRelasi firstRelasi;
    AdrPelanggan next;
};

struct ListPelanggan {
    AdrPelanggan first;
};

void createListPelanggan(ListPelanggan &L);
AdrPelanggan createElmPelanggan(Pelanggan x);
void insertLastPelanggan(ListPelanggan &L, AdrPelanggan p);
AdrPelanggan findPelanggan(ListPelanggan L, string id);
bool deletePelanggan(ListPelanggan &L, string id);
void tampilPelanggan(ListPelanggan L);
#endif