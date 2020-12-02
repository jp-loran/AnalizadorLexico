#include<stdio.h>
#include<stdlib.h>
char c;
int n=0;
char* arrayAtomos=NULL;
size_t size;

// char leeSiguiente();

char crearArray(FILE* archAtomos);
void P();
void DP();
void Y();
void D();
void V();
void L();
void G();
void C();
void YP();
void VP();
void B();
void S();
//producciones charly
void J();
void N();
void R();
void K();
void E();
void EP();
void T();
void TP();
void F();
void A();
void M();
void Z();
void Q();
void QP();

char crearArray(FILE* archAtomos){
    if(archAtomos!= NULL){
            size=1;
            while(getc(archAtomos)!=EOF){
                size++;
            }
        }
        arrayAtomos=(char*)malloc(sizeof(char)*size);
        fseek(archAtomos,0,SEEK_SET);
        for (size_t i =0; i<size-1;i++){
            arrayAtomos[i]=(char)getc(archAtomos);
        }
        arrayAtomos[size-1]='\0';
    return arrayAtomos[n];
}

char leeSiguiente(){
    n++;
    return arrayAtomos[n];
}

void P(){
    if (c=='b' || c=='c' || c=='f' || c=='n' || c=='g'|| c=='[')
    {
        DP();
        Y();
        YP();
        return;
    }
    else
    {
        printf("Algo esta mal en P \n");
    }   
}
void DP(){
    if (c=='b' || c=='c' || c=='f' || c=='n' || c=='g')
    {
        D();
        DP();
        printf("Estamos en DP \n");
        return;
    }else if(c=='['||c=='a'||c=='x'||c=='i'||c=='w'||c=='h'||c=='p'||c=='u'||c=='t'||c=='}')
    {
        return;
    }
    else
    {
        printf("Algo esta mal en DP \n");
    }
}
void D(){
    if (c=='b' || c=='c' || c=='f' || c=='n' || c=='g')
    {
        V();
        L();
        if (c==':')
        {
            c=leeSiguiente();
            printf("Estamos en D; siguiente caracter %c \n",c);
            return;
        }else{printf("Algo esta mal ****** \n");}
    
    }else
    {
        printf("Algo esta mal en D \n");  
    }
}
void V(){
    if (c=='b' || c=='c' || c=='f' || c=='n' || c=='g'){
        c=leeSiguiente();
        printf("Estamos en V; siguiente caracter %c \n",c);
        return;
    }else
    {
        printf("Algo esta mal en V \n");
    }
    
}
void L(){
    if (c=='a')
    {
        c=leeSiguiente();
        printf("Estamos en L; siguiente caracter %c \n",c);
        G();
        C();
        return;
    }else
    {
        printf("Algo esta mal en L \n");
    }
}
void G(){
    if (c=='[')
    {
        c=leeSiguiente();
        if (c=='e')
        {
            c=leeSiguiente();
            if (c==']')
            {                
                c=leeSiguiente();
                printf("Estamos en G; siguiente caracter %c \n",c);
                return;
            }else{printf("Algo esta mal \n");}
            
        }else{printf("Algo esta mal \n");}
        
    }else if(c==',' ||c==':' ||c==')' ||c=='*' ||c=='/' ||c=='%' ||c=='#' ||c=='+' ||c=='-' ||c=='!' ||c=='?' ||c=='<'||c=='>'||c=='y'||c=='m'){
        return;
    }
    else
    {
        printf("Algo esta mal en G\n");  
    }
    
    
}
void C(){
    if (c==',')
    {
        c=leeSiguiente();
        L();
        printf("Estamos en C \n");
        return;
    }else if(c==':'){
        return;
    }else
    {
        printf("Algo esta mal en C \n");  
    }
}
void Y(){
    if (c=='[')
    {
        c=leeSiguiente();
        VP();
        if (c=='a')
        {
            c=leeSiguiente();
            if (c=='(')
            {
                c=leeSiguiente();
                if (c==')')
                {
                    c=leeSiguiente();
                    if (c=='{')
                    {
                        c=leeSiguiente();
                        printf("Estamos en Y; siguiente caracter: %c \n",c);
                        DP();
                        B();
                        if (c=='}')
                        {
                            c=leeSiguiente();
                            if (c==']')
                            {
                                c=leeSiguiente();
                                return;
                            }else{printf("Algo esta mal \n");}
                            
                        }else{printf("Algo esta mal \n");}
                        
                    }else{printf("Algo esta mal \n");}
                    
                }else{printf("Algo esta mal \n");}
                
            }else{printf("Algo esta mal \n");}
            
        }else{printf("Algo esta mal \n");}
        
    }else if(c==':'){
        return;
    }else
    {
        printf("Algo esta mal en Y \n");  
    }   
}
void YP(){
    if (c=='[')
    {
        Y();
        YP();
        return;
    }else if (c=='\0' || c==']')
    {
        return;
    }else
    {
        printf("Algo esta mal en YP \n");  
    }
}
void VP(){
    if (c=='b' || c=='c' || c=='f' || c=='n' || c=='g')
    {
        V();
        return;
    }else if (c=='o')
    {
        c=leeSiguiente();
        return;
    }else{
        printf("Algo esta mal en VP");
    }
}
void B(){
    if (c=='['||c=='a'||c=='x'||c=='i'||c=='w'||c=='h'||c=='p'||c=='u'||c=='t')
    {
        S();
        B();
        return;
    }
    else if(c=='}'||c==']'){
        return;
    }
    else
    {
        printf("Algo esta mal en B");
    }
}


