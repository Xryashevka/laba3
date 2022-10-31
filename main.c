#include <stdio.h>


enum DAYS{
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday,
};

struct square{
    int length;
};
struct bitfield{
    unsigned Numlock: 1;
    unsigned CapsLock: 1;
    unsigned ScrollLock: 2;
};
union x{
    struct bitfield bit;
    unsigned int i;
};
int main() {
    printf("%d",monday );
    printf("\n");
    int x;
    printf("length =");
    scanf("%d",&x);
    struct square area = {x};
    printf(" Area = %d",area.length*area.length);
    printf("\n");

    union x y;
    scanf("%x",&y.i);
    printf("NumLock %s\n",(y.bit.Numlock==1)?"on":"off");
    printf("Capslock %s\n",(y.bit.CapsLock==1)?"on":"off");
    printf("ScrollLock %s\n",(y.bit.ScrollLock==1)?"on":"off");

    return 0;
}