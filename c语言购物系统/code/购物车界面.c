#include "list.h"
void gwc(char *name,int hy,char *zf,struct gwcnode* gwclist){
	printf("��ѡ�����Ĳ���\n");
	printf("1.��ʾ���ﳵ��Ʒ\n");
	printf("2.������һ��\n");
	printf("3.��ʾ���ﳵ����Ʒ�ܼ۸�\n");
	printf("4.�ӹ��ﳵ���Ƴ���Ʒ\n");
	printf("5.������Ʒ\n");
	printf("6.����\n"); 
	printf("0.�˳�ϵͳ\n");	
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
		case 0:printf("�����˳�\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("����Ϊ�����ﳵ�ڵ���Ʒ\n");
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
		printf("�����������Ʒ�ܼ�Ϊ:");
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
		printf("����������ɾ������Ʒ����\n");
		char n[100];
		scanf("%s",&n);
		printf("���Ƿ���ɾ�������Ʒ��:1��:0\n");
		scanf("%d",&p);
		while(p!=0&&p!=1){
			printf("�����������������\n");
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
		printf("���������������ﳵ����ӵ���Ʒ\n"); 
		char nam[100];
		scanf("%s",&nam);
		system("pause");
		system("cls");
	struct spnode* move=splist->next;
	while(strcmp(move->data.name,nam)!=0){
		move=move->next;
		if(move==NULL){
			printf("�����̵����û�����ֶ���\n");
		system("pause");
		system("cls");
			return;
		}
	}
	if(move!=NULL){
			printf("���ҵĻ���������\n");
			printf("    ���� \t\t����  \t\t�ۼ�\t\t�Ƽ�״̬\n");
			printf("%10s\t%12s\t%10d\t%10c\n",move->data.name,move->data.type,move->data.s,move->data.t);
			system("pause");
		system("cls");
		printf("����Ʒ�ѷ������Ĺ��ﳵ\n");
			gwccr(gwclist,move->data);
		system("pause");
		system("cls");
	}
		break;
		case 6:
		system("pause");
		system("cls");
		printf("�����������Ʒ�ܼ�Ϊ:");
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
		printf("�������ѽ����ߣ���������Ŷ�������µ׳���\n");
	} 
	zfmm(zf);
	wwrite("w.txt",w1,sr);
	gmwrite("gm.txt",gmlist);
	printf("лл���Ĺ���\n"); 
	hysj(name,hy,w,yhlist); 
		system("pause");
		system("cls");
		bb();
		system("pause");
		exit(0);
		break;
		default:printf("ѡ�����\n");
		system("pause");
		system("cls"); 
		break;
	}
}
