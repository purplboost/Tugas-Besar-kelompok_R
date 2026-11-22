#include <iostream>
#include "MLL-02/header/pelanggan.h"
#include "MLL-02/header/coffeeShop.h"
#include "BST/header/transaksiBST.h"
using namespace std;

int main() {
    // 1. Buat list Parent, list Child, dan BST
    ListPelanggan LP;  createListPelanggan(LP);
    ListCoffeeShop LC; createListCoffeeShop(LC);
    AdrBST root = NULL;

    // 2. Isi data Parent (Pelanggan)
    Pelanggan pl1 = {"P01", "Andi", "0811111"};
    Pelanggan pl2 = {"P02", "Budi", "0822222"};
    insertLastPelanggan(LP, createElmPelanggan(pl1));
    insertLastPelanggan(LP, createElmPelanggan(pl2));

    // 3. Isi data Child (Coffee Shop)
    CoffeeShop cs1 = {"C01", "Kopi Kita", "Jl. Telekomunikasi 1", "Specialty"};
    CoffeeShop cs2 = {"C02", "Senja Coffee", "Jl. Buah Batu 20", "Casual"};
    insertLastCoffeeShop(LC, createElmCoffeeShop(cs1));
    insertLastCoffeeShop(LC, createElmCoffeeShop(cs2));

    // 4. Hubungkan Parent-Child lewat Relasi (daftar member)
    Tanggal gabung = {1, 11, 2026};
    daftarMember(findPelanggan(LP, "P01"), findCoffeeShop(LC, "C01"), gabung);
    daftarMember(findPelanggan(LP, "P01"), findCoffeeShop(LC, "C02"), gabung);
    daftarMember(findPelanggan(LP, "P02"), findCoffeeShop(LC, "C01"), gabung);

    // 5. Transaksi -> poin bertambah -> simpan ke BST (key: tanggal)
    Transaksi t;
    t.idPelanggan = "P01";
    t.idCoffeeShop = "C01";
    t.tanggal = {15, 11, 2026};
    t.daftarMenu = "Latte x2";
    t.totalPembayaran = 60000;
    t.promo = "-";
    AdrRelasi r = findRelasi(findPelanggan(LP, "P01"), "C01");
    t.poinDiperoleh = hitungPoinTransaksi(r->info.level, t.totalPembayaran);
    r->info.totalPoin += t.poinDiperoleh;
    r->info.level = tentukanLevel(r->info.totalPoin);
    insertBST(root, t);

    Transaksi t2 = t;
    t2.idPelanggan = "P02";
    t2.tanggal = {10, 11, 2026};
    t2.daftarMenu = "Americano x1";
    t2.totalPembayaran = 20000;
    t2.poinDiperoleh = 2;
    insertBST(root, t2);

    // 6. Tampilkan hasil
    cout << "=== DATA PELANGGAN & KEANGGOTAAN ===\n";
    tampilPelanggan(LP);
    cout << "\n=== DATA COFFEE SHOP ===\n";
    tampilCoffeeShop(LC);
    cout << "\n=== TRANSAKSI (urut tanggal, BST in-order) ===\n";
    inOrder(root);
    return 0;
}