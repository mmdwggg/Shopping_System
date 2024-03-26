#include "list.h"
void gwc(char *name,int hy,char *zf,struct gwcnode* gwclist){
	printf("请选择您的操作\n");
	printf("1.显示购物车商品\n");
	printf("2.返回上一级\n");
	printf("3.显示购物车内商品总价格\n");
	printf("4.从购物车中移除商品\n");
	printf("5.购买商品\n");
	printf("6.结账\n"); 
	printf("0.退出系统\n");	
	struct spnode *splist=spcreat();
	spread("sp.txt",splist);
	struct yhnode *yhlist=yhcreat();
	yhread("yh.txt",yhlist);
	struct gmnode *gmlist=gmcreat();
	gmread("gm.txt",gmlist);
	int p;
	int sr=0;
	sr=wread("w.txt");
	double w=0;
	int w1=0;
	int a; 
	scanf("%d",&a);
	switch(a){
		case 0:printf("正在退出\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("以下为您购物车内的商品\n");
		system("pause");
		system("cls");
		gwcdy(gwclist);
		break; 
		case 2:	
		system("pause");
		system("cls");
		while(1){
		yhxt(name,hy,zf,gwclist);
	}
		break;
		case 3:
		system("pause");
		system("cls");
		printf("您所购买的商品总价为:");
		struct gwcnode *mov=gwclist->next;
	while(mov){
		w+=mov->data.s;
		mov=mov->next;
	}
	if(hy==1) w*=0.95;
	if(hy==2) w*=0.9;
	if(hy==3) w*=0.8;
	while(w1<w){
		w1++;
	}
	printf("%d\n",w1);
		system("pause");
		system("cls");
		break;
		case 4:	
		printf("请输入您想删除的商品名称\n");
		char n[100];
		scanf("%s",&n);
		printf("您是否想删除这件商品是:1否:0\n");
		scanf("%d",&p);
		while(p!=0&&p!=1){
			printf("输入错误请重新输入\n");
			scanf("%d",&p);
		}
		if(p==1){
		gwcsc(gwclist,n,name,hy,zf); 
	}
		system("pause");
		system("cls");
		break;
		case 5:
		system("pause");
		system("cls");
		printf("请输入您想往购物车里添加的商品\n"); 
		char nam[100];
		scanf("%s",&nam);
		system("pause");
		system("cls");
	struct spnode* move=splist->next;
	while(strcmp(move->data.name,nam)!=0){
		move=move->next;
		if(move==NULL){
			printf("我们商店好像没有这种东西\n");
		system("pause");
		system("cls");
			return;
		}
	}
	if(move!=NULL){
			printf("您找的货如下如下\n");
			printf("    名称 \t\t类型  \t\t售价\t\t推荐状态\n");
			printf("%10s\t%12s\t%10d\t%10c\n",move->data.name,move->data.type,move->data.s,move->data.t);
			system("pause");
		system("cls");
		printf("该商品已放入您的购物车\n");
			gwccr(gwclist,move->data);
		system("pause");
		system("cls");
	}
		break;
		case 6:
		system("pause");
		system("cls");
		printf("您所购买的商品总价为:");
		struct gwcnode *mo=gwclist->next;
		struct gm data;
		strcpy(data.yhname,name);
	while(mo){
		strcpy(data.name,mo->data.name);
		gmcr(gmlist,data);
		w+=mo->data.s;
		mo=mo->next;
	}
	if(hy==1) w*=0.95;
	if(hy==2) w*=0.9;
	if(hy==3) w*=0.8;
	while(w1<w){
		w1++;
	}
	printf("%d\n",w1);
	if(w1>5000){
		printf("本次消费金额过高，理性消费哦，不许月底吃土\n");
	} 
	zfmm(zf);
	wwrite("w.txt",w1,sr);
	gmwrite("gm.txt",gmlist);
	printf("谢谢您的光临\n"); 
	hysj(name,hy,w,yhlist); 
		system("pause");
		system("cls");
		bb();
		system("pause");
		exit(0);
		break;
		default:printf("选择错误\n");
		system("pause");
		system("cls"); 
		break;
	}
}
