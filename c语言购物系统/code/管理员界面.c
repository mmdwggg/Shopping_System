#include "list.h"
glyxt(char *name,char* mm){
	int a; 
	printf("��ѡ��������еĲ�����\n"); 
	printf("1.�����û�����ϵͳ\n"); 
	printf("2.������Ʒ����ϵͳ\n");
	printf("3.�����Ա����ϵͳ\n");
	printf("4.�޸���Ϣ\n");
	printf("5.ע������Ա\n");
	printf("0.�˳�ϵͳ\n");
	scanf("%d",&a);
	int s=1;
	struct glynode *glylist=glycreat();
	glyread("gly.txt",glylist);
	switch(a){
		case 0:printf("�����˳�\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("�����û�����ϵͳ��\n");
		system("pause");
		system("cls");
		yhgl(name,mm);
		break; 
		case 2:printf("������Ʒ����ϵͳ��\n");
		system("pause");
		system("cls"); 
		sp(name,mm);
		break;
		case 3:printf("�����Ա����ϵͳ��\n");
		system("pause");
		system("cls"); 
		hygl(name,mm); 
		break;
		case 4:	
		system("pause");
		system("cls");
		printf("��ȷ����������޸ĸ�����Ϣ��:1��:0\n");
		scanf("%d",&s);
		if(s==1){
		printf("��ʼ�޸���Ϣ\n");
		glyxg(glylist,name);
		system("pause");
		system("cls"); 
		glywrite("gly.txt",glylist);
		printf("�޸����\n");
	}
		if(s==0){
			printf("ȡ���޸�\n");
		}
		if(s!=1&&s!=0){
			printf("�������\n"); 
		}
		break;
		case 5:
		printf("��ʼע��\n"); 
		system("pause");
		system("cls");
		printf("ȷ�����Ƿ�Ҫע����:1��:0");
		int b;
		scanf("%d",&b);
		if(b==1){
		glysc(glylist,name);
		glywrite("gly.txt",glylist);
		printf("лл���Ա�����ϵͳ�����飬�ټ�\n");
		exit(0); 
	}
		if(b==0){	
		printf("ȡ��ע��\n");
		}
		if(b!=0&&b!=1){
		printf("�������\n");
		}
		break;
		default:printf("ѡ�����\n");
		system("pause");
		system("cls"); 
		break;
	}
}
