void xt(){
	int a;
	printf("��ѡ��������еĲ�����\n"); 
	printf("1.�����û�ϵͳ\n"); 
	printf("2.�������Աϵͳ\n");
	printf("0.�˳�ϵͳ\n");
	scanf("%d",&a);
	switch(a){
		case 0:printf("�����˳�\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("�����û�ϵͳ��\n");
		system("pause");
		system("cls");
		yh();
		break; 
		case 2:printf("�������Աϵͳ��\n");
		system("pause");
		system("cls"); 
		gly(); 
		break;
		default:printf("ѡ�����\n");
		system("pause");
		system("cls"); 
		break;
	}
} 
