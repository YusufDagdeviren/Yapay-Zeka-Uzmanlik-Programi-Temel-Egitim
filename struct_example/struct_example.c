#include <stdio.h>

struct data {
    float amount;
    char fname[30];
    char lname[30];
} rec;

struct point {
    int x;
    int y;

};
struct rect {
    struct point pt1;
    struct point pt2;
};
struct point makepoint(int x, int y){
    struct point temp;
    temp.x = x;
    temp.y = y;
    return temp;
}


// printRecord fonksiyonunun tanımı
void printRecord(struct data x) {
    printf("First Name: %s\n", x.fname);
    printf("Last Name: %s\n", x.lname);
    printf("Donation Amount: %.2f\n", x.amount);
}

int main(void) {
    // printf("Enter the donor's first and last names\n");
    // printf("separated by a space: ");
    // scanf("%s %s", rec.fname, rec.lname);

    // printf("Enter the donation amount: ");
    // scanf("%f", &rec.amount); // %lf yerine %f kullanılmalı

    // printRecord(rec);


    struct rect screen;
    struct point middle;

    screen.pt1 = makepoint(0,0);
    screen.pt2 = makepoint(50,100);
    middle = makepoint((screen.pt1.x + screen.pt2.x)/2, 
    (screen.pt1.y + screen.pt2.y)/2);
    printf("%d %d",middle.x,middle.y);

    return 0;
}
