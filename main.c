#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, withdrawal, deposit, balance = 1000;
    
    printf("1. Para cekme\n");
    printf("2. Para Yatirma\n");
    printf("3. Bakiye Sorgulama\n");
    printf("4. cikis\n");
    printf("Seciminiz: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            printf("cekmek istediðiniz miktar: ");
            scanf("%d", &withdrawal);
            if (withdrawal % 100 != 0)
                printf("Lutfen 100 TL'lik banknotlar kullanýn.\n");
            else if (withdrawal > (balance - 500))
                printf("Yeterli bakiye yok.\n");
            else
            {
                balance = balance - withdrawal;
                printf("Yeni bakiyeniz: %d TL\n", balance);
            }
            break;
        case 2:
            printf("Yatirmak istediðiniz miktar: ");
            scanf("%d", &deposit);
            balance = balance + deposit;
            printf("Yeni bakiyeniz: %d TL\n", balance);
            break;
        case 3:
            printf("Bakiyeniz: %d TL\n", balance);
            break;
        case 4:
            printf("Cikis yapýldý.\n");
            break;
        default:
            printf("Gecersiz secim.\n");
    }
    
    return 0;
}

      
    
