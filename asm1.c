/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// Tạo file asm2.c và hoàn thiện nội dung Assignment từ nội dung file asm1.c


// Danh sách các chức năng trong ASM1:
// 1. Chức năng số 1: Kiểm tra số nguyên
// 2. Chức năng số 2. Tìm Ước số chung và bội số chung của 2 số 
// 3. Chức năng số 3: Chương trình tính tiền cho quán Karaoke
// 4. Chức năng số 4: Tính tiền điện 
// 5. Chức năng số 5: Chức năng đổi tiền 
// 6. Chức năng số 6: Xây dựng chức năng tính lãi suất vay ngân hàng vay trả góp 
// 7. Chức năng số 7: Xây dựng chương trình vay tiền mua xe
// 8. Chức năng số 8: Sắp xếp thông tin sinh viên
// 9. Chức năng số 9: Xây dựng game FPOLY-LOTT
// 10. Chức năng số 10: Xây dựng chương trình tính toán phân số 
// Viết chương trình C thực hiện các chức năng trên

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Khai báo các hàm chức năng
void chucNang1();
void chucNang2();
void chucNang3();
void chucNang4();
void chucNang5();
void chucNang6();
void chucNang7();
void chucNang8();
void chucNang9();
void chucNang10();

// Hàm kiểm tra số nguyên tố
int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Hàm kiểm tra số chính phương
int laSoChinhPhuong(int n) {
    int can = sqrt(n);
    return (can * can == n);
}

