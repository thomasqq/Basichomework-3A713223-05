#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int hr1,min1,sec1,sectotol1;
	int hr2,min2,sec2,sectotol2;
	int seclater;
	
	printf("�ɤ���p�o�γr���j�}\n");
	printf("�п�J�Ĥ@�Ӯɶ�:");
	scanf("%d,%d,%d",&hr1,&min1,&sec1);
	printf("�п�J�ĤG�Ӯɶ�:");
	scanf("%d,%d,%d",&hr2,&min2,&sec2);
		
	sectotol1=hr1*3600+min1*60+sec1;
	sectotol2=hr2*3600+min2*60+sec2;
	seclater=sectotol1-sectotol2;
	
	printf("��Ӯɶ����j����Ƭ�%d\n",abs(seclater));
	
	system("PAUSE");
	return 0;
}
