
#include <stdio.h>

#include<math.h>


int main(){

	int testcase;

	float n;
	
	float k;

	scanf("%d", &testcase);

	if(testcase<=100000)

	{

	for(int i=0;i<testcase;i++)

	{

	    scanf("%d",&n);

	    scanf("%d",&k);

	    float c=n/k;

	    int d=ceil(c);

	    //if(1.000<=k && k<=n && n<=100000.000)

	    if(d%2==0)

	    {

	        printf("Dishant\n");

	    }

	    else

	    {

	        printf("Arpa\n");

	    }

	}

	}

	else

	{

	    return 0;

	}


}

