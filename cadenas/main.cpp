#include <iostream>

using namespace std;

void cambio(char *a,char *b){
    char c=*a;
    *a=*b;
    *b=c;
}

int cantR(char *e){
    if(*e=='\0')
        return 0;
    else
        return 1+cantR(++e);
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

//cambiar el return porque void no ertorna nada
void inverR(char *e,int i=0){
    int t=cantidad(e)-1;
    char*fin=e+t-i;
    if(e<fin){
        cambio(e,fin);
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

bool palindromoR(char *e,int i=0){
    int t=cantidad(e)-1;
    char*fin=e+t-i;
    if(e<fin){
        if(*e==*fin)
            return palindromoR(++e,++i);

        else
            return false;
    }
    else
        return true;
    }






int main()
{   char e[]="abcvcba";
   int t =cantR(e);
   inverR(e);
   //cout<<palindromo(e)<<endl;
   cout<<palindromoR(e)<<endl;
    return 0;
}
