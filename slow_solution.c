#include <stdio.h>
#include <math.h>

int main(void) {
	int i,j,x,t,n,sum;
	scanf("%d",&x);
	for(i=0; i<x; i++){
	    scanf("%d %d %d",&t,&n,&sum);
	    int iterations=0;
	    for(j=0;j<t;j++){
	        if(sum>0){
	            if(sum>=n){
	                sum=sum-n;
	                iterations = iterations + (int)pow(n,2);
	            } else{
	                iterations = iterations + (int)pow(sum,2);
	                sum = 0;
	            }
	        } else{
	            break;
	        }
	    }
	    printf("%d\n",iterations);
	}
	return 0;
}



