//Assignment 4
//stacks and queues
//LEETCODE PROBLEM
//STACK USING QUEUE
//@Raghav

Code:

GENERAL
typedef struct {
   int data;
} MyStack;

/** Initialize your data structure here. */
int front1;
int rear1;
int size1;


MyStack* myStackCreate() {
    MyStack *q1=(MyStack *)malloc(sizeof(MyStack)*1000);
    front1=0;
    rear1=0;
    size1=0;
    return q1;

}
MyStack* myStackCreate2() {
    MyStack *q2=(MyStack *)malloc(sizeof(MyStack)*1000);
    // front2=0;
    // rear2=0;
    // size2=0;
    return q2;

}

/** Push element x onto stack. */
void myStackPush(MyStack* q1, int x) {
    MyStack *q2=myStackCreate2();
    int size2=size1;
    int i,rear2=0;
    for(i=0;i<=rear1-1;i++)
    {
        q2[rear2++].data=q1[i].data;
    }
    myStackCreate();
    q1[rear1++].data=x;
    for(i=0;i<=size2-1;i++)
    {
        q1[rear1++].data=q2[i].data;
    }
  size1=size2+1;
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* q1) {
    int ele=q1[front1].data;
    front1++;
    size1--;
    return ele;

}

/** Get the top element. */
int myStackTop(MyStack* q1) {
   return q1[front1].data;
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* q1) {
   return size1==0;

}

void myStackFree(MyStack* q) {

}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/






















USING INT AS DATA TYPE

typedef struct {
   //int data;
} MyStack;

/** Initialize your data structure here. */
int front1;
int rear1;
int size1;


int* myStackCreate() {
    int *q1=(int *)malloc(sizeof(int)*1000);
    front1=0;
    rear1=0;
    size1=0;
    return q1;

}
int* myStackCreate2() {
    int *q2=(int *)malloc(sizeof(int)*1000);
    // front2=0;
    // rear2=0;
    // size2=0;
    return q2;

}

/** Push element x onto stack. */
void myStackPush(int* q1, int x) {
    int *q2=myStackCreate2();
    int size2=size1;
    int i,rear2=0;
    for(i=0;i<=rear1-1;i++)
    {
        q2[rear2++]=q1[i];
    }
    myStackCreate();//creating q1 from the beginning
    q1[rear1++]=x;//inserting x at beginning and the copying prev elements
    for(i=0;i<=size2-1;i++)
    {
        q1[rear1++]=q2[i];
    }
  size1=size2+1;//one element added so size1=size2+1
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(int* q1) {
    int ele=q1[front1];//as front is 0 initially
    front1++;
    size1--;
    return ele;

}

/** Get the top element. */
int myStackTop(int* q1) {
   return q1[front1];
}

/** Returns whether the stack is empty. */
bool myStackEmpty(int* q1) {
   return size1==0;

}

void myStackFree(int* q1) {

}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/
