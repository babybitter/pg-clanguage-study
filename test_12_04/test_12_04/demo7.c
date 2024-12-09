#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int get_runnian_of_year(int year) {
//
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int get_days_of_month(int year, int month) {
//	int days = 0;
//	int rn;
//	switch (month) {
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		days = 31;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		days = 30;
//	case 2:
//		rn = get_runnian_of_year(year);
//		if (rn == 1)
//			days = 29;
//		else
//			days = 28;
//	}
//	return days;
//}
//int main() {
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	int days = get_days_of_month(year,month);
//	printf("%d年%d月有%d天", year, month, days);
//	return 0;
//}

#include <stdio.h>
int get_leapyear(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}
int get_days_of_month(int year, int month) {
	int a[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	//			0 1  2  3  4  5  6  7  8  9  10 11 12
	int days = a[month];
	if (get_leapyear(year) && month == 2) {
		days = days + 1;
		return days;
	}
	else
		return days;
}
int main() {
	int year = 0 , month = 0;
	scanf("%d %d", &year, &month);
	int days = get_days_of_month(year, month);
	printf("%d年%d月有%d天", year, month, days);
	return 0;
}