#include "list.h"
yhxt(char *name,int hy,char *zf,struct gwcnode* gwclist){
	int a; 
	printf("��ѡ��������еĲ�����\n"); 
	printf("1.��ʾ��Ʒ\n"); 
	printf("2.����Χ������Ʒ\n");
	printf("3.����\n");
	printf("4.�޸���Ϣ\n");
	printf("5.���빺�ﳵ\n");
	printf("6.�˻�\n");
	printf("7.ע��\n");
	printf("8.��ʾ����󱦱�\n");
	printf("9.��ʱ��ɱ��\n");
	printf("10.Ը����\n");
	printf("11.�ֲ������\n");
	printf("12.�����¼\n");
	printf("0.�˳�ϵͳ\n");
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
		case 0:printf("�����˳�\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("����Ϊ������Ʒ\n");
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
		printf("����Ʒ�Է������Ĺ��ﳵ\n");
		gwccr(gwclist,move->data);
	}
		break;
		case 4:	
		printf("��ȷ�������޸ĸ�����Ϣ��:1��:0");
		scanf("%d",&q); 
		system("pause");
		system("cls");
		while(q!=0&&q!=1){
			printf("�����������������\n");
			scanf("%d",&q);
		}
		if(q==1){
		printf("��ʼ�޸���Ϣ\n");
		yhxg(yhlist,name,hy,zf,gwclist); 
		yhwrite("yh.txt",yhlist);
	}
		if(q==0){
			printf("ȡ���޸�\n");
			return;
		}
		break;
		case 5:printf("���ڽ��빺�ﳵ\n");
		system("pause");
		system("cls");
		while(1){
		gwc(name,hy,zf,gwclist); 
	}
		break;
		case 6:
		system("pause");
		system("cls");
		printf("���ǻ������������˻�,���ֲ����ǵĿ�ݷ���\n");
		printf("�����������˵�����Ʒ����\n");
		scanf("%s",&t);
		if(gmcheck(gmlist,name,t)==1){
		printf("��ȷ��Ҫ�����˻�����:1��:0\n");
		scanf("%d",&s);
		while(s!=0&&s!=1){
			printf("����������������\n");
			scanf("%d",&s);
		}
		if(s==1){
		struct spnode* m=splist->next;
	while(strcmp(m->data.name,t)!=0){
		m=m->next;
	}
	if(m!=NULL){
			printf("�����˵��Ļ�����\n");
			printf("    ���� \t\t����  \t\t�ۼ�\t\t�Ƽ�״̬\n");
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
	printf("�˿��Ϊ:%d,������1Сʱ�ڻ��\n",sj);
	sj=0-sj;
	gmsc(gmlist,name,t);
	wwrite("w.txt",sj,sr);
	gmwrite("gm.txt",gmlist);
		printf("��ӭ�����и����»���\n");
	}
}
		if(s==0){
			printf("ȡ���˻�\n");
			return;
		}
	}
		system("pause");
		system("cls");
		break;
		case 7:
		printf("��ʼע��\n"); 
		system("pause");
		system("cls");
		printf("��ȷ������ע���˺��ǣ�1��0\n");
		int b;
		scanf("%d",&b); 
		while(b!=1&&b!=0){
			printf("���������������\n");
			scanf("%d",&b);
		}
		if(b==1){
		yhsc2(yhlist,name,hy,zf,gwclist);
		yhwrite("yh.txt",yhlist);
		printf("лл���Ա�����ϵͳ�����飬�ټ�\n");
		exit(0);
	}
		if(b==0){
			printf("ȡ��ע��\n");
			return;
		}
		break;
		case 8:printf("����Ϊ����Ϻõ���Ʒ\n");
		system("pause");
		system("cls");
		yzspdy(splist); 
		break; 
		case 9:printf("��ʼ��ʱ��ɱ\n");
		system("pause");
		system("cls");
		msdy(mslist); 
		break;
		case 10:printf("��Ա����д��Ը�����ù���Ա����Ŷ\n");
		system("pause");
		system("cls");
		if(hy>0){
			printf("�������ǵĻ�Ա����д������Ը����\n");
			strcpy(yw.name,name);
			printf("��������Ҫ����Ʒ����\n");
			scanf("%s",&yw.yw);
			ywdcr(ywdlist,yw);
			ywdwrite("ywd.txt",ywdlist);
		}
		else{
			printf("������Ʒ���Լ���Ϊ��Ա������\n");
		}
		system("pause");
		system("cls");  
		break;
		case 11:printf("�����ַ�����ʲô�����Ƽ��ĺ���Ʒ��\n");
		system("pause");
		system("cls");
		pl(name,hy,zf,gwclist); 
		break;
		case 12:printf("����Ϊ���Ĺ����¼\n");
		gmdy(gmlist,name);
		system("pause");
		system("cls"); 
		break;
		default:printf("ѡ�����\n");
		system("pause");
		system("cls"); 
		break;
	}
} 
