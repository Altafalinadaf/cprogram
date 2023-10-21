#include<stdio.h>
#include<stdlib.h>

/*
1. WAP to input two numbers from the keyboard and print their sum.
2. WAP to input two numbers from the keyboard and print their average.
3. WAP to calculate the area of a circle.
4. WAP to print the total seconds in a given time (hrs, min, sec’s).
5. WAP to convert temp. From Fahrenheit to centigrade. C=(F-32) * 5/9
6. WAP to SWAP (interchange) two numbers.
7. WAP to SWAP (interchange) 2 numbers without using third variable.
8. WAP to SWAP (interchange) three numbers.
9. WAP to SWAP three numbers without using fourth variable.
10. WAP to calculate the remainder of 2 numbers without using % operator.
*/


void sum_num(){
	int a,b;
	printf("Enter the number1 : ");
	scanf("%d",&a);
	
	printf("Enter the number2 : ");
	scanf("%d",&b);
	
	printf("The sum of %d and %d is = %d\n",a,b,a+b);
}

void avg_num(){
	int a,b;
	printf("Enter the number1 : ");
	scanf("%d",&a);

	printf("Enter the number2 : ");
	scanf("%d",&b);

	printf("The Avg of %d and %d is = %d\n",a,b,(a+b)/2);
}

// a=pir^2;
void area_circle(){
	const float pi=3.142;
	int r;
	printf("Enter the area of circle : ");
	scanf("%d",&r);
	printf("Area of circle is : %f \n",((float)pi*(r*r)));
}

//4. WAP to print the total seconds in a given time (hrs, min, sec’s).

void hour(){
	int hour;
	int min;
	int sec;
	printf("Enter the hours : ");
	scanf("%d",&hour);
	printf("The minutes in a given hour is : %d min\n",hour*60);
	printf("The seconds in a given hour is : %d sec\n",hour*60*60);
}

//5. WAP to convert temp. From Fahrenheit to centigrade. C=(F-32) * 5/9
void fahrenheit(){
	int fahr;
	printf("Enter the Fahrenheit : ");
	scanf("%d",&fahr);
	
	float cen=(fahr-32)*5/9;
	printf("The convert value is : %f \n",cen);
}

//6. WAP to SWAP (interchange) two numbers.
void swap(){
	int a,b;
	printf("Enter the a : ");
	scanf("%d",&a);
	
	printf("Enter the b : ");
	scanf("%d",&b);
	
	int temp=a;
	a=b;
	b=temp;
	
	printf("The swapping value is\na = %d\nb = %d\n",a,b);
}

//7. WAP to SWAP (interchange) 2 numbers without using third variable.

void swap1(){
	int a,b;
	printf("Entet the a and b values : ");
	scanf("%d %d",&a,&b);
	
	a=a+b; //4+3=7
	b=a-b; //7-3=4
	a=a-b; // 7-4=3
	
	printf("The swapping value without using temp is\na = %d\nb = %d\n",a,b);
	
}

//8. WAP to SWAP (interchange) three numbers.

