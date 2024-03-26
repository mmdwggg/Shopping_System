#include "list.h"
void yhzc(){
		struct yhnode *yhlist=yhcreat();
		yhread("yh.txt",yhlist);
		printf("请注册\n"); 
		system("pause");
		system("cls");
		struct yh a;
		char q[100];
		int b=0;
		printf("请输入您的昵称\n");
		scanf("%s",&a.name);
		b=yhcheck(yhlist,a.name);
		while(b==1){
		system("cls");
		printf("此昵称已经被占用，请换一个昵称");
		system("pause");
		printf("请输入您的昵称\n");
		scanf("%s",&a.name);
		b=yhcheck(yhlist,a.name);
		}
		system("cls");
		printf("请输入您的密码\n"); 
		scanf("%s",&a.mm);
		printf("请再次输入密码\n");
		scanf("%s",&q);
		system("pause");
		system("cls");
		while(strcmp(a.mm,q)!=0){
			printf("输入错误\n");
			printf("请再次输入密码\n");
			scanf("%s",&q); 
		} 
		printf("请输入您的电话\n"); 
		scanf("%s",&a.tel);
		system("pause");
		system("cls");
		printf("请输入您的收货地址\n"); 
		scanf("%s",&a.p);
		system("pause");
		system("cls");
		printf("请输入您的微信号码\n"); 
		scanf("%s",&a.vx);
		system("pause");
		system("cls");
		printf("请输入您的6位支付密码\n"); 
		scanf("%s",&a.zf);
		system("pause");
		system("cls");
		a.hy=0;
		yhcr(yhlist,a);
		yhwrite("yh.txt",yhlist);
		printf("注册成功，感谢您的使用\n");
		system("pause");
		system("cls");
}
