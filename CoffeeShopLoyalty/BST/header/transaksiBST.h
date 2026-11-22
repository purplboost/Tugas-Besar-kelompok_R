#ifndef TRANSAKSIBST_H
#define TRANSAKSIBST_H
#include <string>
using namespace std;

struct Transaksi {
    string idPelanggan, idCoffeeShop;
    Tanggal tanggal;            // key BST (yyyymmdd lewat kunciTanggal())
    string daftarMenu;
    int totalPembayaran;
    int poinDiperoleh;
    string promo;
};

struct NodeBST {
    Transaksi info;
    NodeBST *left, *right;
};
typedef NodeBST* AdrBST;

AdrBST createNodeBST(Transaksi t);
void insertBST(AdrBST &root, Transaksi t);
AdrBST searchBST(AdrBST root, Tanggal t);
void inOrder(AdrBST root);
int hitungPendapatanShop(AdrBST root, string idShop);
int hitungTransaksiPelanggan(AdrBST root, string idPelanggan);
#endif
