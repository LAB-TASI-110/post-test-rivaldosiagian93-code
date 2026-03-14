#include <stdio.h>
#include <string.h>

int main() {
    char nama[50];
    char menu[50];
    int total = 0;

    int gorengpisang=0, tempe=0, tahu=0, kopihitam=0, susu=0, boba=0;

    printf("=== KAFETARIA IT DEL - KANTIN LAMA ===\n");

    printf("Masukkan Nama Pembeli : ");
    fgets(nama, sizeof(nama), stdin);

    printf("\nMenu Tersedia:\n");
    printf("gorengpisang : Rp10000\n");
    printf("tempe        : Rp10000\n");
    printf("tahu         : Rp10000\n");
    printf("kopihitam    : Rp5000\n");
    printf("susu         : Rp15000\n");
    printf("boba         : Rp20000\n");
    printf("Ketik --- untuk selesai\n\n");

    while(1){
        printf("Masukkan menu : ");
        scanf("%s", menu);

        if(strcmp(menu,"---")==0){
            break;
        }
        else if(strcmp(menu,"gorengpisang")==0){
            gorengpisang++;
            total += 10000;
        }
        else if(strcmp(menu,"tempe")==0){
            tempe++;
            total += 10000;
        }
        else if(strcmp(menu,"tahu")==0){
            tahu++;
            total += 10000;
        }
        else if(strcmp(menu,"kopihitam")==0){
            kopihitam++;
            total += 5000;
        }
        else if(strcmp(menu,"susu")==0){
            susu++;
            total += 15000;
        }
        else if(strcmp(menu,"boba")==0){
            boba++;
            total += 20000;
        }
        else{
            printf("Menu tidak tersedia!\n");
        }
    }

    printf("\n===== STRUK PESANAN KANTIN LAMA =====\n");
    printf("Nama Pembeli : %s\n", nama);

    if(gorengpisang>0)
        printf("Goreng Pisang  %d x 10000 = %d\n", gorengpisang, gorengpisang*10000);

    if(tempe>0)
        printf("Tempe          %d x 10000 = %d\n", tempe, tempe*10000);

    if(tahu>0)
        printf("Tahu           %d x 10000 = %d\n", tahu, tahu*10000);

    if(kopihitam>0)
        printf("Kopi Hitam     %d x 5000  = %d\n", kopihitam, kopihitam*5000);

    if(susu>0)
        printf("Susu           %d x 15000 = %d\n", susu, susu*15000);

    if(boba>0)
        printf("Boba           %d x 20000 = %d\n", boba, boba*20000);

    printf("---------------------------------\n");
    printf("Total Harga : Rp%d\n", total);
    printf("Terima Kasih\n");

    return 0;
}