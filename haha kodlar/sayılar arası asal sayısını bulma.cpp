#include <stdio.h>
#include <stdlib.h>
int main()

{
	int Snumber=1000,Enumber=2000,counter=0,sayi_araligi=0,asal_sayi_miktari=0;
	sayi_araligi=Enumber-Snumber;
	while(Snumber<Enumber)
	{
			int divide=2;
			A1:
			printf("divide is:%d\n", divide);
			printf("hesaplaniyor lütfen az bekle mq cocugu");
			if(Snumber%divide!=0)
			{
				divide++;
				goto A1;
			}
		

			if(Snumber%divide==0)
				{
				if(Snumber!=divide) {
					Snumber++;
					counter++;
					printf("cou oncesi : %d \n", divide);
					printf("cou++\n");			
				}
				else {
					Snumber++;
				}
			}
	}
	asal_sayi_miktari=sayi_araligi- counter;
	printf("%d\n",asal_sayi_miktari);
	
	system("pause");
	return 0;
	
	
	
}
