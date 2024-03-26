#include "list.h"
yhxt(char *name,int hy,char *zf,struct gwcnode* gwclist){
	int a; 
	printf("请选择您想进行的操作。\n"); 
	printf("1.显示商品\n"); 
	printf("2.按范围搜索商品\n");
	printf("3.买东西\n");
	printf("4.修改信息\n");
	printf("5.进入购物车\n");
	printf("6.退货\n");
	printf("7.注销\n");
	printf("8.显示本店大宝贝\n");
	printf("9.限时秒杀！\n");
	printf("10.愿望单\n");
	printf("11.种草与避雷\n");
	printf("12.购买记录\n");
	printf("0.退出系统\n");
	scanf("%d",&a);
	int q=1,s;
	double dz=0;
	int sj=0;
	int sr=0;
	sr=wread("w.txt");
	char t[100];
	struct ywd yw;
	struct ywdnode *ywdlist=ywdcreat();
	ywdread("ywd.txt",ywdlist);
	struct yhnode *yhlist=yhcreat();
	yhread("yh.txt",yhlist);
	struct spnode *splist=spcreat();
	spread("sp.txt",splist);
	struct msnode *mslist=mscreat();
	msread("ms.txt",mslist);
	struct gmnode *gmlist=gmcreat();
	gmread("gm.txt",gmlist);
	switch(a){
		case 0:printf("正在退出\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("以下为本店商品\n");
		system("pause");
		system("cls");
		spdy(splist);
		break; 
		case 2:
		system("pause");
		system("cls");
		ss();
		break;
		case 3:
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
		printf("该商品以放入您的购物车\n");
		gwccr(gwclist,move->data);
	}
		break;
		case 4:	
		printf("请确认您想修改个人信息是:1否:0");
		scanf("%d",&q); 
		system("pause");
		system("cls");
		while(q!=0&&q!=1){
			printf("输入错误请重新输入\n");
			scanf("%d",&q);
		}
		if(q==1){
		printf("开始修改信息\n");
		yhxg(yhlist,name,hy,zf,gwclist); 
		yhwrite("yh.txt",yhlist);
	}
		if(q==0){
			printf("取消修改\n");
			return;
		}
		break;
		case 5:printf("正在进入购物车\n");
		system("pause");
		system("cls");
		while(1){
		gwc(name,hy,zf,gwclist); 
	}
		break;
		case 6:
		system("pause");
		system("cls");
		printf("我们会根据情况进行退货,以弥补我们的快递费用\n");
		printf("请输入您想退掉的商品名称\n");
		scanf("%s",&t);
		if(gmcheck(gmlist,name,t)==1){
		printf("您确定要进行退货吗是:1否:0\n");
		scanf("%d",&s);
		while(s!=0&&s!=1){
			printf("输入错误请从新输入\n");
			scanf("%d",&s);
		}
		if(s==1){
		struct spnode* m=splist->next;
	while(strcmp(m->data.name,t)!=0){
		m=m->next;
	}
	if(m!=NULL){
			printf("您想退掉的货如下\n");
			printf("    名称 \t\t类型  \t\t售价\t\t推荐状态\n");
			printf("%10s\t%12s\t%10d\t%10c\n",m->data.name,m->data.type,m->data.s,m->data.t);
	dz=m->data.s;
	if(hy==1) dz*=0.95;
	if(hy==2) dz*=0.9;
	if(hy==3) dz*=0.8;
	while(sj<=dz){
		sj++;
	}
	sj-=2;
		system("pause");
		system("cls");
	printf("退款额为:%d,您将在1小时内获款\n",sj);
	sj=0-sj;
	gmsc(gmlist,name,t);
	wwrite("w.txt",sj,sr);
	gmwrite("gm.txt",gmlist);
		printf("欢迎您进行更换新货物\n");
	}
}
		if(s==0){
			printf("取消退货\n");
			return;
		}
	}
		system("pause");
		system("cls");
		break;
		case 7:
		printf("开始注销\n"); 
		system("pause");
		system("cls");
		printf("请确认您想注销账号是：1否：0\n");
		int b;
		scanf("%d",&b); 
		while(b!=1&&b!=0){
			printf("输入错误请从新暑促\n");
			scanf("%d",&b);
		}
		if(b==1){
		yhsc2(yhlist,name,hy,zf,gwclist);
		yhwrite("yh.txt",yhlist);
		printf("谢谢您对本购物系统的体验，再见\n");
		exit(0);
	}
		if(b==0){
			printf("取消注销\n");
			return;
		}
		break;
		case 8:printf("以下为本店较好的商品\n");
		system("pause");
		system("cls");
		yzspdy(splist); 
		break; 
		case 9:printf("开始限时秒杀\n");
		system("pause");
		system("cls");
		msdy(mslist); 
		break;
		case 10:printf("会员可以写下愿望单让管理员看到哦\n");
		system("pause");
		system("cls");
		if(hy>0){
			printf("您是我们的会员，请写下您的愿望单\n");
			strcpy(yw.name,name);
			printf("输入您想要的商品名称\n");
			scanf("%s",&yw.yw);
			ywdcr(ywdlist,yw);
			ywdwrite("ywd.txt",ywdlist);
		}
		else{
			printf("购买商品让自己成为会员再来吧\n");
		}
		system("pause");
		system("cls");  
		break;
		case 11:printf("来发现发现有什么网友推荐的好商品把\n");
		system("pause");
		system("cls");
		pl(name,hy,zf,gwclist); 
		break;
		case 12:printf("以下为您的购买记录\n");
		gmdy(gmlist,name);
		system("pause");
		system("cls"); 
		break;
		default:printf("选择错误\n");
		system("pause");
		system("cls"); 
		break;
	}
} 
