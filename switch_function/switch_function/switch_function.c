#define _CRT_SECURE_NO_WARNINGS
//switch   表达式必须是整形，就是int型
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:                              //case后必须是整形常量
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:                              
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");       //如果输出1则代码从case1开始执行到break，如果不加break就会一直执行直到遇见break
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:                       //如果输入的不在case里则都到default里
//		printf("选择错误\n");
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)//switch可以嵌套
//		{
//		case 1:
//			n++;
//		case 2:
//			n++; m++;
//			break;//此break是case 3里的，所以只是break case 3
//		}
//	case 4:      
//		m++;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}                 //m=5,n=3
