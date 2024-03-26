#include "list.h"
void yhgl(char *name,char* mm){
	int a; 
	printf("请选择您想进行的操作。\n"); 
	printf("1.查看用户信息\n"); 
	printf("2.注销违规用户\n");
	printf("3.返回上一界面\n");
	printf("0.退出系统\n");
	scanf("%d",&a);
	struct yhnode *yhlist=yhcreat();
	yhread("yh.txt",yhlist);
	switch(a){
		case 0:printf("正在退出\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("查看用户信息\n");
		system("pause");
		system("cls");
		printf("以下为用户列表\n");
		yhdy(yhlist);
		system("pause");
		system("cls");
		break; 
		case 2:	
		printf("开始注销\n"); 
		system("pause");
		system("cls");
		printf("输入该用户的昵称\n");
		char n[100];
		scanf("%s",&n);
		yhsc1(yhlist,n,name,mm);
		yhwrite("yh.txt",yhlist);
		break;
		case 3:
		system("pause");
		system("cls");
		break;
		default:printf("选择错误\n");
		system("pause");
		system("cls"); 
		break;
	}
	glyxt(name,mm);
}