void swap3(){
	int a,b,c;
	printf("Enter the 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	
	int temp;
	temp=a;
	a=b;
	b=c;
	c=temp;
	printf("The swapping value is\na = %d\nb = %d\nc = %d\n",a,b,c);
}

//9. WAP to SWAP three numbers without using fourth variable.
void swap31(){
	int a,b,c;
	printf("Enter the 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	a=a+b+c; // 1 2 3 = 6
	b=a-a+b; //
	c=a-b-c;
	a=b+c;
	printf("The swapping value is\na = %d\nb = %d\nc = %d\n",a,b,c);
}

//10. WAP to calculate the remainder of 2 numbers without using % operator.
void remainder(){
	int divisor,dividend;
	printf("Enter the divisor : ");
	scanf("%d",&divisor);
	printf("Enter the dividend : ");
	scanf("%d",&dividend);
	
	if(divisor==0){
		printf("Cannot divi with 0 \n");
		
	}
	else{
		while(dividend>=divisor){
			dividend-=divisor;
		}
	}
	
	printf("The remainder is = %d\n",dividend);
	
}

/*
1. WAP to calculate the sum of digits of a three digit number e.g. 125 is 8
2. WAP to merge three number. E.g. a= 1, b= 2, c = 8 is 128.
3. WAP to print the reverse of a 3 digit number.
4. Compute the gross salary of Mr. HARISH. Input his basic salary. His DA is
   40% of basic salary, and HRA is 20% of basic salary.
*/

void sum_numbers(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int sum;
	while(n>0){
		int rem=n%10;
		sum+=rem;
		n/=10;
	}
	printf("The sum number is = %d\n",sum);
}


// 2. WAP to merge three number. E.g. a= 1, b= 2, c = 8 is 128.
void merge3no(){
	int a,b,c;
	printf("Enter the 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	
	int temp;
	temp=a;
	int result=0;// intialise with 0 else it stores the garbage value
	while(temp>0){
		result=result*10+temp%10; //0+1=1;
		temp/=10;
	}
	
	temp=b;
	while(temp>0){
		result=result*10+temp%10;  // 10+2=12;
		temp/=10;
	}
	
	temp=c;
	while(temp>0){
		result=result*10+temp%10; //12*10=120+8=128
		temp/=10;
	}
	
	printf("The merged value is : %d\n",result); //128
}

//3. WAP to print the reverse of a 3 digit number.

void rev_num(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int rev;
	while(n>0){
		int rem=n%10;
		rev=rem+(rev*10);
		n/=10;
	}
	
	printf("The reverse number is : %d\n",rev);
}

//4. Compute the gross salary of Mr. HARISH. Input his basic salary. His DA is
//  40% of basic salary, and HRA is 20% of basic salary.
void salary(){
	int bsal,da,hra;
	printf("Enter the basic salary : ");
	scanf("%d",&bsal);
	
	da=0.4*bsal;
	hra=0.2*bsal;
	float sal=bsal+da+hra;
	printf("%.2f",sal);
}


// 3
/*
1. WAP to check whether a number input through the keyboard is even or odd.
2. WAP to print the maximum out of two numbers.
3. WAP to print the maximum out of three numbers.
4. WAP to print the maximum out of four numbers.
5. WAP to print the maximum out of four numbers. (Short logic)
6. WAP to print the second maximum out of three numbers.
7. WAP to check whether a year is leap year or not.
*/

void even_odd(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("Even\n");
	}
	else{
		printf("odd\n");
	}
}

void max2(){
	int n1,n2;
	printf("Enter the 2 number : ");
	scanf("%d %d",&n1,&n2);
	
	if(n1>n2){
     	printf("%d is greater than %d ",n1,n2);
	}
	else{
		printf("%d is greater than %d ",n2,n1);
	}
}

void max3(){
	int n1,n2,n3;
	printf("Enter the numbers : ");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	if(n1>n2 && n1>n3){
		printf("%d is greater than %d and %d\n",n1,n2,n3);
	}
	else if(n2>n1 && n2>n3){
			printf("%d is greater than %d and %d\n",n2,n1,n3);
	}
	else{
		printf("%d is greater than %d and %d\n",n3,n1,n2);
	}
}

//4. WAP to print the maximum out of four numbers.
void max4(){
	int n1,n2,n3,n4;
	printf("Enter the numbers : ");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

	if(n1>n2 && n1>n3 && n1>n4){
		printf("%d is greater than %d, %d, %d\n",n1,n2,n3,n4);
	}
	else if(n2>n1 && n2>n3 && n2>n4){
			printf("%d is greater than %d, %d, %d\n",n2,n1,n3,n4);
	}
	else if(n3>n1 && n3>n2 && n3>n4){
		printf("%d is greater than %d, %d, %d\n",n3,n1,n3,n3);
	}
	else{
		printf("%d is greater than %d, %d, %d\n",n4,n1,n2,n3);
	}
}

//6. WAP to print the second maximum out of three numbers.

void sec_max(){
	int n1,n2,n3;
	printf("Enter the 3 numbers : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	int first_max=0,sec_max=0;
	if(n1>n2 && n1>n3){
		first_max=n1;
	}
	else if(n2>n1 && n2>n3){
		first_max=n2;
	}
	else{
		first_max=n3;
	}
	
	printf("first max : %d\n",first_max);
	// 30 20 10
	if(first_max==n1){
		sec_max=(n2>n3)?n2:n3;
	}
	else if(first_max==n2){
		sec_max=(n1>n3)?n1:n3;
	}
	else{
		sec_max=(n1>n2)?n1:n2;
	}
	
	printf("second large number : %d\n",sec_max);

}

//7. WAP to check whether a year is leap year or not.

void leapYear(){
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	
	if(year%400==0 && year%100==0){
		printf("Leap Year \n");
	}
	else if(year%4==0 && year%100!=0){
		printf("Leap Year \n");
	}
	else{
		printf("Not Leap Year \n");
	}
}

/*
8. WAP to calculate the grade of a student after the input of marks of that
student.
Percentage >= 90 grade is ‘A’
Percentage >= 70 grade is ‘B’
Percentage >= 50 grade is ‘C’
Percentage < 50 grade is ‘F’
*/

void grade(){
	int sub;
	printf("Enter the number of subjects : ");
	scanf("%d",&sub);
	int marks[sub];
	
	for(int i=0;i<sub;i++){
		printf("Enter the %d marks : ",i+1);
		scanf("%d",&marks[i]);
	}
	
	float percentage;
	
	for(int i=0;i<sub;i++){
		percentage=percentage+marks[i];
	}
	percentage =(percentage/(sub*100))*100;
	printf("the percentage is = %.2f%",percentage);
	
	if(percentage >=90){
		printf("Grade = A");
	}
	else if(percentage >=70){
		printf("Grade = B");
	}
	else if(percentage>=50){
		printf("Grade = C");
	}
	else{
		printf("Grade = F");
	}
}

//WAP to compute the pension of an employee.
//If the person is male.
//Age >= 90 pension is 4000
//Age >= 60 pension is 6000
//Age < 60 pension is 0
//if the person is female.
//Age >= 90 pension is 3000
//Age >= 60 pension is 5000
//Age < 60 pension is 0

void pension_employee(){
	char gen;
	printf("Enter the gender of employee : ");
	scanf("%c",&gen);
	
	if(gen=='m'){
		int age;
		printf("Enter the male age : ");
		scanf("%d",&age);
		if(age>=90){
			printf("90 pension is 4000\n");
		}
		else if(age>=60){
			printf("60 pension is 6000\n");
		}
		else if(age<60){
			printf("60 pension is 0\n");
		}
	}
	
	if(gen=='f'){
		int age;
		printf("Enter the female age : ");
		scanf("%d",&age);
		if(age>=90){
			printf("90 pension is 3000\n");
		}
		else if(age>=60){
			printf("60 pension is 5000\n");
		}
		else if(age<60){
			printf("60 pension is 0\n");
		}
	}
}

//WAP to check whether a 3 digit number is a magic number or not.
//(Palindrome) A number is a magic number if its reverse is same as the
//original number

void polindrome(){
	int n;
	printf("Enter the numebr : ");
	scanf("%d",&n);
	
	int temp=n;
	int sum=0;
	while(n>0){
		int rem=n%10;
		sum=rem+(sum*10);
		n/=10;
	}
	
	if(temp==sum){
		printf("Number is Polindrome \n");
	}
	else{
		printf("number is not polindrome\n");
	}
}


//Any year is entered through the keyboard, WAP to determine the year is
//leap or not. Use the logical operators && and ||.

void leap_year(){
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	
	if(year%400==0 && year%100==0){
		printf("Leap Year \n");
		
	}
	else if(year%4==0 && year%100!=0){
		printf("Leap Year \n");
	}
	else{
		printf("Not Leap Year\n");
	}
}

//Any character is entered through the keyboard, WAP to determine whether
//the character entered is a capital letter, a small case letter, a digit or a
//special symbol.

void character(){
	char ch;
	printf("Enter the character : ");
	scanf("%c",&ch);
	
	if(ch>='a'&& ch<='z'){
		printf("Characater is small\n");
	}
	else if(ch>='A' && ch<='Z'){
		printf("Character is Big\n");
	}
	else if(ch>=0){
		printf("Digit\n");
	}
	else{
		printf("Speacial character ");
	}
}

void string_rev(){
	char name[]="java";
	int i=0,count=0;
	while(name[i]!='\0'){
		count++;
		i++;
	}
	int start=0;
	count=count;
	printf("%d\n",count);
	while(start<count){
		char temp=name[start];
		name[start]=name[count-1];
		name[count-1]=temp;
		start++;
		count--;
	}
	printf("%s",name);
}

void string_cancatination(){
	char str1[40]="java";
	char str2[]="programmimg";
	int len1=0,i=0,j=0;
	int len2=0;
	while(str1[i]!='\0'){
		len1++;
		i++;
	}
	printf("%d\n",len1);
	while(str2[j]!='\0'){
		len2++;
		j++;
	}
	printf("%d\n",len2);
	
	for(int i=0;i<len2;i++){
		str1[len1+i]=str2[i];
	}
	
	printf("The concatination string is : %s\n",str1);
}

// 34. WAP to print all the ASCII values and their equivalent characters
   // using a while loop. The ASCII values vary from 0 to 255.
   
void ascii_values(){
	int i=0;
	printf("Character and ASCII Values \n");
	while (i < 256) {
    printf("%c  %d\n", ((char)i), i);
    i++;
   }

}

// WAP to print all prime numbers from 1 to 300.
void prime_number(){

	for(int i=1;i<=300;i++){
		int num=i;
		int count=0;
		for(int j=1;j<=num;j++){
			if(num%j==0){
				count++;
			}
		}
		if(count==2){
			printf("%d\n",num);
		}
	}
}

// 	
void smile_face(){
	 char smilingFace = 1;

    // Loop to fill the screen with smiling faces
    for (int i = 0; i < 25; i++) {  // Rows
        for (int j = 0; j < 80; j++) {  // Columns (assuming 80x25 screen)
            putchar(smilingFace);  // Print the smiling face character
        }
        putchar('\n');  // Move to the next line
    }
}

//
void fac_add() {
    int n = 7; // Number of terms to add
    double sum = 0.0;
    double term = 1.0;

    for (int i = 1; i <= n; i++) {
        // Calculate factorial
        double factorial = 1.0;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }

        // Calculate the term and add it to the sum
        term = (double)i / factorial;
        sum += term;
    }

    printf("Sum of the first seven terms: %lf\n", sum);
}

//WAP a program to generate all combinations of 1, 2 and 3 using for loop

void combination(){
	int n=3;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			for(int k=1;k<=3;k++){
				printf("%d %d %d\n",i,j,k);
			}
		}
	}
}