// Hàm tìm UCLN
int timUCLN(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

// Hàm tìm BCNN
int timBCNN(int a, int b) {
    return (a * b) / timUCLN(a, b);
}

int main() {
    int chonChucNang;
    srand(time(NULL)); // Khởi tạo seed cho random

    do {
        printf("\n=================== MENU CHUC NANG ===================\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim Uoc so chung va boi so chung cua 2 so\n");
        printf("3. Tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat\n");
        printf("========================================================\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &chonChucNang);

        switch (chonChucNang) {
            case 1:
                printf("\n=== DA CHON CHUC NANG 1: KIEM TRA SO NGUYEN ===\n");
                chucNang1();
                break;
            case 2:
                printf("\n=== DA CHON CHUC NANG 2: TIM UOC SO CHUNG VA BOI SO CHUNG CUA 2 SO ===\n");
                chucNang2();
                break;
            case 3:
                printf("\n=== DA CHON CHUC NANG 3: TINH TIEN CHO QUAN KARAOKE ===\n");
                chucNang3();
                break;
            case 4:
                printf("\n=== DA CHON CHUC NANG 4: TINH TIEN DIEN ===\n");
                chucNang4();
                break;
            case 5:
                printf("\n=== DA CHON CHUC NANG 5: DOI TIEN ===\n");
                chucNang5();
                break;
            case 6:
                printf("\n=== DA CHON CHUC NANG 6: TINH LAI SUAT VAY NGAN HANG VAY TRA GOP ===\n");
                chucNang6();
                break;
            case 7:
                printf("\n=== DA CHON CHUC NANG 7: VAY TIEN MUA XE ===\n");
                chucNang7();
                break;
            case 8:
                printf("\n=== DA CHON CHUC NANG 8: SAP XEP THONG TIN SINH VIEN ===\n");
                chucNang8();
                break;
            case 9:
                printf("\n=== DA CHON CHUC NANG 9: GAME FPOLY-LOTT ===\n");
                chucNang9();
                break;
            case 10:
                printf("\n=== DA CHON CHUC NANG 10: TINH TOAN PHAN SO ===\n");
                chucNang10();
                break;
            case 0:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (chonChucNang != 0);

    return 0;
}


void chucNang1() {
    int x;
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);
    
    printf("\nKET QUA KIEM TRA:\n");
    printf("- So %d la so nguyen.\n", x);
    
    if (laSoNguyenTo(x)) {
        printf("- So %d la so nguyen to.\n", x);
    } else {
        printf("- So %d khong phai la so nguyen to.\n", x);
    }
    
    if (laSoChinhPhuong(x)) {
        printf("- So %d la so chinh phuong.\n", x);
    } else {
        printf("- So %d khong phai la so chinh phuong.\n", x);
    }
}


void chucNang2() {
    int x, y;
    printf("Nhap vao so thu nhat x: ");
    scanf("%d", &x);
    printf("Nhap vao so thu hai y: ");
    scanf("%d", &y);
    
    int ucln = timUCLN(abs(x), abs(y));
    int bcnn = timBCNN(abs(x), abs(y));
    
    printf("\nKET QUA:\n");
    printf("- Uoc so chung lon nhat cua %d va %d la: %d\n", x, y, ucln);
    printf("- Boi so chung nho nhat cua %d va %d la: %d\n", x, y, bcnn);
}


void chucNang3() {
    int gioBatDau, gioKetThuc;
    printf("Nhap gio bat dau (12-23): ");
    scanf("%d", &gioBatDau);
    printf("Nhap gio ket thuc (12-23): ");
    scanf("%d", &gioKetThuc);
    
  
    if (gioBatDau < 12 || gioBatDau > 23 || gioKetThuc < 12 || gioKetThuc > 23) {
        printf("Gio khong hop le! Quan chi hoat dong tu 12h den 23h.\n");
        return;
    }
    
    if (gioKetThuc <= gioBatDau) {
        printf("Gio ket thuc phai lon hon gio bat dau!\n");
        return;
    }
    
    int soGio = gioKetThuc - gioBatDau;
    long long tien = 0;
    
   
    if (soGio <= 3) {
        tien = soGio * 150000;
    } else {
        tien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
    }
    
   
    if (gioBatDau >= 14 && gioBatDau <= 17) {
        tien = tien * 0.9;
        printf("Duoc giam them 10% vi hat trong khung gio 14h-17h.\n");
    }
    
    printf("\nTHONG TIN THANH TOAN:\n");
    printf("- So gio hat: %d gio\n", soGio);
    printf("- Tong tien can thanh toan: %.0lf VND\n", (double)tien);
}


void chucNang4() {
    float soKwh;
    printf("Nhap so kWh dien su dung: ");
    scanf("%f", &soKwh);
    
    long long tien = 0;
    
    if (soKwh <= 50) {
        tien = soKwh * 1678;
    } else if (soKwh <= 100) {
        tien = 50 * 1678 + (soKwh - 50) * 1734;
    } else if (soKwh <= 200) {
        tien = 50 * 1678 + 50 * 1734 + (soKwh - 100) * 2014;
    } else if (soKwh <= 300) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (soKwh - 200) * 2536;
    } else if (soKwh <= 400) {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (soKwh - 300) * 2834;
    } else {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (soKwh - 400) * 2927;
    }
    
    printf("\nSo tien dien can thanh toan: %lld VND\n", tien);
}


void chucNang5() {
    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int soTo[9] = {0};
    long long soTien;
    
    printf("Nhap so tien can doi: ");
    scanf("%lld", &soTien);
    
    long long tienConLai = soTien;
    
    for (int i = 0; i < 9; i++) {
        if (tienConLai >= menhGia[i]) {
            soTo[i] = tienConLai / menhGia[i];
            tienConLai = tienConLai % menhGia[i];
        }
    }
    
    printf("\nCach doi tien %lld VND:\n", soTien);
    for (int i = 0; i < 9; i++) {
        if (soTo[i] > 0) {
            printf("- %d to %d\n", soTo[i], menhGia[i]);
        }
    }
}


void chucNang6() {
    long long soTienVay;
    float laiSuat = 0.05; 
    int kyHan = 12;
    
    printf("Nhap so tien muon vay (VND): ");
    scanf("%lld", &soTienVay);
    
    long long tienGocHangThang = soTienVay / kyHan;
    long long tongTra = 0;
    
    printf("\nKET QUA TRA GOP 12 THANG:\n");
    printf("So tien vay: %lld VND\n", soTienVay);
    printf("Lai suat: %.0f%%/thang\n", laiSuat * 100);
    printf("Ky han: %d thang\n", kyHan);
    printf("\nChi tiet tra hang thang:\n");
    
    for (int thang = 1; thang <= kyHan; thang++) {
        long long tienLai = (soTienVay - (thang - 1) * tienGocHangThang) * laiSuat;
        long long tienTraThang = tienGocHangThang + tienLai;
        tongTra += tienTraThang;
        
        printf("Thang %d: %lld VND (Goc: %lld, Lai: %lld)\n", 
               thang, tienTraThang, tienGocHangThang, tienLai);
    }
    
    printf("\nTong so tien phai tra sau 12 thang: %lld VND\n", tongTra);
}


void chucNang7() {
    float phanTramVay;
    long long giaXe = 500000000; 
    int thoiHan = 24; 
    float laiSuatNam = 0.072; 
    
    printf("Nhap phan tram vay toi da (vi du: 80 - vay 80%% gia tri xe): ");
    scanf("%f", &phanTramVay);
    
    if (phanTramVay < 0 || phanTramVay > 100) {
        printf("Phan tram vay khong hop le!\n");
        return;
    }
    
    long long tienTraTruoc = giaXe * (100 - phanTramVay) / 100;
    long long tienVay = giaXe * phanTramVay / 100;
    float laiSuatThang = laiSuatNam / 12;
    long long tienGocHangThang = tienVay / thoiHan;
    
    printf("\nTHONG TIN VAY MUA XE:\n");
    printf("Gia tri xe: %lld VND\n", giaXe);
    printf("So tien tra truoc (%d%%): %lld VND\n", (int)(100 - phanTramVay), tienTraTruoc);
    printf("So tien vay (%d%%): %lld VND\n", (int)phanTramVay, tienVay);
    printf("Thoi han vay: %d thang\n", thoiHan);
    printf("Lai suat nam: %.1f%%\n", laiSuatNam * 100);
    
    printf("\nSO TIEN PHAI TRA HANG THANG:\n");
    for (int thang = 1; thang <= thoiHan; thang++) {
        long long tienLai = (tienVay - (thang - 1) * tienGocHangThang) * laiSuatThang;
        long long tienTraThang = tienGocHangThang + tienLai;
        printf("Thang %d: %lld VND (Goc: %lld, Lai: %lld)\n", 
               thang, tienTraThang, tienGocHangThang, tienLai);
    }
}


void chucNang8() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("So luong sinh vien phai lon hon 0!\n");
        return;
    }
    
    char hoTen[100][50];
    float diem[100];
    
  
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ho ten: ");
        fflush(stdin);
        fgets(hoTen[i], sizeof(hoTen[i]), stdin);
        hoTen[i][strcspn(hoTen[i], "\n")] = 0;
        printf("Diem: ");
        scanf("%f", &diem[i]);
    }
    
  
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diem[i] < diem[j]) {
         
                float tempDiem = diem[i];
                diem[i] = diem[j];
                diem[j] = tempDiem;
              
                char tempTen[50];
                strcpy(tempTen, hoTen[i]);
                strcpy(hoTen[i], hoTen[j]);
                strcpy(hoTen[j], tempTen);
            }
        }
    }
    
    // Xuất kết quả
    printf("\n=== DANH SACH SINH VIEN SAP XEP THEO DIEM GIAM DAN ===\n");
    printf("%-5s %-30s %-10s %-15s\n", "STT", "Ho ten", "Diem", "Hoc luc");
    for (int i = 0; i < n; i++) {
        char hocLuc[20];
        if (diem[i] >= 9.0) strcpy(hocLuc, "Xuat sac");
        else if (diem[i] >= 8.0) strcpy(hocLuc, "Gioi");
        else if (diem[i] >= 6.5) strcpy(hocLuc, "Kha");
        else if (diem[i] >= 5.0) strcpy(hocLuc, "Trung binh");
        else strcpy(hocLuc, "Yeu");
        
        printf("%-5d %-30s %-10.2f %-15s\n", i + 1, hoTen[i], diem[i], hocLuc);
    }
}