void S(){
    printf("estamos en S");
    return;
}
/*void S(){ 
    if (c=='a')
    {
        A();
        return;
    }
    else if (c=='x')
    {
        X();
        return;
    }
    else if (c=='i')
    {
        I();
        return;
    }
    else if(c=='w')
    {
        W();
        return;
    }
    else if (c=='h')
    {
        H();
        return;
    }
    else if(c=='p')
    {
        N();
        return;
    }
    else if (c=='u')
    {
        c=leeSiguiente();
        U();
        if (c==':')
        {
            c=leeSiguiente();
            return;
        }else
        {
            printf("Algo esta mal en S :");
        }       
        
    }
    
} */

void J(){
    if (c=='l'){
        c=leeSiguiente();
        if (c=='{'){
            B();
            if (c=='}'){
                return;
            }
            else{
                printf("Algo esta mal en J \n");
            } 
        }
        else{
            printf("Algo esta mal en J \n");
        } 
    }
    else if (c==':'){
        return;
    }else{
        printf("Algo esta mal en J \n");
    }
}

void N(){
    if (c=='p'){
        c=leeSiguiente();
        if (c=='['){
            c=leeSiguiente();
            if (c=='e'){
                c=leeSiguiente();
                if (c==']'){
                    c=leeSiguiente();
                    if (c=='{'){
                        c=leeSiguiente();
                        B();
                        if (c=='}'){
                            c=leeSiguiente();
                            return;
                        }else{
                            printf("Algo esta mal en N \n");
                        }
                    }else{
                        printf("Algo esta mal en N \n");
                    }
                }else{
                    printf("Algo esta mal en N \n");
                }  
            }else{
                printf("Algo esta mal en N \n");
            }
        }else{
            printf("Algo esta mal en N \n");
        }  
    }else{
        printf("Algo esta mal en N \n");
    }
}

void R(){
    if (c=='(' || c=='a' ||c=='e' || c=='r' || c=='[' ){
        E();
        K();
        E();
        return;
    }else{
        printf("Algo esta mal en R \n");
    }
}

