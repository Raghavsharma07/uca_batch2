/*
Leetcode
@Raghav
Min Stack problem

11/08/2021

Code :
*/

int top;
typedef struct {
    int min;
    int data;
    //int top;

} MinStack;

/** initialize your data structure here. */

MinStack* minStackCreate() {
  MinStack *m=(MinStack *)malloc(sizeof(MinStack)*30000);
 top=-1;
    return m;

}

void minStackPush(MinStack* m, int val) {
    if(top==-1)
    {
        top++;
        m[top].data=val;
        m[top].min=val;

    }
    else
    {
        top++;
        if(m[top-1].min > val )
        {
            m[top].min=val;
        }
        else
        {
            m[top].min=m[top-1].min;
        }
        m[top].data=val;

    }


}

void minStackPop(MinStack* m) {

  top=top-1;
}

int minStackTop(MinStack* m) {
    if(top==-1)
        return NULL;
  return m[top].data;
}

int minStackGetMin(MinStack* m) {
     if(top==-1)
        return NULL;
  return m[top].min;
}

void minStackFree(MinStack* m) {
    free(m);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);

 * minStackPop(obj);

 * int param_3 = minStackTop(obj);

 * int param_4 = minStackGetMin(obj);

 * minStackFree(obj);
*/
