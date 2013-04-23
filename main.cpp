#include <iostream>

int main(int argc, const char * argv[])
{
    
    
    int age=0;
    int retour=1;
    
    
    
    while (retour) {
        
        printf("Bienvenue");
        
        printf("\nQuel age avez-vous ? ");
        scanf("%d",&age);
        
        
        if (age<14)
        {
            
            
            printf("90 pourcent de risque de developper une maladie mortelle avant 40 ans");
            
        }
        
        if (age>=14 && age<16)
        {
            
            printf("80 pourcent e risque de developper une maladie mortelle avant 40 ans ");
            
        }
        if (age>=16 && age<20)
        {
            printf("70 pourcent de risque de developper une maladie mortelle avant 40 ans");
        }
        
        if (age>=20)
        {
            printf("50 pourcent de risque de developper une maladie mortelle avant 40 ans");
            
            
        }
        
        printf("\nrecommencer ?");
        scanf("%d",&retour);
    }
    
    return 0;
    
    
    
    
}