void chucNang9() {
    int so1, so2;
    int random1, random2;
    
    printf("Nhap so thu nhat (01-15): ");
    scanf("%d", &so1);
    printf("Nhap so thu hai (01-15): ");
    scanf("%d", &so2);
    
    if (so1 < 1 || so1 > 15 || so2 < 1 || so2 > 15) {
        printf("So nhap vao phai trong khoang 01-15!\n");
        return;
    }
    
    random1 = rand() % 15 + 1;
    random2 = rand() % 15 + 1;
    
    printf("\nKET QUA QUAY SO:\n");
    printf("So ban chon: %02d - %02d\n", so1, so2);
    printf("Ket qua: %02d - %02d\n", random1, random2);
    
    int trung = 0;
    if (so1 == random1 || so1 == random2) trung++;
    if (so2 == random1 || so2 == random2) trung++;
    
    printf("\nKET QUA TRUNG GIAI:\n");
    if (trung == 0) {
        printf("Chuc ban may man lan sau!\n");
    } else if (trung == 1) {
        printf("Chuc mung ban da trung giai nhi!\n");
    } else {
        printf("Chuc mung ban da trung giai nhat!\n");
    }
}

// 10. Chức năng tính toán phân số
void chucNang10() {
    struct PhanSo {
        int tu;
        int mau;
    } ps1, ps2, kq;
    
    char phepTinh;
    
    printf("Nhap phan so thu nhat (tu mau): ");
    scanf("%d %d", &ps1.tu, &ps1.mau);
    printf("Nhap phan so thu hai (tu mau): ");
    scanf("%d %d", &ps2.tu, &ps2.mau);
    
    if (ps1.mau == 0 || ps2.mau == 0) {
        printf("Mau so phai khac 0!\n");
        return;
    }
    
    printf("Chon phep tinh (+, -, *, /): ");
    fflush(stdin);
    scanf("%c", &phepTinh);
    
    switch (phepTinh) {
        case '+':
            kq.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
            kq.mau = ps1.mau * ps2.mau;
            break;
        case '-':
            kq.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
            kq.mau = ps1.mau * ps2.mau;
            break;
        case '*':
            kq.tu = ps1.tu * ps2.tu;
            kq.mau = ps1.mau * ps2.mau;
            break;
        case '/':
            if (ps2.tu == 0) {
                printf("Khong the chia cho 0!\n");
                return;
            }
            kq.tu = ps1.tu * ps2.mau;
            kq.mau = ps1.mau * ps2.tu;
            break;
        default:
            printf("Phep tinh khong hop le!\n");
            return;
    }
    
    // Rút gọn phân số
    int ucln = timUCLN(abs(kq.tu), abs(kq.mau));
    kq.tu /= ucln;
    kq.mau /= ucln;
    
    if (kq.mau < 0) {
        kq.tu = -kq.tu;
        kq.mau = -kq.mau;
    }
    
    printf("\nKET QUA: ");
    if (kq.mau == 1) {
        printf("%d\n", kq.tu);
    } else {
        printf("%d/%d\n", kq.tu, kq.mau);
    }
}