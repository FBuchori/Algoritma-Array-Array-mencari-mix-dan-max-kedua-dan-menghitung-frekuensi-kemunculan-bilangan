#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main ()
{
    int array [5]={0};
    int n,a,max=array[0],min,modus,x,y;
    for (a=0;a<5;a++)
    {
        printf ("Masukkan angka ke-%d : ",a+1);
        scanf ("%d",&n);
        array [a]=n;
        if (a==1)
            min=array[a];
        if (array[a]>max)
            max=array[a];
        if (array[a]<min)
            min=array[a];
    }
    for(x=0;x<5;x++)
    {
        for (y=1;y<5;y++)
        {
            if(array[y]==array[y-1])
            {
                modus=array[y];
            }
        }
    }
    printf("Nilai max = %d\n",max);
    printf("Nilai min = %d\n",min);
    printf ("Frekuensi kemunculan bilangan = %d",modus);

    return 0;
}
