#include "list.h" 
void yh(){
	printf("��ӭ�����û�ϵͳ\n");
	printf("��ѡ�����Ĳ���\n");
	printf("1.ע���û�\n");
	printf("2.��¼�û�\n");
	printf("3.������һ��\n");
	printf("0.�˳�ϵͳ\n");
	int a;
		scanf("%d",&a);
	switch(a){
		case 0:printf("�����˳�\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("��ʼע��\n");
		system("pause");
		system("cls");
		yhzc();
		break; 
		case 2:printf("��ʼ��¼\n"); 
		system("pause");
		system("cls");
		yhdl();
		break;
		case 3:
		system("pause");
		system("cls");
		xt();
		break;
		default:printf("ѡ�����\n");
		printf("����Ϊ���������˵�\n");
		system("pause");
		system("cls");
		break;
	}
}
