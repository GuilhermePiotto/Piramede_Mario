#include <cs50.h>
#include <stdio.h>

void draw(int h);

int main(void)
{
    int altura = get_int("Digite a altura do muro");
    draw(altura);
}
void draw(int h)
{
    for(int i=1;i<=h;i++)
    {
        for (int j =1; j<=i;j++)
        {
        printf("#");
        }
        printf("\n");
        
    }
    
}