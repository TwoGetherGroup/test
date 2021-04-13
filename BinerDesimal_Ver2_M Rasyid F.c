// Nama :M Rasyid F
// deskripsi : convert binary to decimal

#include <stdio.h>

char binary[32] ;
int decimal = 0 ;

void scan(void) ;
void convert(void) ;
void print(void) ;

int main(){
    //algorithm
    scan() ;
    convert() ;
    print() ;
    return 0;
}

void scan(){
    scanf("%[^\n]", &binary) ;
}

void convert(){
    int i ;

    for(i=0 ; binary[i] ; i++){
        decimal <<= 1 ;
        if (binary[i] == '1'){
            decimal += 1 ;
        }
    }
}

void print(){
    printf("%d", decimal) ;
}