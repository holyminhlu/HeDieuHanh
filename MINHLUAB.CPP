#include<stdio.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>

#define byte unsigned char
#define word unsigned int
#define DWORD unsigned long

typedef struct Entry{
	byte FileName[8];
	byte ExName[3];
	byte Atribute;
	byte temp[10];
	word Time;
	word Date;
	word FirstCluster;
	DWORD FileSize;
	};
void main(){
	clrscr();
	Entry RDET[224];
	if(absread(0,32,24,&RDET)!=0){
		printf("Loi doc FIle");
		getch();
		exit(0);
	}
	for( int i=0; i<=223; i++){
	   if(RDET[i].FileName[0]!=0x5E || RDET[i].Atribute!=0xF0||RDET[i].Atribute!=0x00){
		printf("Ten ngan: ");
		for( int j=0; j<8; j++){
			printf("%c",RDET[i].FileName[j]);
		}
		printf("Ten mo rong: ");
		for( int k=0; k<3; k++ ){
			printf("%c",RDET[i].ExName[k]);
		}
		printf("Thuoc tinh trang thai: ");
}}	   }