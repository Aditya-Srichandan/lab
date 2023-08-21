//#include<stdio.h>
//#include<stdlib.h>
//void create(int a[],int*n)
//{
//	int i;
//	printf("\n enter how many elements");
//	scanf("%d",&n);
//	printf("\n enter the data into array");
//	for(i=0;i<=*n;i++)
//	scanf("%d",&a[i]);
//}
//void traverse(int a[],int lb,int ub)
//{
//	int i;
//	printf("\n content of array is");
//	for(i=1;i<=ub;i++)
//	printf("%d",a[i]);
//}
//void insert(int a[],int*n,int item,int pos)
//{
//	int i=*n-1;
//	while(i>=pos-1)
//	{
//		a[i+1]=a[i];
//		i--;
//	}
//	a[pos-1]=item;
//	(*n)++;
//	printf("\n after insertion the array is");
//	traverse(a,0,*n-1);
//}
//void delete(int a[],int*n,int pos)
//{
//	int i,item=a[pos-1];
//	for(i=pos-1;i<*n;i++)
//	a[i]=a[i+1];
//	(*n)--;
//	printf("\n item deleted:%d\n after deletion the array is",item);
//	traverse(a,0*n-1);
//}
//void linear_search(int a[10],int n,int s)
//{
//	int i;
//	for(i=0;i<n;i++)
//	if(a[i]==s)
//	{
//		printf("\n %d found at %d position",s,i+1);
//		break;
//	}
//	if(i==n)
//	
//	printf("\n %d not found",s);
//		
//}
//void bubble_sort(int a[],int n)
//{
//	int i,j,t;
//	for(i=0;i<=n-1;i++)
//	{
//		for(j=0;j<=(n-i)-1;j++)
//		{
//			if(a[i]>a[j+1])
//			{
//				t=a[j];
//				a[j]=a[j+1];
//				a[j+1]=t;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[100],op,n,pos,item,s
//	create(a,&n);
//	do
//	{
//		printf("\nMENU:\n1->DISPLAY\n2->INSERT\n3->DELETE->\n4->SEARCH\n5-Sort\n6->Exit\n enter your choice\n\n");
//		scanf("%d",&op);
//		switch(op)
//		{
//			case 1:traverse(a,o,n-1);
//			break;
//			case 2:printf("\n enter the item and position for deletion");
//			scanf("%d%d",&item,&pos);
//			insert(a,&n,item,pos);
//			break;
//			case 3:printf("\n enter the positon for deletion");
//			scanf("%d",&pos);
//			delete(a,&n,pos);
//			break;
//			case 4:printf("\n enter the element to search");
//			scanf("%d",&s);
//			linear_search(a,n,s);
//			break;
//			case 5:bubble_sort(a,n);
//			break;
//			case 6: exit(0);
//		}
//	}while(op<7);
//	system("PAUSE");
//	return 0;
//	
//}



//#include<stdio.h>
//int main()
//{
//	int i,n, a[5],flag=0,key,position;
//	printf("\n enter the no of element");
//	scanf("%d",&n);
//	printf("\n enter the elements of array");
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	printf("\n enter the element to search");
//	scanf("%d",&key);
//	for(i=0;i<n;i++)
//	{
//		if(a[i]==key)
//		{
//		flag=1;
//		position=i;
//		break;
//	}
//		
//	}
//	if(flag==1)
//	{
//		printf("\n the element %d is found position %d",key,position);
//	}
//	else
//	{
//		printf("\n the element %d is not found",key);
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int i,arr[10],search,first,last,middle;
//	printf("\n enter 10 elements ");
//	for(i=0;i<10;i++)
//	scanf("%d",arr[i]);
//	printf("\n enter element to be search");
//	scanf("%d",&search);
//	first=0;
//	last=9;
//	middle=(first+last)/2;
//	while(first<=last)
//	{
//		if(arr[middle]<search)
//		first=middle+1;
//		else if(arr[middle]==search)
//		{
//			printf("\n the number %dfound at positon %d",search,middle+1);
//			break;
//		}
//		else
//		last=middle-1;
//		middle=(first+last)/2;
//	}
//	if(first>last)
//	printf("\n the number %d is not found in given array",search);
//}


//#include <stdio.h>
//
//int main()
//{
//  int array[100], n, i, j, swap;
//
//  printf("Enter number of elements\n");
//  scanf("%d", &n);
//
//  printf("Enter %d integers\n", n);
//
//  for (i = 0; i < n; i++)
//    scanf("%d", &array[i]);
//
//  for (i = 0 ; i < n - 1; i++)
//  {
//    for (j = 0 ; j < n - i - 1; j++)
//    {
//      if (array[j] > array[j+1]) /* For decreasing order use '<' instead of '>' */
//      {
//        swap       = array[j];
//        array[j]   = array[j+1];
//        array[j+1] = swap;
//      }
//    }
//  }
//
//  printf("Sorted list in ascending order:\n");
//
//  for (i = 0; i < n; i++)
//     printf("%d\n", array[i]);
//
//  return 0;
//}