void K(){
    if (c=='!' || c=='?' || c=='>' || c=='<' || c=='y' ||c=='m'){
        c=leeSiguiente();
        printf("Estamos en K, caracter %c",c);
        return;
    }else{
        printf("Algo esta mal en K \n");
    }
}

void E(){
    if (c=='(' || c=='a' || c=='e' || c=='r' || c=='['){
        T();
        EP();
        return;
    }else{
        printf("Algo esta mal en E \n");
    }

}

void EP(){
    if (c=='+'){
        c=leeSiguiente();
        T();
        EP();
        return;
    }
    else if (c=='-'){
        c=leeSiguiente();
        T();
        EP();
    }
    else if (c==')' || c=='!' || c=='?' || c=='>'|| c=='<'|| c=='y'|| c=='m'|| c==':'){
        return;
    }else{
        printf("Algo esta mal en EP \n");
    }
}

void T(){
    if (c=='(' || c=='a' || c=='e' || c=='r' || c=='['){
        F();
        TP();
        return;
    }else{
        printf("Algo esta mal en T \n");
    }

}

void TP(){
    if (c=='*'){
        c=leeSiguiente();
        F();
        TP();
        return;
    }
    else if(c=='/'){
        c=leeSiguiente();
        F();
        TP();
        return;
    }
    else if(c=='%'){
        c=leeSiguiente();
        F();
        TP();
        return;
    }
    else if(c=='#'){
        c=leeSiguiente();
        F();
        TP();
        return;
    }
    else if(c=='+' ||c=='-' ||c==')' ||c=='!' ||c=='?' ||c=='>' ||c=='<' ||c=='y' ||c=='m' ||c==':' ){
        return;
    }
    else{
        printf("Algo esta mal en TP \n");
    }
}

void F(){
    if (c=='('){
        c=leeSiguiente();
        E();
        if(c==')'){
            return;
        }else{
            printf("Algo esta mal en F \n");
        }
    }
    else if(c=='a'){
        c=leeSiguiente();
        G();
        return;
    }
    else if(c=='e'){
        return;
    }
    else if(c=='r'){
        return;
    }
    else if (c=='['){
        c=leeSiguiente();
        if (c=='a'){
            c=leeSiguiente();
            if(c=='('){
                c=leeSiguiente();
                if(c==')'){
                    c=leeSiguiente();
                    if(c==']'){
                        return;
                    }else{
                        printf("Algo esta mal en F \n");
                    }
                }else{
                    printf("Algo esta mal en F \n");
                }
            }else{
                printf("Algo esta mal en F \n");
            }
        }else{
            printf("Algo esta mal en F \n");
        }
    }
    else{
        printf("Algo esta mal en F \n");
    }
}

void A(){
    if (c=='a'){
        c=leeSiguiente();
        if (c=='='){
            c==leeSiguiente();
            M();
            if (c==':'){
                return;
            }else{
              printf("Algo esta mal en A \n");  
            }
        }else{
            printf("Algo esta mal en A \n");
        }
    }else{
        printf("Algo esta mal en A \n");
    }
}

void M(){
    if (c=='(' ||c=='a' ||c=='e' ||c=='r' ||c=='[' ||c=='s'){
        QP();
        return;
    }
    else if(c=='+'){
        c=leeSiguiente();
        Q();
        Z();
        return;
    }else{
        printf("Algo esta mal en M \n");
    }
}

void Z(){
    if(c==','){
        c=leeSiguiente();
        Q();
        Z();
        return;
    }
    else if (c==':'){
        return;
    }
    else{
        printf("Algo esta mal en Z \n");
    }
}

void Q(){
    if(c=='a'){
        c=leeSiguiente();
        return;
    }
    else if(c=='s'){
        c=leeSiguiente();
        return;
    }
}

void QP(){
    if(c=='s'){
        c=leeSiguiente();
        return;
    }
    else if(c=='(' ||c=='a' ||c=='e' ||c=='r' ||c=='[' ){
        E();
        return;
    }
}
