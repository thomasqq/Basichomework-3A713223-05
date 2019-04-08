#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int hr1,min1,sec1,sectotol1;
	int hr2,min2,sec2,sectotol2;
	int seclater;
	
	printf("時分秒計得用逗號隔開\n");
	printf("請輸入第一個時間:");
	scanf("%d,%d,%d",&hr1,&min1,&sec1);
	printf("請輸入第二個時間:");
	scanf("%d,%d,%d",&hr2,&min2,&sec2);
		
	sectotol1=hr1*3600+min1*60+sec1;
	sectotol2=hr2*3600+min2*60+sec2;
	seclater=sectotol1-sectotol2;
	
	printf("兩個時間間隔的秒數為%d\n",abs(seclater));
	
	system("PAUSE");
	return 0;
}
