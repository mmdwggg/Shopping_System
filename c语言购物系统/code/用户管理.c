#include "list.h"
void yhgl(char *name,char* mm){
	int a; 
	printf("��ѡ��������еĲ�����\n"); 
	printf("1.�鿴�û���Ϣ\n"); 
	printf("2.ע��Υ���û�\n");
	printf("3.������һ����\n");
	printf("0.�˳�ϵͳ\n");
	scanf("%d",&a);
	struct yhnode *yhlist=yhcreat();
	yhread("yh.txt",yhlist);
	switch(a){
		case 0:printf("�����˳�\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("�鿴�û���Ϣ\n");
		system("pause");
		system("cls");
		printf("����Ϊ�û��б�\n");
		yhdy(yhlist);
		system("pause");
		system("cls");
		break; 
		case 2:	
		printf("��ʼע��\n"); 
		system("pause");
		system("cls");
		printf("������û����ǳ�\n");
		char n[100];
		scanf("%s",&n);
		yhsc1(yhlist,n,name,mm);
		yhwrite("yh.txt",yhlist);
		break;
		case 3:
		system("pause");
		system("cls");
		break;
		default:printf("ѡ�����\n");
		system("pause");
		system("cls"); 
		break;
	}
	glyxt(name,mm);
}
