#include<stdio.h>

int main()
{
	int n, i , j, count;
	scanf("%d", &n);

	char a[n+1][n+1];

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%c", &a[j][i]);
		}
	}
	for(i=0;i<n;i++) {
		count = 0;
		for(j=0;j<n;j++) {
			if(a[i][j] == 'X')
				count++;
			else {
				if(count > 0) {
					printf("%d\n", count);
					break;
				}
			}
		printf("%d\n", count);
		}
	}
return 0;
}
