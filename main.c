#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int maxdig(int n, int max)
{
    if(n!=0)
    {
        if(n%10 > max)
        {
            max = n%10;
        }
        return maxdig(n/10, max);
    }
return max;
}


int posled()
{
int n;
printf("������� �����:");
scanf("%d",&n);
if (n==-1) return 0 ;
else
return n+posled();

}








int main()
{   setlocale(LC_ALL,"RUS");
    printf("������� �1-���������� ������� ������� maxdig(N), ������� ������� ���������� ����� � ���������� ������ ���������������� ������ ����� N\n (������� 3 �� 5-�� �����)\n");
    printf("������� �2-���� ������������������ �����, ������������� ������ -1. ������� ����� ���� ���� �����, �� ��������� ����.\n (������� 5 �� 5-�� �����)\n");
    int p=5,a,b,c=0,s=0,max;
    printf("|��� ������ ������� 0|\n");
    printf("\n");

    while(p!=0) //0-������� ����������� ������ ���������
    {
        printf("�������� �������:");
        scanf("%d",&p);

       switch(p)
      {
        case 1:
            printf("������� ����� ��������������� �����(�� 9-�� ��������):");
            scanf("%d",&a);
            printf("���������� �����=%d\n",maxdig(a,max));
            printf("\n");
            break;
        case 2:
           printf("����� ����� �����:%d",posled());
           printf("\n");
          break;
      }

    }


    return 0;
}
