#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[30];
};

int main() {
    struct SinhVien sinhvien;

    
    printf("Moi ban nhap vao ten: ");
    fgets(sinhvien.name, 50, stdin);
    sinhvien.name[strcspn(sinhvien.name, "\n")] = '\0'; 

    printf("Moi ban nhap vao tuoi: ");
    scanf("%d", &sinhvien.age);
    getchar(); 

    printf("Moi ban nhap vao so dien thoai: ");
    fgets(sinhvien.phoneNumber, 30, stdin);
    sinhvien.phoneNumber[strcspn(sinhvien.phoneNumber, "\n")] = '\0'; 

    printf("\nThong tin sinh vien:\n");
    printf("Name: %s\n", sinhvien.name);
    printf("Age: %d\n", sinhvien.age); 
    printf("PhoneNumber: %s\n", sinhvien.phoneNumber);

    return 0;
}

