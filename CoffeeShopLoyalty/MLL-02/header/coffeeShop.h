#ifndef COFFEESHOP_H
#define COFFEESHOP_H
#include <string>
using namespace std;

struct CoffeeShop {
    string id, nama, alamat, kategori;
};

struct ElmCoffeeShop;
typedef ElmCoffeeShop* AdrCoffeeShop;

struct ElmCoffeeShop {
    CoffeeShop info;
    AdrCoffeeShop next;
};

struct ListCoffeeShop {
    AdrCoffeeShop first;
};

struct ListPelanggan; // forward declaration

void createListCoffeeShop(ListCoffeeShop &L);
AdrCoffeeShop createElmCoffeeShop(CoffeeShop x);
void insertLastCoffeeShop(ListCoffeeShop &L, AdrCoffeeShop p);
AdrCoffeeShop findCoffeeShop(ListCoffeeShop L, string id);
void tampilCoffeeShop(ListCoffeeShop L);
bool deleteCoffeeShop(ListCoffeeShop &LC, ListPelanggan &LP, string id);
#endif