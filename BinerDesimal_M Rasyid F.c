// Nama : M Rasyid F
// deskripsi : convert binary to decimal

#include <stdio.h>
#include <math.h>

long long int binary ;
int decimal = 0 ;

void scan(void) ;
void convert(void) ;
void print(void) ;

int main(){
    //algorithm
    scan() ;
    convert() ;
    print() ;
    getch() ;
    return 0;
}

void scan(){
    scanf("%d", &binary) ;
}

void convert(){
    //rumus : decimal+= d x 2^power
    int d = 0, power = 0 ;

    while (binary != 0){
        d = binary % 10 ;
        binary /= 10 ;
        decimal += d*pow(2, power) ;
        power++ ;
    }
}

void print(){
    printf("%d", decimal) ;
}