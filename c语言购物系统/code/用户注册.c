#include "list.h"
void yhzc(){
		struct yhnode *yhlist=yhcreat();
		yhread("yh.txt",yhlist);
		printf("��ע��\n"); 
		system("pause");
		system("cls");
		struct yh a;
		char q[100];
		int b=0;
		printf("�����������ǳ�\n");
		scanf("%s",&a.name);
		b=yhcheck(yhlist,a.name);
		while(b==1){
		system("cls");
		printf("���ǳ��Ѿ���ռ�ã��뻻һ���ǳ�");
		system("pause");
		printf("�����������ǳ�\n");
		scanf("%s",&a.name);
		b=yhcheck(yhlist,a.name);
		}
		system("cls");
		printf("��������������\n"); 
		scanf("%s",&a.mm);
		printf("���ٴ���������\n");
		scanf("%s",&q);
		system("pause");
		system("cls");
		while(strcmp(a.mm,q)!=0){
			printf("�������\n");
			printf("���ٴ���������\n");
			scanf("%s",&q); 
		} 
		printf("���������ĵ绰\n"); 
		scanf("%s",&a.tel);
		system("pause");
		system("cls");
		printf("�����������ջ���ַ\n"); 
		scanf("%s",&a.p);
		system("pause");
		system("cls");
		printf("����������΢�ź���\n"); 
		scanf("%s",&a.vx);
		system("pause");
		system("cls");
		printf("����������6λ֧������\n"); 
		scanf("%s",&a.zf);
		system("pause");
		system("cls");
		a.hy=0;
		yhcr(yhlist,a);
		yhwrite("yh.txt",yhlist);
		printf("ע��ɹ�����л����ʹ��\n");
		system("pause");
		system("cls");
}
