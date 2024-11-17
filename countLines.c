#include<stdio.h>

void Words(char* source){
    FILE* srcfile;
    srcfile=fopen(source,"r");

    char ch=fgetc(srcfile);
    int words=1;
    while(ch!=EOF){
        if(ch == ' ' || ch == '\n' || ch == '\t') words++;
        ch=fgetc(srcfile);
    }
    printf("Words are %d\n",words);
    
}

void lines(char* source){
    FILE* srcfile;
    srcfile=fopen(source,"r");

    char ch=fgetc(srcfile);
    int lines=0;
    while(ch!=EOF){
        if(ch =='\n') lines++;
        ch=fgetc(srcfile);
    }
    printf("Lines are %d\n",lines);
}

void charac(char* source){
    FILE* srcfile;
    srcfile=fopen(source,"r");

    char ch=fgetc(srcfile);
    int characters=0;
    while(ch!=EOF){
        if(ch !='\n' && ch!=' ' ) characters++;
        ch=fgetc(srcfile);
    }
    printf("Characters are %d\n",characters);
}


int main(){
   
    char* source="source.txt";

    Words(source);
    lines(source);
    charac(source);
}