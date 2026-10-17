//#include<stdio.h>
//int priority(char a);
//int cacl(int a,char b,int c);
//int main()
//{
//	int N,a,b,c;
//	char m,n;
//	int result;
//	N=scanf("%d %c %d %c %d\n",&a,&m,&b,&n,&c);
//	if(N==1)
//	{
//		printf("%d",a);
//	}
//	else if(N==3)
//	{
//		printf("%d",cacl(a,m,b));
//	}
//	else if(N==5)
//	{
//		if(priority(m))
//		{
//			int x=cacl(a,m,b);
//			result=cacl(x,n,c);
//		}
//		else
//		{
//			int y=cacl(b,n,c);
//			result=cacl(a,m,y); 
//		}
//		printf("%d",result);
//	}
//	return 0;
//}
//int priority(char a)
//{
//	int b=0;
//	if(a=='*' || a=='/' || a=='%') b=1;
//	return b;
//}
//int cacl(int a,char b,int c)
//{
//	if(b=='+') return a+c;
//	if(b=='-') return a-c;
//	if(b=='*') return a*c;
//	if(b=='/') return a/c;
//	if(b=='%') return a%c;
//}
#include <stdio.h>

int priority(char op) {
    if (op == '*' || op == '/' || op == '%') return 1;
    if (op == '+' || op == '-') return 0;
    return -1;
}

int calc(int a, char op, int b) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '%': return a % b;
        default:  return 0;
    }
}

int main(void) {
    int a, b, c;
    char m, n;

    // ? 第一步：先读第一个数
    if (scanf("%d", &a) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    // ? 第二步：尝试读第一个运算符
    if (scanf(" %c", &m) != 1) {
        // 只有一个数字
        printf("%d\n", a);
        return 0;
    }

    // ? 第三步：读第二个数
    if (scanf("%d", &b) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    // ? 第四步：尝试读第二个运算符
    if (scanf(" %c", &n) != 1) {
        // 只有两个操作数：a m b
        printf("%d\n", calc(a, m, b));
        return 0;
    }

    // ? 第五步：读第三个数
    if (scanf("%d", &c) != 1) {
        printf("Invalid input\n");
        return 0;
    }

    // 三个操作数：a m b n c
    int result;
    if (priority(m) >= priority(n)) {
        int x = calc(a, m, b);
        result = calc(x, n, c);
    } else {
        int y = calc(b, n, c);
        result = calc(a, m, y);
    }
    printf("%d\n", result);

    return 0;
}
