#include "list.h"
void ss(){
	printf("��ѡ������������ʽ\n");
	printf("1.����������\n");
	printf("2.����������\n");
	printf("3.����λ����\n");
	struct spnode *splist=spcreat();
	spread("sp.txt",splist);
	int a;
		scanf("%d",&a);
	switch(a){
		case 1:printf("������������������Ʒ\n");
		char name[100];
		scanf("%s",&name);
		system("pause");
		system("cls");
		spcz(splist,name);
		break; 
		case 2:printf("������������Ҫ����Ʒ����\n"); 
		char type[100];
		scanf("%s",&type);
		system("pause");
		system("cls");
	struct spnode* move=splist->next;
	printf("���ҵĻ���������\n");
	printf("    ���� \t\t����  \t\t�ۼ�\t\t�Ƽ�״̬\n");
	while(move){
		if(strcmp(move->data.type,type)==0){
			printf("%10s\t%12s\t%10d\t%10c\n",move->data.name,move->data.type,move->data.s,move->data.t);
	}
	move=move->next;
}
		system("pause");
		system("cls");
		break;
		case 3:printf("��������������Ʒ����ͼ�\n");
		int min;
		scanf("%d",&min); 
		system("pause");
		system("cls");
		printf("��������������Ʒ����߼�\n");
		int max;
		scanf("%d",&max); 
		system("pause");
		system("cls");
		struct spnode* mov=splist->next;
		printf("���ҵĻ���������\n");
		printf("    ���� \t\t����  \t\t�ۼ�\t\t�Ƽ�״̬\n");
			while(mov){
		if(mov->data.s>=min&&mov->data.s<=max){
			printf("%10s\t%12s\t%10d\t%10c\n",mov->data.name,mov->data.type,mov->data.s,mov->data.t);
	}
	mov=mov->next;
}
		system("pause");
		system("cls");
		break;
		default:printf("ѡ�����\n");
		printf("����Ϊ���������˵�\n");
		system("pause");
		system("cls");
		break;
	}
}
