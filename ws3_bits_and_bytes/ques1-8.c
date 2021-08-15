//Uca_Batch (grp 2)

//Worksheet 3

//Bits and bytes
//13/08/2021
//
//@Raghav Sharma

#include<stdio.h>



/*
/*  bitAnd - x & y using only ~ and |
/* Example bitAnd(6, 5) = 4
// Legal ops:  ~ |
/*Max ops: 8
*/
int bitAnd(int n1,int n2)
{
        return ~(~n1 | ~n2);
}



/*
/*  bitXor - x ^ y using only ~ and |
/* Example bitXor(4, 5) = 1
// Legal ops:  ~ &
/*Max ops: 14
*/
int bitXor (int x, int y) {
    return  ~( ~(x & ~y ) & ~( y & ~x ) );

}



/*
* sign - return 1 if positive, 0 if zero, and -1 if negative
* Examples: sign(130) = 1, sign(-23) = -1
* Legal ops: ! ~ & ^ | + << >>
* Max ops : 10
*/
int sign(int n)
{
        return !(!n) | n>>31 ;
}



/*
* getByte - extract byte n from word x
* Examples: getByte(0x12345678, 1)  = 0x56
*Legal ops: ! ~ & ^| + << >>
Max ops: 6
*/


int getByte(int x, int n) {
        return (x>>(n<<3)) & 0xFF;
        //1 byte = 8 bits so multiplying by 8 via <<3 and then to extract it we use & with oxff (255 = 11111111) (1 byte = 8 bits )
}



/* logicalShift - shift x to the right by n, using a logical shift
*  can assume that 0 <=n<=31
* examples: logicalShift(0x87654321, 4) = 0x8765432
*  Legal ops:  ~ & ^ | + << >>
*Max ops: 20
*/

int logicalShift( int x, int n) {

        unsigned int x2=x;
        return x2>>n;
}


/*
* conditional - same as x ? y : z
* example conditional (2, 4, 5) = 4
* ! ~ & ^ | + << >>
* Max ops: 16
*/
int conditional(int x, int y, int z) {

        int k;
        k= (( !(!x) )<<31 )>>31;  //if x=0, k=00000000.. if x!=0 , k=1111111....
        return (k&y | ~k&z);
}


/* bang - Compute !x without using !
*  Examples: bang(3)=0, bang(0)=1
*  Legal ops: ~ & ^ | + << >>
*  Max ops: 12
*/

int bang(int x) {
        //-x = ~x + 1
        //x>>31 = -1 //if(x<0)
        //x >> 31 = 0 if x>=0
        return ( x>>31 | (~x+1)>>31) + 1;
}


/*
 Return x with the n bits that begin at position p inverted (i.e. turn 0  into 1 and vice versa)
 and the rest left unchanged. Consider the indices of x to begin with the  lower -order bit   numbered
 Legal ops: ~ & ^ | << >>
 as zero
*/
int invert (int x, int p, int n) {

        //TODO
	//x=18  -> 1 0 0 1 0
        //p=5
        //n=2
        int k=(1<<31)>>31; //-1
        int b=((1<<n)+k);// n=2 -> 11 , n=3->111 and so on  ( b= 3 in our case {11} )
        int c=b<<(p-n);// say b is 11 and p-n =2 then c gives 1100 (say p is 4 and n is 2)  //11000 (taking 1s to position p) 
        // printf("%d ",c);
        // printf("%d ",b);
        int d=((x&c)>>(p-n));//x&c extracts given bytes and right shift removes additional nos following
        // printf(" %d ",d);
        return  ~d;
        //return 0;
} //~x basically returns -(x+1)

int main()
{
        //int n1,n2;
        // scanf("%d %d",&n1,&n2);
        printf("bitAnd 6 and 5 is %d \n",bitAnd(6,5));
        printf("bitXor of 4 and 5 is %d \n", bitXor(4,5));
        printf("The sign of 130 is %d \n",sign(130));
        printf("The sign of 0 is %d \n",sign(0));
        printf("The sign of -23 is %d \n",sign(-23));
        printf("nth (First in this case) byte in 0x12345678 is %x\n",getByte(0x12345678, 1));
        printf("%x is the result for logicalShift(0x87654321, 4) \n",logicalShift(0x87654321, 4));
        printf("%d will be the answer on calling conditional function\n",conditional(-2,4,5));
        printf("%d is result for bang(n) n=0 in this case \n",bang(0));
	printf("%d is the result for invert(18,5,2)\n",invert(18,5,2));
        
	return 0;

}
