#include <stdio.h>
#include <string.h>

int main() {

    char kode[10];
    float beratButet, beratUcok;
    float totalBerat, ongkirPerKg;
    float totalOngkir;
    float diskon;
    char kota[20];

    while (1) {

        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;
        }

        scanf("%f", &beratButet);

        /* Berat paket Ucok (lebih kecil 1 kg dari Butet) */
        beratUcok = beratButet - 1;

        if (strcmp(kode, "MDN") == 0) {
            strcpy(kota, "Medan");
            ongkirPerKg = 75000;
            diskon = 0.10;
        }
        else if (strcmp(kode, "JKT") == 0) {
            strcpy(kota, "Jakarta");
            ongkirPerKg = 100000;
            diskon = 0.05;
        }
        else if (strcmp(kode, "SBY") == 0) {
            strcpy(kota, "Surabaya");
            ongkirPerKg = 90000;
            diskon = 0.03;
        }
        else if (strcmp(kode, "BLG") == 0) {
            strcpy(kota, "Balige");
            ongkirPerKg = 25000;
            diskon = 0.50;
        }

        totalBerat = beratButet + beratUcok;
        totalOngkir = totalBerat * ongkirPerKg;
        totalOngkir = totalOngkir - (totalOngkir * diskon);

        printf("=== Struk Pembayaran Del-Express ===\n");
        printf("Kota tujuan        : %s\n", kota);
        printf("Berat paket Butet  : %.0f kg\n", beratButet);
        printf("Berat paket Ucok   : %.0f kg\n", beratUcok);
        printf("Total berat        : %.0f kg\n", totalBerat);
        printf("Total ongkos kirim : Rp %.0f\n", totalOngkir);
        printf("Promo diperoleh    : %.0f%%\n\n", diskon * 100);
    }

    return 0;
}