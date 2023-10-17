#include <stdio.h>
#include <stdlib.h>

int main()
{
      float a,b,c,x,xone, xtwo , delta  ;

    printf("saisie de a et b de ax^2+bx+c=0 \n");
    printf("saisie a \n");
    scanf("%f",&a);
    printf("saisie b \n");
    scanf ("%f",&b);
        printf("saisie c \n");
    scanf ("%f",&c);

    if (a==0)
    {
      if (b!=0)

    {
        x= -c/b;
        printf("la solution est %f",x);
    }
    else if ( c!=0)
        printf("x n existe pas ");
    else if (  c==0)
        printf ("il y a une infinite de solution pour x");
   return 0 ;
    }
    else
    {
        delta = pow(b,2) - 4*a*c ;
        if (delta < 0)
            printf("il n y a pas de solutions sur R");
        else if (delta >0 )
        {
            xone= (-b-sqrt(delta))/(2*a) ;
            xtwo= (-b+sqrt(delta))/(2*a) ;
            printf ("vos solutions sont %f et %f ",xone,xtwo);
        }
        else if (delta==0)
        {
            xone=xtwo=-b/(2*a);
            printf ("vos solutions sont %f et %f ",xone,xtwo);


        }
    }

}
