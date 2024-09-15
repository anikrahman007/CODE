#include<stdio.h>
#include<cs50.h>
#include<string.h>

void sort(int n);
int main(void){

    int height = get_int("Enter Your Height: ");

    sort(height);
}

void sort(int n){
    //if nothing to draw
    if(n <= 0){
        return;
    }
    // if pyramid height n-1
    sort(n-1);
    //print one more row
    for(int i = 0; i < n; i++){
        printf("#");
    }
    printf("\n");
}
