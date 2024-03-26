#include "list.h"
zfmm(char *zf){
	char z[100];
	printf("请输入您的支付密码\n");
	scanf("%s",&z);
	while(strcmp(z,zf)!=0){
		printf("输入错误，请重新输入支付密码\n");
		scanf("%s",&z);
	}
}
