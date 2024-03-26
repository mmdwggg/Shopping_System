#include "list.h"
sp(char *name,char* mm){
	int a; 
	printf("请选择您想进行的操作。\n"); 
	printf("1.录入商品信息\n"); 
	printf("2.查找商品\n");
	printf("3.浏览商品\n");
	printf("4.修改商品信息\n"); 
	printf("5.查看营业额\n");
	printf("6.删除商品\n");
	printf("7.返回上一级\n");
	printf("8.设置限时秒杀\n");
	printf("9.删除限时秒杀\n");
	printf("10.价格从小到大排序\n");
	printf("0.退出系统\n");
	int w=0;
	int s=1;
	scanf("%d",&a);
	struct spnode *splist=spcreat();
	spread("sp.txt",splist);
	struct msnode *mslist=mscreat();
	msread("ms.txt",mslist);
	switch(a){
		case 0:printf("正在退出\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("开始录入\n");
		system("pause");
		system("cls");
		int c=1;
		while(c==1){
			printf("请录入\n"); 
			system("pause");
			system("cls");
			struct sp a;
			int b=0;
			printf("请输入商品的名称\n");
			scanf("%s",&a.name);
			b=spcheck(splist,a.name);
			while(b==1){
			system("cls");
			printf("此名称已经被占用，请换一个名称");
			system("pause");
			printf("请输入商品的名称\n");
			scanf("%s",&a.name);
			b=spcheck(splist,a.name);
			}
			system("cls");
			printf("请输入商品的类型 售价 是否推荐它Y/N\n"); 
			scanf("%s %d %c",&a.type,&a.s,&a.t);
			spcr(splist,a);
			system("pause");
			system("cls");
			printf("请问您是否想继续添加商品是：1 否：0\n");
			scanf("%d",&c);
			while(c!=1&&c!=0){
				printf("输入错误请重新输入\n");
				scanf("%d",&c);
			}
			system("pause");
			system("cls");
		}
		spwrite("sp.txt",splist);
		break; 
		case 2:printf("找找有没有你需要的吧，管理员可以白嫖哦\n");
		system("pause");
		system("cls"); 
		char d[100];
		printf("输入你想找的商品的名称\n");
		scanf("%s",&d);
		spcz(splist,d);
		break;
		case 3:printf("以下为本店商品\n");
		system("pause");
		system("cls"); 
		spdy(splist);
		break;
		case 4:	
		system("pause");
		system("cls"); 
		printf("输入你想修改的商品名称\n");
		char e[100];
		scanf("%s",&e);
		spxg(splist,e);
		spwrite("sp.txt",splist);
		break; 
		case 5:
		system("pause");
		system("cls");
		printf("查看营业额\n");
		w=wread("w.txt");
		printf("%d",w);
		system("pause");
		system("cls"); 
		break;
		case 6:
		printf("开始删除\n");
		char f[100];
		printf("输入商品名称\n");
		scanf("%s",&f);
		printf("你确定要删除该商品吗是:1否:0\n");
		scanf("%d",&s);
		while(s!=1&&s!=0){
			printf("输入错误,请从新输入\n");
			scanf("%d",&s);
		}
		if(s==1){
		spsc(splist,f);
		printf("删除成功\n"); 
		system("pause");
		system("cls"); 
		spwrite("sp.txt",splist);
	}
		if(s==0)
		{
			printf("返回管理员界面\n");
		}
		break;
		case 7: 
		system("pause");
		system("cls"); 
		break;
		case 8:	
		system("pause");
		system("cls"); 
		printf("输入你想进行限时秒杀的商品名称\n");
		char q[100];
		scanf("%s",&q);
		spmsxg(splist,q,mslist);
		spwrite("sp.txt",splist);
		mswrite("ms.txt",mslist);
		break;
		case 9:	
		system("pause");
		system("cls"); 
		printf("输入你想取消限时秒杀的商品名称\n");
		char p[100];
		scanf("%s",&p);
		spmssc(splist,p,mslist);
		spwrite("sp.txt",splist);
		mswrite("ms.txt",mslist);
		break;
		case 10:	
		system("pause");
		system("cls"); 
		sppx(splist); 
		spwrite("sp.txt",splist);
		break;
		default:printf("选择错误\n");
		system("pause");
		system("cls"); 
		break;
	}
		glyxt(name,mm);
} 
