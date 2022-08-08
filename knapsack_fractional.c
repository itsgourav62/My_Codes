/*Knapsack Problem*/
#include <stdio.h>


int main()
{
	int n,i,j;
	float cur_w,mw, total_w = 0, pr=0,fr;

	printf("Enter Maximum Weight : ");
	scanf("%f",&mw);
	cur_w = mw;

	printf("Enter the number of the elements : ");
	scanf("%d",&n);
	float w[n],v[n],u[n];
	int o[n];

	for(i=0;i<n;i++)
	{
		printf("\nObject %d - ",i+1);
		printf("\n\tWeight : ");
		scanf("%f",&w[i]);
		printf("\tValue : ");
		scanf("%f",&v[i]);
		o[i]=i+1;
		total_w += w[i];
		u[i] = v[i]/w[i];
	}

	if(total_w < mw)
	{
		printf("\nTotal weight of given item must be greater than the Maximum Weight. ");
		return 0;
	}

	for (i = 0; i < n; ++i)
      for (j = i + 1; j < n; ++j)
    			if (u[i] < u[j])
				{
    			u[i]=u[i]+u[j]- (u[j]=u[i]);
      		v[i]=v[i]+v[j]- (v[j]=v[i]);
          w[i]=w[i]+w[j]- (w[j]=w[i]);
          o[i]=o[i]+o[j]- (o[j]=o[i]);
        }

    for(i=0 ; (i<n && cur_w >0) ; i++)
		{
    	if(w[i] > cur_w)
				{
						fr = cur_w/w[i];
						cur_w -= fr * w[i];
						pr += fr * v[i];
						printf("\n\nAdded Object %d(*%.2f)[Price: %f; Weight: %f]. Space Remaning: %f",o[i],fr,v[i],w[i],cur_w);
				}

		else
		{
			cur_w -= w[i];
			pr += v[i];
			printf("\n\nAdded Object %d[Price: %f; Weight: %f]. Space Remaning: %f",o[i],v[i],w[i],cur_w);
		}
	}

	printf("\n\nFilled the Bag with object worth %f.\n",pr);

	return 0;
}
