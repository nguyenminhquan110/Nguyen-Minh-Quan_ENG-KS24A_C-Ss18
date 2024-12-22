#include <stdio.h>
#include <string.h>

struct SinhVien{
    char name[50];
    int age;
    char phoneNumber[30];
};

int main(){
    struct SinhVien sinhvien[5];

    for (int i = 0; i < 5; i++){
        printf("\nMoi ban nhap vao thong tin sinh vien thu %d:\n", i + 1);
        printf("Moi ban nhap vao ten: ");
        fgets(sinhvien[i].name, 50, stdin);
        int n = strlen(sinhvien[i].name);
        if (n > 0 && sinhvien[i].name[n - 1] == '\n'){
            sinhvien[i].name[n - 1] = '\0';
        }
        printf("Moi ban nhap vao tuoi: ");
        scanf("%d", &sinhvien[i].age);
        getchar(); 
        printf("Moi ban nhap vao so dien thoai: ");
        fgets(sinhvien[i].phoneNumber, 30, stdin);
       
        n = strlen(sinhvien[i].phoneNumber);
        if (n > 0 && sinhvien[i].phoneNumber[n - 1] == '\n'){
            sinhvien[i].phoneNumber[n - 1] = '\0';
        }
    }

    
    printf("\nThong tin sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Name: %s\n", sinhvien[i].name);
        printf("Age: %d\n", sinhvien[i].age);
        printf("PhoneNumber: %s\n", sinhvien[i].phoneNumber);
    }

    return 0;
}

