/* File        : mainNRSL.cpp */
/* Deskripsi   : Driver / main program untuk ADT Non Restricted Single Linked/Linear List */
/* Dibuat oleh : Ade Chandra Nugraha*/
/* Tanggal     : 25-10-2001 */
/* Diupdate oleh : Santi Sundari, 6-4-2011, hanya tdd operasi2 dasar */
/* Diupdate oleh : WW & AM, 8-3-2025, penyesuaian area body & main untuk latihan Diploma 3 */

#include "spnrsll.h"
#include <stdio.h>

int main()
{
    /* Kamus Lokal */
    List MyList;
    infotype isi;
    address P, Prec;

    /* Program */
    CreateList (&MyList);   
    
    printf("INSERT\n");
    
    // 1. Insert First
    InsVFirst(&MyList, 5);
    printf("Insert First (5) : "); PrintInfo(MyList);
    
    InsVFirst(&MyList, 1);
    printf("Insert First (1) : "); PrintInfo(MyList);
    
    // 2. Insert Last
    InsVLast(&MyList, 9);
    printf("Insert Last (9)  : "); PrintInfo(MyList);
    
    // 3. Insert Middle (After)
    // Target: Sisipkan 3 setelah 1
    Prec = Search(MyList, 1);
    if (Prec != Nil) {
        P = Alokasi(3);
        if (P != Nil) InsertAfter(&MyList, P, Prec);
    }
    printf("Insert Middle(3) : "); PrintInfo(MyList);
    
    // Target: Sisipkan 7 setelah 5
    Prec = Search(MyList, 5);
    if (Prec != Nil) {
        P = Alokasi(7);
        if (P != Nil) InsertAfter(&MyList, P, Prec);
    }
    printf("Insert Middle(7) : "); PrintInfo(MyList);


    printf("\nDEMO DELETE\n");
    
    // 4. Delete First
    DelVFirst(&MyList, &isi);
    printf("Delete First (Dihapus: %d) : ", isi);
    PrintInfo(MyList);
    
    // 5. Delete Last
    DelVLast(&MyList, &isi);
    printf("Delete Last (Dihapus: %d)  : ", isi);
    PrintInfo(MyList);
    
    // 6. Delete Middle (After)
    // Target: Hapus angka setelah 3 (yaitu angka 5)
    Prec = Search(MyList, 3);
    if (Prec != Nil) {
        DelAfter(&MyList, &P, Prec);
        if (P != Nil) {
            isi = Info(P);
            DeAlokasi(P); // Pastikan memori di-free
            printf("Delete Middle (Dihapus: %d) : ", isi);
        }
    }
    PrintInfo(MyList);

    /* Finishing */
    printf("\nMembersihkan memori...\n");
    DelAll(&MyList); // Mencegah memory leak
    PrintInfo(MyList);
    
    return 0;
}

