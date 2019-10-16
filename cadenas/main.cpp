#include <iostream>

using namespace std;

void cambio(char *a,char *b){
    char c=*a;
    *a=*b;
    *b=c;
}

int cantidad(char *a){
    int tam=0;
    while(*a++ !='\0'){
        tam++;
    }
    return tam;
}


int inverI(char *a){
    int t=cantidad(a);
    char *fin=a+t-1;
    while(a<fin){
        cambio(a,fin);
        a++;
        fin--;
    }
}

void inverR(char *e,int i=0){
    int t=cantidad(e)-1;
    char*fin=e+t-i;
    if(e<fin){
        cambio(e,fin);
        cout<<e<<endl;
        return inverR(++e,++i);
    }
}
bool palindromo(char *a){
    int t=cantidad(a);
    char *fin=a+t-1;
    while(a<fin){
        if (*a==*fin){
            a++;
            fin--;
        }
        else
            return false;
    }
    return true;
}



int main()
{   char e[]="abcde";
   int t =cantidad(e);
   inverR(e);
   //cout<<palindromo(e)<<endl;
   cout<<e<<endl;
    return 0;
}