// WAP to print all the prime numbers between two given numbers.

void prime_number1(){
	int start,end;
	printf("Enter the position of start and end \n");
	scanf("%d%d",&start,&end);
	
	for(int i=1;i<=end;i++){
		int num=i;
		int count=0;
		for(int j=1;j<=num;j++){
			if(num%j==0){
				count++;
				
			}
		}
		if(count==2){
			printf("%d\n",num);
		}
	}
}

// WAP to count the number of digits in a given number

void count_digit(){
	int n;
	printf("Enter the digits : ");
	scanf("%d",&n);
	
	int sum=0;
	while(n>0){
		int rem=n%10;
		sum=sum+rem;
		n/=10;
	}
	printf("The count digit : %d\n",sum);
}

// 1. WAP to sort a 1-d array using bubble sort technique.

void bubble_sort(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

// . WAP to sort a 1-d array using selection sort or linear sort technique.

void selection_sort(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter the %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	// selection sort
	int min;
	for(int i=0;i<n-1;i++){
        min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

// 3. WAP to sort a 1-d array using insertion sort technique.

void insert_element(){
	int n;
	printf("Enter the element : ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int element,pos;
	printf("Enter the elemet you want to add : ");
	scanf("%d",&element);
	
	printf("Enter the pos : ");
	scanf("%d",&pos);
	
	for(int i=n-1;i>=pos-1;i--){
		arr[i+1]=arr[i];
	}
	
	arr[pos-1]=element;
	
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

// 4. WAP to search an element in 1-d array using linear search method.

void liner_search(){
	int n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter the %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int key;
	printf("Enter the key element : ");
	scanf("%d",&key);
	
	for(int i=0;i<n;i++){
		if(arr[i]==key){
			printf("The element %d found in index %d \n",key,i);
		}
	}
}

// 5. WAP to search an element in 1-d array using binary search method.

int binary_search(){
	int n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter the %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int target;
	printf("Enter the target value : ");
	scanf("%d",&target);
	int left=0;
	int right=n-1;
	
	while(left<=right){
		int mid=(left+right)/2;
		
		if(arr[mid]==target){
			printf("Target %d found in index %d\n",target,mid);
			return 0;
		}
		else if(arr[mid]<target){
			left=mid+1;
		}
		else {
			right =mid-1;
		}

	}
	printf("The target is not found \n");
	return 0;
}

// . WAP to delete an element from 1-d array(unsorted) from the given position

void delete_array(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int delete1;
	printf("Enter the which element you want to delete : ");
	scanf("%d",&delete1);
	
	// 2 1 8 5
	int index=0;
	for(int i=0;i<n;i++){
		if(arr[i]==delete1){
			index=i;
		}
	}

	for(int i=index;i<n;i++){
		arr[i]=arr[i+1];
	}
	n--;
	
	printf("The delete element is in index %d\n",index);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

void delete_array2(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];

	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}

	int delete1;
	printf("Enter the which element you want to delete : ");
	scanf("%d",&delete1);

	// 2 1 8 5
	int index=0;
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]==delete1){
			count++;
		}
	}
	
	printf("count is %d\n",count);
	if(count>1){
		int n2;
		printf("%d is occure more than one time\n",delete1);
		printf("1 for first oocure value\n2 for last occure value\n");
		scanf("%d",&n2);
		
		if(n2==1){
		    for(int i=0;i<n;i++){
		        if(arr[i]==delete1){
			    index=i;
			    break;
		       }
	        }
        }
		else{
			for(int i=0;i<n;i++){
		        if(arr[i]==delete1){
			    index=i;
		       }
	        }
		}
	}
	else{
		for(int i=0;i<n;i++){
		if(arr[i]==delete1){
			index=i;
			break;
		}
	}
	}

	for(int i=index;i<n;i++){
		arr[i]=arr[i+1];
	}
	n--;

	printf("The delete element is in index %d\n",index);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

// 8. WAP to delete an element from 1-d sorted array.

void delete_element3(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	printf("\nsorted array list is \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	int delete1;
	printf("\nEnter the which element you want to delete : ");
	scanf("%d",&delete1);
	
	int index=0;
	for(int i=0;i<n;i++){
		if(arr[i]==delete1){
			index=i;
		}
	}
	for(int i=index;i<n;i++){
		arr[i]=arr[i+1];
	}
	n--;
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

// 9. WAP that will read an array of integers and print even and odd element separately.

void even_odd_list(){
	int start,end;
	printf("Enter the starting range : ");
	scanf("%d",&start);
	
	printf("Enter the end range : ");
	scanf("%d",&end);
	
	printf("Even number list \n");
	for(int i=start;i<=end;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
	
	printf("\nOdd number list \n");
	for(int i=start;i<=end;i++){
		if(i%2!=0){
			printf("%d ",i);
		}
	}
}

// . WAP to find sum of element appearing at even and odd subscript position of an array of integers

void array_even_index(){
	int n;
	printf("Enter the array size : ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("here is the even index array : \n");
	for(int i=0;i<n;i++){
		if(i%2==0){
			printf("%d ",arr[i]);
		}
	}
	
	printf("\nhere is the odd index array : \n");
	for(int i=0;i<n;i++){
		if(i%2!=0){
			printf("%d ",arr[i]);
		}
	}
}

// 11. WAP to find maximum and the minimum values from a set of values stored in an array, along with their positions in the array.
void max_min_array(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int max=0;
	int min=88888;
	printf("Array list \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	int c=0,c1=0;
	
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];

		}
		if(arr[i]<min){
			min=arr[i];

		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]==max){
			break;
		}
		c++;
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]==min){
			break;
		}
		c1++;
	}
	printf("\nMAX = %d and position is %d\n",max,c+15);
	printf("MIN = %d and position is %d\n",min,c1+1);
}

// 14. WAP that will read 10 integers into an array and then display their averages

void avg_array(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int sum=0,avg=0;
	printf("Array list \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	for(int i=0;i<n;i++){
		sum=sum+arr[i];
	}
	printf("\nTotal sum is : %d\n",sum);
	
	printf("Avg of number is : %d\n",sum/n);
}


// 15. WAP that will display the maximum and it position in an array of integers.
// If the maximum occurs more than once its last position should be displayed.

void max_pos(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	
	printf("Enter the array element : \n");
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int max=0,min=99999;
	int count=0;
	int MaxIndex=0;
	int MinIndex=0;
	
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}

		if(arr[i]<min){
			min=arr[i];
		}
	}
	int MaxCount=0;
	int MinCount=0;
	for(int i=0;i<n;i++){
		if(arr[i]==max){
			MaxCount++;
		}
		
		if(arr[i]==min){
			MinCount++;
		}
	}
	if(MaxCount>1){
		for(int i=MaxIndex;i<n;i++){
			if(arr[i]>max){
				max=arr[i];
			}
		}
	}
	if(MinCount>1){
		for(int i=MaxIndex;i<n;i++){
			if(arr[i]>max){
				min=arr[i];
			}
		}
	}
	int p=MaxIndex;
	for(int i=p;i<n;i++){
		if(arr[i]==max){
			MaxIndex=i;
		}
	}
	int p1=MinIndex;
	for(int i=0;i<n;i++){
		if(arr[i]==min){
			MinIndex=i;
		}
	}
	
	printf("Max = %d\nPos = %d\n",max,MaxIndex+1);
	printf("Min = %d\nPos = %d\n",min,MinIndex+1);
	
}

