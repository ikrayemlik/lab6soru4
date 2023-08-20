#include <stdio.h>
#include <stdlib.h>

/* 4. Klavyeden alýnan iki tane karakter dizisini (String) birleþtirip ekrana yazdýran programý pointer
kullanarak C dilinde yazýnýz.*/
int main() {  
   
    char dizi1[100],dizi2[100];
    char *ptr1,*ptr2;
    
    
    
    
    printf("bir karakter dizisi girin:  ");
    gets(dizi1);
    
    printf("ikinci karakter dizisini girin:  ");
    gets(dizi2);
    
    
    int n=strlen(dizi1);
    int m=strlen(dizi2);
    
    for(ptr1=dizi1+n,ptr2=dizi2;ptr2<dizi2+m;ptr1++,ptr2++)
    {
    	*ptr1=*ptr2;
	}
	int i;
	printf("birlestirme\n");
	
	for(i=0;i<n+m;i++)
	{
		printf("%c",*(dizi1+i));
	}
    
    
 return 0;
}

	
	
	
	
	return 0;
}
