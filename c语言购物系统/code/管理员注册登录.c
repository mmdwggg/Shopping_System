void gly(){
	printf("��ӭ�������Աϵͳ\n");
	printf("��ѡ�����Ĳ���\n");
	printf("1.ע�����Ա\n");
	printf("2.��¼����Ա\n");
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
		glyml();
		break;
		case 2:printf("��ʼ��¼\n"); 
		system("pause");
		system("cls");
		glydl();
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
