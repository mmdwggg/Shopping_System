void gly(){
	printf("欢迎进入管理员系统\n");
	printf("请选择您的操作\n");
	printf("1.注册管理员\n");
	printf("2.登录管理员\n");
	printf("3.返回上一级\n");
	printf("0.退出系统\n");
	int a;
		scanf("%d",&a);
	switch(a){
		case 0:printf("正在退出\n");
		system("pause");
		exit(0);
		break;
		case 1:printf("开始注册\n");
		system("pause");
		system("cls");
		glyml();
		break;
		case 2:printf("开始登录\n"); 
		system("pause");
		system("cls");
		glydl();
		break;
		case 3:
		system("pause");
		system("cls");
		xt();
		break;
		default:printf("选择错误\n");
		printf("即将为您返回主菜单\n");
		system("pause");
		system("cls");
		break;
	}
}
