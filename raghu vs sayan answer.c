#include<stdio.h>

int arr[10001];


void heapdown(int,int);


void main()
{
    
int t,a,b,n,i,sum1,sum2,temp;
    
scanf("%d",&t);
    
arr[0]=100001;
    
for(;t;--t)
    {
        
scanf("%d%d%d",&a,&b,&n);
        
sum1=0,sum2=0;
        
for(i=0;i<n;++i)
        {
            
scanf("%d",&arr[i+1]);
        }
        
for(i=n/2;i>=1;--i)
        {
            
heapdown(i,n);
        }
        
while(sum1+arr[1]<=a && sum2+arr[1]<=b && n)
        {
            
sum1+=arr[1];
            
sum2+=arr[1];
            
arr[1]=arr[n--];
            
heapdown(1,n);
        }
        
if(sum1+arr[1]<=a && n)
        {
            
printf("Raghu Won\n");
        }
        
else if(sum2+arr[1]<=b && n)
        {
            
printf("Sayan Won\n");
        }
        
else
        
printf("Tie\n");
    }
    

}



void heapdown(int posn,int hsize)
{
    
int i=posn,lchild=2*i,rchild=2*i+1,k=arr[posn];
    
while(rchild<=hsize)
    {
        
if(arr[rchild]>k && arr[lchild]>=k)
        {
            
arr[i]=k;
            
return;
        }
        
else if(arr[rchild]<arr[lchild])
        {
            
arr[i]=arr[rchild];
            
i=lchild;
        }
        
else
        {
            
arr[i]=arr[lchild];
            
i=lchild;
        }
        
rchild=2*i+1;
        
lchild=2*i;
    }
    
if(lchild==hsize && arr[lchild]<k)
    {
        
arr[i]=arr[lchild];
        
i=lchild;
    }
    
arr[i]=k;
}