//#include <stdio.h>
//#include <stdlib.h>
//
//void create(int a[], int *n) {
//    int i;
//    printf("\n enter how many elements: ");
//    scanf("%d", n);
//    printf("\n enter the data into the array:\n");
//    for (i = 0; i < *n; i++)
//        scanf("%d", &a[i]);
//}
//
//void traverse(int a[], int lb, int ub) {
//    int i;
//    printf("\n content of array is:\n");
//    for (i = lb; i <= ub; i++)
//        printf("%d ", a[i]);
//    printf("\n");
//}
//
//void insert(int a[], int *n, int item, int pos) {
//    int i = (*n) - 1;
//    while (i >= pos - 1) {
//        a[i + 1] = a[i];
//        i--;
//    }
//    a[pos - 1] = item;
//    (*n)++;
//    printf("\n after insertion the array is:\n");
//    traverse(a, 0, *n - 1);
//}
//
//void deleteELEMENT(int a[], int *n, int pos) {
//    int i;
//    int item = a[pos - 1];
//    for (i = pos - 1; i < (*n) - 1; i++)
//        a[i] = a[i + 1];
//    (*n)--;
//    printf("\n item deleted: %d\n after deletion the array is:\n", item);
//    traverse(a, 0, *n - 1);
//}
//
//void linear_search(int a[], int n, int s) {
//    int i;
//    for (i = 0; i < n; i++) {
//        if (a[i] == s) {
//            printf("\n %d found at %d position\n", s, i + 1);
//            return;
//        }
//    }
//    printf("\n %d not found\n", s);
//}
//
//void bubble_sort(int a[], int n) {
//    int i, j, t;
//    for (i = 0; i < n - 1; i++) {
//        for (j = 0; j < n - i - 1; j++) {
//            if (a[j] > a[j + 1]) {
//                t = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = t;
//            }
//        }
//    }
//}
//
//int main() {
//    int a[100], op, n = 0, pos, item, s;
//    create(a, &n);
//    do {
//        printf("\nMENU:\n1->DISPLAY\n2->INSERT\n3->DELETE\n4->SEARCH\n5->Sort\n6->Exit\n enter your choice: ");
//        scanf("%d", &op);
//        switch (op) {
//            case 1:
//                traverse(a, 0, n - 1);
//                break;
//            case 2:
//                printf("\n enter the item and position for insertion: ");
//                scanf("%d %d", &item, &pos);
//                insert(a, &n, item, pos);
//                break;
//            case 3:
//                printf("\n enter the position for deletion: ");
//                scanf("%d", &pos);
//                deleteELEMENT(a, &n, pos);
//                break;
//            case 4:
//                printf("\n enter the element to search: ");
//                scanf("%d", &s);
//                linear_search(a, n, s);
//                break;
//            case 5:
//                bubble_sort(a, n);
//                printf("\n array after sorting:\n");
//                traverse(a, 0, n - 1);
//                break;
//            case 6:
//                exit(0);
//        }
//    } while (op < 7);
//
//    return 0;
//}




//#include <stdio.h>
//
//int main() {
//    int i, arr[10], search, first, last, middle;
//
//    printf("\n enter 10 elements: ");
//    for (i = 0; i < 10; i++)
//        scanf("%d", &arr[i]);
//
//    printf("\n enter element to be searched: ");
//    scanf("%d", &search);
//
//    // Binary search requires the array to be sorted
//    // You can add sorting code here if needed
//
//    first = 0;
//    last = 9;
//    middle = (first + last) / 2;
//
//    while (first <= last) {
//        if (arr[middle] < search)
//            first = middle + 1;
//        else if (arr[middle] == search) {
//            printf("\n the number %d found at position %d\n", search, middle + 1);
//            return 0;  // Terminate the program after finding the element
//        } else
//            last = middle - 1;
//
//        middle = (first + last) / 2;
//    }
//
//    if (first > last)
//        printf("\n the number %d is not found in the given array\n", search);
//
//    return 0;
//}


//#######################################lab ex-4####################################

//#include <stdio.h>
//#include <stdlib.h>  // Include this header for the exit() function
//#define STACK_SIZE 5
//
//struct stack {
//    int items[STACK_SIZE];
//    int top;
//};
//
//typedef struct stack STACK;
//
//int is_empty(STACK *s) {
//    if (s->top == -1)
//        return 1;
//    else
//        return 0;
//}
//
//int is_full(STACK *s) {
//    if (s->top == STACK_SIZE - 1)
//        return 1;
//    else
//        return 0;
//}
//
//void push(int item, STACK *s) {
//    if (is_full(s))
//        printf("stack overflow\n");
//    else {
//        s->top++;
//        s->items[s->top] = item;
//    }
//}
//
//void pop(STACK *s) {
//    int item;
//    if (is_empty(s)) {
//        printf("stack underflow\n");
//    } else {
//        item = s->items[s->top];
//        s->top--;
//        printf("item deleted: %d\n", item);
//    }
//}
//
//void display(STACK *s) {
//    int i;
//    if (is_empty(s)) {
//        printf("stack is empty\n");
//    } else {
//        printf("the contents of the stack:\n");
//        for (i = s->top; i >= 0; i--) {
//            printf("%d\n", s->items[i]);
//        }
//    }
//}
//
//int main() {
//    int item, choice;
//    STACK s;
//    s.top = -1;
//
//    do {
//        printf("\n1:push\n2:pop\n3:display\n4:exit\n");
//        printf("enter the choice: ");
//        scanf("%d", &choice);
//
//        switch (choice) {
//            case 1:
//                printf("enter the item to be inserted: ");
//                scanf("%d", &item);
//                push(item, &s);
//                break;
//            case 2:
//                pop(&s);
//                break;
//            case 3:
//                display(&s);
//                break;
//            case 4:
//                exit(0);
//            default:
//                printf("Invalid choice. Please choose again.\n");
//        }
//    } while (choice < 5);
//
//    return 0;
//}