// above program one more way

void MaxMin(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int *arr=(int*)malloc(n*sizeof(int));
	printf("Array elements \n");
	for(int i=0;i<n;i++){
		printf("%d element : ",i+1);
		scanf("%d",arr+i);
	}
	int max=0,min=8888,minIndex=0,maxIndex=0;
	for(int i=0;i<n;i++){
		int temp=arr[i];
		for(int j=i+1;j<n;j++){
			if(arr[j]>=max){
				max=arr[j];
				maxIndex=j;
			}
			if(arr[j]<=min){
				min=arr[j];
				minIndex=j;
			}
		}
	}
	printf("Max = %d\nPos = %d\n",max,maxIndex+1);
	printf("Min = %d\nPos = %d\n",min,minIndex+1);
}

// 17. WAP that will read roll no. And marks of 10 students in two differentarrays.
//Program will print the marks of students whose roll no. Is provided by user.

void marks(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];

	printf("roll number list \n");
	for(int i=0;i<n;i++){
		printf("Enter student %d rollnumber : ",i+1);
		scanf("%d",arr+i);
	}

	char name[n][50];
	printf("Enter here list : \n");
	for(int i=0;i<n;i++){
     printf("Enter the %d name : \n",i+1);
		scanf("%s",&name[i]);
	}


    int rollnumber;
	printf("Enter the roll number : ");
	scanf("%d",&rollnumber);

	for(int i=0;i<n;i++){
		if(arr[i]==rollnumber){
		    printf("Roll number = %d\nName = %s\n",arr[i],name[i]);

	    }
    }
}

