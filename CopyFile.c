#include<stdio.h>

int main(){
    FILE* srcfile;
    FILE* tarfile;
    char* source="source.txt";
    char* target="target.txt";

    srcfile=fopen(source,"r");

    tarfile=fopen(target,"w");

    char ch;
    do{
        ch=fgetc(srcfile);
        if(ch!=EOF) fputc(ch,tarfile);

    }while(ch != EOF);

    printf("File copied!!!");

}