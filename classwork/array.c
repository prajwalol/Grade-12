#include<stdio.h>
int mid(int, int, int);
int main(){
    int x, y, z, gr;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&x, &y, &z);
    gr = mid(x, y, z);
    printf("\n The middle number is %d",gr);
    return 0;
}

int mid(int x, int y, int z){
    int mid;
    if((x>y && y<x) || (y>z && y<z))
    mid = x;
    else if((y>x && y<z) || (y<z && y>z))
    mid = y;
    else
    mid = z;
    return mid; 
}