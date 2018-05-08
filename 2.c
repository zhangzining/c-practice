/*
This answer copyed from runoob.com
这个答案利用switch语句的击穿效应，做到代码的最简短，精妙。
*/
#include <stdio.h>
int main(){
double d;
int money = 100000;
float res =0.0;
int flag;
scanf("%lf",&d);
flag=(int)(d/money);
flag=flag>10?10:flag;
	switch(flag){
		case 10:
			res+=(d-10*money)*0.01;
			d=10*money;
		case 9:
		case 8:
		case 7:
		case 6:
			res+=(d-6*money)*0.015;
			d=6*money;
		case 5:
		case 4:
			res+=(d-4*money)*0.03;
			d=4*money;
		case 3:
		case 2:	
			res+=(d-2*money)*0.05;
			d=2*money;
		case 1:
			res+=(d-money)*0.075;
			d=money;
		case 0:
			res+=d*0.1;
	}

printf("%.2f\n",res);

return 0;
}
