/**int TKTTTextString(char list, char text)
{
	for(int i=0; i < list.length(); i++)
	{
		for(int j = 0; j < text.length(); j++)
		{
			if (list[i] != text [j])
				return false;
			else
			return i;
		}
	}
	rerurn -1;
}
**/

#include<stdio.h>
#include<conio.h>
#include<string.h>

// ham nhap xau
void nhapxau(char list[], char test[])
{
	printf("\n Nhap vao chuoi string ban dau: ");
	gets(list);
	//char*gets(char*s);
	printf("\n Nhap vao xau can tim: ");
	gets(test);
	//char*gets(char*s);
	printf("\n ----------------------------");
	printf("\n Chuoi ban dau: ");
	puts(list);
	printf("\n chuoi can tim: ");
	puts(test);

}

// ham tim xau
void search(char list[], char test[], int m, int n)
{

	for(int i=0; i<=(m-n+1);i++)
	{
		if(i>m-n)
			printf("\n ko tim thay");
		else
		{
		for( int j=0; (j<n) && (test[j]==list[i+j]);j++)
		{
			if(j>=(n-1))
			printf("\n tim thay tai vi tri %d toi vi tri %d", i+1, i+n);
			//return i;

		}
		}
	}
	//return -1;
}

int main()
{
	char list[100];
	char test[90];
	nhapxau(list, test);
	printf("\n -----------------------------");
	int m=strlen(list);
	int n=strlen(test);
	search(list, test, m, n);
	/*if(x>=0)
	printf("\n tim thay ");
	else
	printf("\n ko tim thay");*/
	getch();
}
