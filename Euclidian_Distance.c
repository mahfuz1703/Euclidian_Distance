#include <stdio.h>
#include <math.h>

int main(){
    float x1,x2,x3,y1,y2,y3,A,B,C;

    printf("Enter Your First Point:");
    scanf("%f %f",&x1,&y1);

    printf("Enter Your Second Point:");
    scanf("%f %f",&x2,&y2);

    printf("Enter Your Third Point:");
    scanf("%f %f",&x3,&y3);


    A = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    //printf("Distance of A is:%.2f\n",A);

    B = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    //printf("Distance of B is:%.2f\n",B);

    C = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    //printf("Distance of C is:%.2f\n",C);



    if(A>B && A>C){
        printf("Maximum  Distance is:%.2f\n",A);
    }

    else if(B>A && B>C){
        printf("Maximum Distance is:%.2f\n",B);
    }


    else if(C>A && C>B){
        printf("Maximum Distance is:%.2f\n",C);
    }

    else{
        printf("Number are Equal\n");

    }

    return 0;
}
