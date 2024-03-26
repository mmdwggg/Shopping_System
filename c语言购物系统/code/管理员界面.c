#include "list.h"
glyxt(char *name,char* mm){
	int a; 
	printf("请选择您想进行的操作。\n"); 
	printf("1.进入用户管理系统\n"); 
	printf("2.进入商品管理系统\n");
	printf("3.进入会员管理系统\n");
	printf("4.修改信息\n");
	printf("5.注销管理员\n");
	printf("0.退出系统\n");
	scanf("%d",&a);
	int s=1;
	struct glynode *glylist=glycreat();
	glyread("gly.txt",glylist);
	switch(a){
		case 0:printf("正在退出\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("进入用户管理系统中\n");
		system("pause");
		system("cls");
		yhgl(name,mm);
		break; 
		case 2:printf("进入商品管理系统中\n");
		system("pause");
		system("cls"); 
		sp(name,mm);
		break;
		case 3:printf("进入会员管理系统中\n");
		system("pause");
		system("cls"); 
		hygl(name,mm); 
		break;
		case 4:	
		system("pause");
		system("cls");
		printf("请确认您真的想修改个人信息是:1否:0\n");
		scanf("%d",&s);
		if(s==1){
		printf("开始修改信息\n");
		glyxg(glylist,name);
		system("pause");
		system("cls"); 
		glywrite("gly.txt",glylist);
		printf("修改完成\n");
	}
		if(s==0){
			printf("取消修改\n");
		}
		if(s!=1&&s!=0){
			printf("输入错误\n"); 
		}
		break;
		case 5:
		printf("开始注销\n"); 
		system("pause");
		system("cls");
		printf("确认您是否要注销是:1否:0");
		int b;
		scanf("%d",&b);
		if(b==1){
		glysc(glylist,name);
		glywrite("gly.txt",glylist);
		printf("谢谢您对本购物系统的体验，再见\n");
		exit(0); 
	}
		if(b==0){	
		printf("取消注销\n");
		}
		if(b!=0&&b!=1){
		printf("输入错误\n");
		}
		break;
		default:printf("选择错误\n");
		system("pause");
		system("cls"); 
		break;
	}
}
