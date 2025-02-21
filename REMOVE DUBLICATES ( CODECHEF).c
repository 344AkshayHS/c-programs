#include <stdio.h>

int logic(int n,int a[]);
void printingsorted(int a[],int sorted);

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
    while(t--){
        
        int n;
	    scanf("%d",&n);
	    
	    int* a =(int *)malloc(n *sizeof(int));
	    
        for(int i=0;i<n;i++){
	    scanf("%d",&a[i]);
	    }
	    
	    int sorted = logic(n,a);
	    printf("%d\n",sorted);
	    
	    printingsorted(a,sorted);
	    
	    free(a);
	   
    }
    return 0;

}
int logic(int n,int a[]){
    int idx =0;
    for(int i=1;i < n;i++){
        if(a[idx]!=a[i]){
            idx++;
            a[idx] = a[i];
        }
    }
    return idx+1;
}

void printingsorted(int a[],int sorted){
    for(int i=0; i<sorted ;i++){
	        printf("%d ",a[i]);
	    }
	    printf("\n");
}
