#include "list.h"
sp(char *name,char* mm){
	int a; 
	printf("��ѡ��������еĲ�����\n"); 
	printf("1.¼����Ʒ��Ϣ\n"); 
	printf("2.������Ʒ\n");
	printf("3.�����Ʒ\n");
	printf("4.�޸���Ʒ��Ϣ\n"); 
	printf("5.�鿴Ӫҵ��\n");
	printf("6.ɾ����Ʒ\n");
	printf("7.������һ��\n");
	printf("8.������ʱ��ɱ\n");
	printf("9.ɾ����ʱ��ɱ\n");
	printf("10.�۸��С��������\n");
	printf("0.�˳�ϵͳ\n");
	int w=0;
	int s=1;
	scanf("%d",&a);
	struct spnode *splist=spcreat();
	spread("sp.txt",splist);
	struct msnode *mslist=mscreat();
	msread("ms.txt",mslist);
	switch(a){
		case 0:printf("�����˳�\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("��ʼ¼��\n");
		system("pause");
		system("cls");
		int c=1;
		while(c==1){
			printf("��¼��\n"); 
			system("pause");
			system("cls");
			struct sp a;
			int b=0;
			printf("��������Ʒ������\n");
			scanf("%s",&a.name);
			b=spcheck(splist,a.name);
			while(b==1){
			system("cls");
			printf("�������Ѿ���ռ�ã��뻻һ������");
			system("pause");
			printf("��������Ʒ������\n");
			scanf("%s",&a.name);
			b=spcheck(splist,a.name);
			}
			system("cls");
			printf("��������Ʒ������ �ۼ� �Ƿ��Ƽ���Y/N\n"); 
			scanf("%s %d %c",&a.type,&a.s,&a.t);
			spcr(splist,a);
			system("pause");
			system("cls");
			printf("�������Ƿ�����������Ʒ�ǣ�1 ��0\n");
			scanf("%d",&c);
			while(c!=1&&c!=0){
				printf("�����������������\n");
				scanf("%d",&c);
			}
			system("pause");
			system("cls");
		}
		spwrite("sp.txt",splist);
		break; 
		case 2:printf("������û������Ҫ�İɣ�����Ա���԰���Ŷ\n");
		system("pause");
		system("cls"); 
		char d[100];
		printf("���������ҵ���Ʒ������\n");
		scanf("%s",&d);
		spcz(splist,d);
		break;
		case 3:printf("����Ϊ������Ʒ\n");
		system("pause");
		system("cls"); 
		spdy(splist);
		break;
		case 4:	
		system("pause");
		system("cls"); 
		printf("���������޸ĵ���Ʒ����\n");
		char e[100];
		scanf("%s",&e);
		spxg(splist,e);
		spwrite("sp.txt",splist);
		break; 
		case 5:
		system("pause");
		system("cls");
		printf("�鿴Ӫҵ��\n");
		w=wread("w.txt");
		printf("%d",w);
		system("pause");
		system("cls"); 
		break;
		case 6:
		printf("��ʼɾ��\n");
		char f[100];
		printf("������Ʒ����\n");
		scanf("%s",&f);
		printf("��ȷ��Ҫɾ������Ʒ����:1��:0\n");
		scanf("%d",&s);
		while(s!=1&&s!=0){
			printf("�������,���������\n");
			scanf("%d",&s);
		}
		if(s==1){
		spsc(splist,f);
		printf("ɾ���ɹ�\n"); 
		system("pause");
		system("cls"); 
		spwrite("sp.txt",splist);
	}
		if(s==0)
		{
			printf("���ع���Ա����\n");
		}
		break;
		case 7: 
		system("pause");
		system("cls"); 
		break;
		case 8:	
		system("pause");
		system("cls"); 
		printf("�������������ʱ��ɱ����Ʒ����\n");
		char q[100];
		scanf("%s",&q);
		spmsxg(splist,q,mslist);
		spwrite("sp.txt",splist);
		mswrite("ms.txt",mslist);
		break;
		case 9:	
		system("pause");
		system("cls"); 
		printf("��������ȡ����ʱ��ɱ����Ʒ����\n");
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
		default:printf("ѡ�����\n");
		system("pause");
		system("cls"); 
		break;
	}
		glyxt(name,mm);
} 
