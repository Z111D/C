
#include <stdio.h>
#include <string.h>

int iszf(char a){
    if(a>='0' && a<='9'){
        return 1;
    }
    if(a>='a' && a<='z'){
        return 1;
    }
    if(a>='A' && a<='Z'){
        return 1;
    }
    return 0;
}

char zxxx(char a){
    if(a>='A' && a<='Z'){
        if(a=='I'){
            return 'I';
        }else{
            return a+32;
        }
    }
    return a;
}

int main(){
    int n;
    scanf("%d\n",&n);
    while(n--){
        char a[1010],b[1010];
        int la=0,lb=0;
        gets(a);
        printf("%s\n",a);
        la=strlen(a);
        int lk=0;
        int ff=0;
        for(int i=0;i<la;i++){
            if(a[i]==' '){
                lk++;
            }else if(!iszf(a[i])){
                lk=0;
                ff=1;
                b[lb++]=zxxx(a[i]);
            }else{
                if(lk>0 && ff){
                    b[lb++]=' ';
                }
                lk=0;
                ff=1;
                b[lb++]=zxxx(a[i]);
            }
        }
        b[lb]=0;
        printf("AI: ");
        for(int i=0;i<lb;i++){
            if(   (b[i]=='I')&&
                        (i==0||!iszf(b[i-1]))&&
                        (!iszf(b[i+1]))
                    ){
                printf("you");
            }else if(   (b[i]=='m'&&b[i+1]=='e')&&
                        (i==0||!iszf(b[i-1]))&&
                        (!iszf(b[i+2]))
                    ){
                printf("you");
                i+=1;
            }else if(b[i]=='?'){
                printf("!");
            }else if(   (b[i]=='c'&&b[i+1]=='a'&&b[i+2]=='n'&&b[i+3]==' '&&b[i+4]=='y'&&b[i+5]=='o'&&b[i+6]=='u')&&
                        (i==0||!iszf(b[i-1]))&&
                        (!iszf(b[i+7]))
                    ){
                printf("I can");
                i+=6;
            }else if(   (b[i]=='c'&&b[i+1]=='o'&&b[i+2]=='u'&&b[i+3]=='l'&&b[i+4]=='d'&&b[i+5]==' '&&b[i+6]=='y'&&b[i+7]=='o'&&b[i+8]=='u')&&
                        (i==0||!iszf(b[i-1]))&&
                        (!iszf(b[i+9]))
                    ){
                printf("I could");
                i+=8;
            }
            else{
                printf("%c",b[i]);
            }
        }
        printf("\n");

    }
    return 0;
}
