#include <stdio.h>

int main() {
    int N;

    printf("Masukkan jumlah data barang: ");
    scanf("%d", &N);

    int stok[N];
    int kategori[N];

    // input stok dan kategori
    for(int i = 0; i < N; i++) {
        printf("Masukkan stok dan kategori barang ke-%d: ", i+1);
        scanf("%d %d", &stok[i], &kategori[i]);
    }

    // mencari kategori unik dan menjumlahkan stok
    for(int i = 0; i < N; i++) {
        int sudah_dihitung = 0;

        // cek apakah kategori sudah pernah dihitung
        for(int j = 0; j < i; j++) {
            if(kategori[i] == kategori[j]) {
                sudah_dihitung = 1;
                break;
            }
        }

        if(!sudah_dihitung) {
            int total = 0;

            for(int k = 0; k < N; k++) {
                if(kategori[k] == kategori[i]) {
                    total += stok[k];
                }
            }

            printf("Total stok kategori %d = %d\n", kategori[i], total);
        }
    }

    return 0;
}