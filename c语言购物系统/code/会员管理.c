#include "list.h"
void hygl(char *name,char mm){
	int a; 
	printf("��ѡ��������еĲ�����\n"); 
	printf("1.�鿴��Ա�б�\n"); 
	printf("2.������һ��\n"); 
	printf("3.�鿴��ԱԸ����\n"); 
	printf("0.�˳�ϵͳ\n");
	scanf("%d",&a);
	struct yhnode *yhlist=yhcreat();
	yhread("yh.txt",yhlist);
	struct ywdnode *ywdlist=ywdcreat();
	ywdread("ywd.txt",ywdlist);
	switch(a){
		case 0:printf("�����˳�\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("����Ϊ��Ա�б�\n");
		system("pause");
		system("cls");
		struct yhnode *move=yhlist->next;
		printf("�˺�\t\t�绰\t\t�ջ���ַ\t\t΢��\t\t��Ա�ȼ�\n");
		while(move){
		if(move->data.hy>0){
			printf("%s\t%15s\t%15s\t%15s\t\t\t%d\n",move->data.name,move->data.tel,move->data.p,move->data.vx,move->data.hy);
		}
			move=move->next;
	}
			system("pause");
		system("cls");
		break; 
		case 2:
		system("pause");
		system("cls");
		break; 
		case 3:
		system("pause");
		system("cls");
		printf("����Ϊ��ԱԸ����\n");
		ywddy(ywdlist);
		break; 
		default:printf("ѡ�����\n");
		system("pause");
		system("cls"); 
		break;
	}
	glyxt(name,mm);
} 
