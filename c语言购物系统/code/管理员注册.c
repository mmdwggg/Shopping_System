#include "list.h"
void glyml(){
	int mm=19980618;
	int m;
	char q[100];
	printf("��������������֤�����ѻ�ó�Ϊ����Ա���ʸ�\n"); 
	scanf("%d",&m);
	system("cls");
	if(m==mm){
		struct glynode *glylist=glycreat();
		glyread("gly.txt",glylist);
		printf("��ϲ��ͨ������\n");
		printf("��ע��\n"); 
		system("pause");
		system("cls");
		struct gly a;
		int b=0;
		printf("�����������ǳ�\n");
		scanf("%s",&a.name);
		b=glycheck(glylist,a.name);
		while(b==1){
		system("cls");
		printf("���ǳ��Ѿ���ռ�ã��뻻һ���ǳ�");
		system("pause");
		printf("�����������ǳ�\n");
		scanf("%s",&a.name);
		b=glycheck(glylist,a.name);
		}
		system("cls");
		printf("��������������\n"); 
		scanf("%s",&a.mm);
		printf("���ٴ���������\n");
		scanf("%s",&q);
		while(strcmp(a.mm,q)!=0){
			printf("�������\n");
			printf("���ٴ���������\n");
			scanf("%s",&q); 
		} 
		glycr(glylist,a);
		glywrite("gly.txt",glylist);
		printf("ע��ɹ�����л����ʹ��\n");
		system("pause");
		system("cls");
	}
	if(m!=mm){
		printf("��û��ע�����Ա���ʸ�\n");
		printf("����Ϊ���������˵�\n");
		system("pause");
		system("cls");
	}
}
