///�w�w�ƧǪk(1)��j�p,����N�洫 a[i] vs. a[i+1] ���k
//(2)��Ӫ���v�v,�q����k��  for(int i=0;i<100-1;i++)
//(3)���ư��ܦh��  for(int k=0;k<100-1;k++)

#include <stdio.h>
int a[100];
int main()
{
	//Input: 100�ӼƦr
    for(int i=0; i<100; i++){
    	scanf("%d", & a[i]);
    }

    for(int k=0;k<100-1;k++){ // (3)
        for(int i=0;i<100-1;i++){ //(2)
            if( a[i] > a[i+1]){ //(1)//��j�p,����N�洫
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }//a[i] vs. a[i+1] ���k
        }
    }
    for(int i=0; i<100; i++){//�̫�,Output�L����
        	printf("%d\n", a[i]);
    }
}
