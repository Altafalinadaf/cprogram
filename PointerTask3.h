#include<stdio.h>
void pointers(){
	int arr[5]={0,1,-1,10,1};
	int *p=arr; // this will take the base address of array[0]
	// no need to wite this int *ptr=&arr; // because array is alredy a constant pointer so we can't give

	printf("By using pointer accesiing value \n");
//	for(int i=0;i<5;i++){
//		printf("arr %d = %d\n",i,*p++);
//	}

	p=p+2;
	printf("%d\n",*p);

	p=&arr[0];
	printf("%d\n",*p);

	p=&arr[2];
	printf("%d\n",*p);

	p=p+1;
	*p=2;
	printf("%d\n",*p);
	printf("%d\n",arr[3]);

	int *p2;
	p2=&arr[1];
}

void pointers2(){
	int arr[]={1,8,-1,5,6,7};
//    This below to declaration is same
	int *p=&arr[0];
	int *q=arr;

	printf("This below both the value is same \n");
	printf("p = %d\n",*p);
	printf("q = %d\n",*q);

	p=&arr[0];
	q=&arr[3];
	int d=q-p;
	printf("size difference between q to p is : %d\n",d);

	p=&arr[0];
	q=&arr[3];
    d=p-q;
	printf("size difference between p to q is : %d\n",d);

	q=q-2;
	printf("%d\n",*q);
}

void pointers3(){
	int a[]={10,11,-1,56,67,5,4};
	int *p,*q;
	p=a;
	printf("%d\n",*p);
	printf("%d %d %d\n",(*p)++,*p++,*++p);
	q=p+3;
	printf("%d\n",*q-3);
	printf("%d\n",*--p+5);
	printf("%d\n",*p+*q);
	printf("%d\n",a[1]);
}

void pointers4(){
	int a[]={10,11,-1,56,67,7,5,4};
	int *p,*q;
	p=a;
	q=&a[0]+3;
	printf("%d %d %d\n",(*p)++,(*p)++,*(++p));

	printf("%d\n",*p);
	printf("%d\n",(*p)++);
	printf("%d\n",(*p)++);
	q--;
	printf("%d\n",(*(q+2))--);
	printf("%d\n",*(p+2)-2);
	printf("    %d   \n",*p);
	printf("%d\n",*(p++ -2)-1); // in this it contains a garbage value
	printf("%d\n",*(p++ -2)-1);
}

void pointers5(){
	const int a=-11;
	const int *p=&a;
	printf("%d\n",a);
}

