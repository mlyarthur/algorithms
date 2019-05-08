#include <stdio.h>
#include <string.h>
 
int BruteForceStringMatch(char T[], int n, char P[], int m) {
	int i=0, j=0;
	for (i=0; i<n-m+1; i++) {
		j = 0;
		while (j < m && P[j]==T[i+j]) {
			j = j + 1;
			if (j = m)
				return i;
		}
	} 
	return -1;
}
 
int main() {
	char a[100], b[100];
	int mark;
	printf("请输入一个字符串：");
	scanf("%s", a);
	printf("请输入一个字符串：");
	scanf("%s", b);
	mark = BruteForceStringMatch(a, strlen(a), b, strlen(b));
	if (mark == -1)
		printf("没找到=。=");
	else
		printf("找到了=_="); 
	return 0;
}

