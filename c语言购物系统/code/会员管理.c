#include "list.h"
void hygl(char *name,char mm){
	int a; 
	printf("请选择您想进行的操作。\n"); 
	printf("1.查看会员列表\n"); 
	printf("2.返回上一级\n"); 
	printf("3.查看会员愿望单\n"); 
	printf("0.退出系统\n");
	scanf("%d",&a);
	struct yhnode *yhlist=yhcreat();
	yhread("yh.txt",yhlist);
	struct ywdnode *ywdlist=ywdcreat();
	ywdread("ywd.txt",ywdlist);
	switch(a){
		case 0:printf("正在退出\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("以下为会员列表\n");
		system("pause");
		system("cls");
		struct yhnode *move=yhlist->next;
		printf("账号\t\t电话\t\t收货地址\t\t微信\t\t会员等级\n");
		while(move){
		if(move->data.hy>0){
			printf("%s\t%15s\t%15s\t%15s\t\t\t%d\n",move->data.name,move->data.tel,move->data.p,move->data.vx,move->data.hy);
		}
			move=move->next;
	}
			system("pause");
		system("cls");
		break; 
		case 2:
		system("pause");
		system("cls");
		break; 
		case 3:
		system("pause");
		system("cls");
		printf("以下为会员愿望单\n");
		ywddy(ywdlist);
		break; 
		default:printf("选择错误\n");
		system("pause");
		system("cls"); 
		break;
	}
	glyxt(name,mm);
} 
