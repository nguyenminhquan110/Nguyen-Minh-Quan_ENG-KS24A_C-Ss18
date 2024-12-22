#include <stdio.h>
#include <string.h>


struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[30];
};


void suaThongTinSinhVien(int id, struct SinhVien sinhvien[], int n) {
    int found = 0; 
    for (int i = 0; i < n; i++) {
        if (sinhvien[i].id == id) {
            found = 1;

            printf("Sinh vien co id %d da duoc tim thay. Nhap thong tin moi:\n", id);

            printf("Nhap ten moi: ");
            fgets(sinhvien[i].name,50,stdin);
            int len = strlen(sinhvien[i].name);
            if (len > 0 && sinhvien[i].name[len - 1] == '\n') {
                sinhvien[i].name[len - 1] = '\0';  
            }
            
            printf("Nhap tuoi moi: ");
            scanf("%d", &sinhvien[i].age);
            getchar();  

            printf("Nhap so dien thoai moi: ");
            fgets(sinhvien[i].phoneNumber,30,stdin);
            len = strlen(sinhvien[i].phoneNumber);
            if (len > 0 && sinhvien[i].phoneNumber[len - 1] == '\n') {
                sinhvien[i].phoneNumber[len - 1] = '\0'; 
            }

            printf("Thong tin sinh vien da duoc cap nhat\n");
            break;
        }
    }

    if (found == 0) {
        printf("Khong tim thay sinh vien voi id %d.\n", id);
    }
}

void hienThiSinhVien(struct SinhVien sinhvien[],int n) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien %d:\n",i + 1);
        printf("Id: %d\n", sinhvien[i].id);
        printf("Ten: %s\n", 
		sinhvien[i].name);
        printf("Tuoi: %d\n",sinhvien[i].age);
        printf("So dien thoai: %s\n",sinhvien[i].phoneNumber);
    }
}

int main() {
    
    struct SinhVien sinhvien[5] = {
        {1, "Nguyen Van A", 18, "0111111111"},
        {2, "Nguyen Van B", 19, "0222222222"},
        {3, "Nguyen Van C", 20, "0333333333"},
        {4, "Nguyen Van D", 21, "0444444444"},
        {5, "Nguyen Van E", 22, "0555555555"}
    };

    hienThiSinhVien(sinhvien, 5);
   
    int idCanSua;
    printf("\nNhap id sinh vien can sua thong tin: ");
    scanf("%d",&idCanSua);
    getchar(); 

    suaThongTinSinhVien(idCanSua,sinhvien,5);

    hienThiSinhVien(sinhvien,5);

    return 0;
}

