#include "list.h"
void ss(){
	printf("请选择您的搜索方式\n");
	printf("1.按名字搜索\n");
	printf("2.按类型搜索\n");
	printf("3.按价位搜索\n");
	struct spnode *splist=spcreat();
	spread("sp.txt",splist);
	int a;
		scanf("%d",&a);
	switch(a){
		case 1:printf("请输入您想搜索的商品\n");
		char name[100];
		scanf("%s",&name);
		system("pause");
		system("cls");
		spcz(splist,name);
		break; 
		case 2:printf("请输入您所需要的商品类型\n"); 
		char type[100];
		scanf("%s",&type);
		system("pause");
		system("cls");
	struct spnode* move=splist->next;
	printf("您找的货如下如下\n");
	printf("    名称 \t\t类型  \t\t售价\t\t推荐状态\n");
	while(move){
		if(strcmp(move->data.type,type)==0){
			printf("%10s\t%12s\t%10d\t%10c\n",move->data.name,move->data.type,move->data.s,move->data.t);
	}
	move=move->next;
}
		system("pause");
		system("cls");
		break;
		case 3:printf("请输入您所需商品的最低价\n");
		int min;
		scanf("%d",&min); 
		system("pause");
		system("cls");
		printf("请输入您所需商品的最高价\n");
		int max;
		scanf("%d",&max); 
		system("pause");
		system("cls");
		struct spnode* mov=splist->next;
		printf("您找的货如下如下\n");
		printf("    名称 \t\t类型  \t\t售价\t\t推荐状态\n");
			while(mov){
		if(mov->data.s>=min&&mov->data.s<=max){
			printf("%10s\t%12s\t%10d\t%10c\n",mov->data.name,mov->data.type,mov->data.s,mov->data.t);
	}
	mov=mov->next;
}
		system("pause");
		system("cls");
		break;
		default:printf("选择错误\n");
		printf("即将为您返回主菜单\n");
		system("pause");
		system("cls");
		break;
	}
}