// WAP that will read 2 array, sum their individual element in third array and display the third array

void sum3array(){
	int n;
	printf("Enter the size of both array : ");
	scanf("%d",&n);
	int arr[n];
	int arr2[n];
	
	printf("First array list : \n");
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("second array list : \n");
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr2[i]);
	}
	
	printf("third array list : \n");
	int arr3[n];
	for(int i=0;i<n;i++){
		arr3[i]=arr[i]+arr2[i];
		printf("%d ",arr3[i]);
	}
}

// WAP that will read an array of integers. after reading array, the program
// should check if there any duplicate value in the array. The program should
// display the appropriate message.

void dublicate(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("%d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	bool flag=0;
	for(int i=0;i<n;i++){
		int temp=arr[i];
		for(int j=i+1;j<n;j++){
			if(temp==arr[j]){
				flag=1;
			}
		}
	}
	if(flag==1){
		printf("Dublicate value in array : \n");
	}
	else{
		printf("No Dublicate value in array : \n");
	}
}
// WAP that will read 2 arrays. Sum individual elements of both arrays in reverse order and stores it in third array. Display the third array.

void RevSum3Array(){
	int n;
	printf("Enter the size of both array : ");
	scanf("%d",&n);
	int arr[n];
	int arr2[n];

	printf("First array list : \n");
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}

	printf("second array list : \n");
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr2[i]);
	}

	printf("third array list : \n");
	int arr3[n];
	int j=n-1;
	for(int i=0;i<n;i++){
		arr3[j]=arr[i]+arr2[i];
		j--;
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr3[i]);
	}
}

