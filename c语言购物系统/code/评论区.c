#include "list.h"
pl(char *name,int hy,char *zf,struct gwcnode* gwclist){
	int a; 
	printf("请选择您想进行的操作。\n"); 
	printf("1.观看评论区\n"); 
	printf("2.写评价\n");
	printf("3.返回上一级\n"); 
	printf("0.退出系统\n");
	scanf("%d",&a);
	struct pl plq;
	struct plnode *pllist=plcreat();
	plread("pl.txt",pllist);
	struct gmnode *gmlist=gmcreat();
	gmread("gm.txt",gmlist);
	switch(a){
		case 0:printf("正在退出\n");
		system("pause");
		exit(0);
		break;
		case 1:
		system("pause");
		system("cls");
		pldy(pllist);
		break; 
		case 2:
		system("pause");
		system("cls");
		strcpy(plq.yhname,name);
		printf("请输入您想评价的商品名称\n");
		scanf("%s",plq.name);
		if(gmcheck(gmlist,name,plq.name)==1){ 
		printf("请输入您的评价\n");
		scanf("%s",plq.pl);
		plcr(pllist,plq);
		plwrite("pl.txt",pllist);
	}
		break;
		case 3:
		system("pause");
		system("cls");
		printf("正在返回\n");
		system("pause");
		system("cls");
		yhxt(name,hy,zf,gwclist);
		break;
		default:printf("选择错误\n");
		system("pause");
		system("cls"); 
		break;
	}
}
		
