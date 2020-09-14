void fct (int);         // fonction A 
void fct (float); 		// fonction B
void fct (int,float); 	// fonction C
void fct (float,int); 	// fonction D

int main () {
    
    int n,p;
    float x,y;
    char c;
    double z;

    /*
    Les appels suivants des fonctions sont ils corrects ? 
    Si oui, quels sont les fonctions appelées et quelles sont éventuellement les conversions mises en place ?
    */

    fct (n); //correct fonction A
    fct (x);// correct fonction B
    fct (n,x);//correct fontion C
    fct (x,n);//correct fonction D
    fct (c);//incorect 
    fct (n,p);//incorrect --le P sera convertis en float--
    fct (n,c);//incorrect fonction D
    fct (n,z);//incorect fonction C
}