// 21. WAP that will read an array and insert an integer at the end of array.

void insert_end_array(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int *arr=(int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int count=0;
	printf("Array list : \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
		count++;
	}
	printf("\n");
	

	printf("How many element you want to insert : ");
	scanf("%d",&n);
	
	// here we are reallocating the size of array
	arr=(int*)realloc(arr,n*sizeof(int));
	
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+count+1);
		scanf("%d",&arr[count+i]);
	}

	printf("The new Array list : \n");
	for(int i=0;i<n+count;i++){
		printf("%d ",arr[i]);

	}
	printf("\n");
}

// 22. WAP to insert an integer at the beginning of an array.
void insert_start_array(){
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);

	int *arr=(int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int count=0;
	printf("Array list \n");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
		count++;
	}
	printf("\n");
	
	printf("Enter how many element you want to add : ");
	scanf("%d",&n);
	arr=(int*)realloc(arr,n*sizeof(int));
	
	for(int i=0;i<count;i++){
		arr[n+i]=arr[i];
		
	}
	for(int i=0;i<n;i++){
		printf("Enter %d element : ",i+1);
		scanf("%d",&arr[i]);
	}
//	for(int i=count;i<n;i++){
//		printf("%d ",arr[i]);
//	}

	for(int i=0;i<count+n;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
//	sum_num();
//	avg_num();
//	area_circle();
//	hour();
//    fahrenheit();
//    swap();
//	swap1();
//	swap3();
//	swap31();
//	remainder();
//
//  Second one page no.63
//	sum_numbers();
//	merge3no();
//	rev_num();
//	salary();
//
//  3
//  even_odd();
//  max2();
//  max3();
//   max4();
//    sec_max();
//    leapYear();
//   grade();
//   pension_employee();
//	 polindrome();
//	 leap_year();
//	 character();
//	 ascii_values();
//	prime_number();
	
// 4th exercise
 //  string_rev();
 //  string_cancatination();
//   smile_face();
 //  fac_add();
 //  combination();
 //  prime_number1();
 //  count_digit();
 //  bubble_sort();
 //  selection_sort();
 //  insert_element();
 //  liner_search();
 //  binary_search();
 //  delete_array();
 //  delete_array2();
 //  delete_element3();
//   even_odd_list();
//   array_even_index();
//   max_min_array();
//   avg_array();
//	max_pos();
//	 MaxMin();
//	 marks();
//	 sum3array();
//	 dublicate();
//	 RevSum3Array();
//	insert_end_array();
	insert_start_array();


	return 0;
}
