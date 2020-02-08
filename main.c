#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatedes(int [],int nbdes);

void generatedes(int lesdes[],int nbdes) {
for(int i=0;i<nbdes;i++)
{
    lesdes[i]=random()%6+1;
}

}

int main() {
    srand(time(NULL));
    int tabdes[6];
    generatedes(tabdes,5);
    for(int i;i<5;i++)
    {
        printf("%d ",tabdes[i]);
    }

    return 0;
}
