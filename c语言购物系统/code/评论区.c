#include "list.h"
pl(char *name,int hy,char *zf,struct gwcnode* gwclist){
	int a; 
	printf("��ѡ��������еĲ�����\n"); 
	printf("1.�ۿ�������\n"); 
	printf("2.д����\n");
	printf("3.������һ��\n"); 
	printf("0.�˳�ϵͳ\n");
	scanf("%d",&a);
	struct pl plq;
	struct plnode *pllist=plcreat();
	plread("pl.txt",pllist);
	struct gmnode *gmlist=gmcreat();
	gmread("gm.txt",gmlist);
	switch(a){
		case 0:printf("�����˳�\n");
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
		printf("�������������۵���Ʒ����\n");
		scanf("%s",plq.name);
		if(gmcheck(gmlist,name,plq.name)==1){ 
		printf("��������������\n");
		scanf("%s",plq.pl);
		plcr(pllist,plq);
		plwrite("pl.txt",pllist);
	}
		break;
		case 3:
		system("pause");
		system("cls");
		printf("���ڷ���\n");
		system("pause");
		system("cls");
		yhxt(name,hy,zf,gwclist);
		break;
		default:printf("ѡ�����\n");
		system("pause");
		system("cls"); 
		break;
	}
}
		
