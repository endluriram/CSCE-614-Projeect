// Code for bit victimization

#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
//variables
b=6;
int entropy_counter[b];
int correlation_counter[b*(b-1)/2];
int bit[b];

int index; //index of cache
int count_total_address;
int use_metric[b*(b+1)/2];
int selected_bit;
int tracki[b];
int trackj[b];

int bit_victim_phase(int bit[],int entropy_counter[],int correlation_counter[],int tracki[],int trackj[])
{

for (int i=0;i<=b;i++)
  {
    bit[i]=CHECK_BIT(index,i);
    entropy_counter[i]=enropy_counter[i]+bit[i];
    for (int j=0; j<i; j++)
    {
      correlation_counter[j]=correlation_counter[j]+b[i]^b[j];
      tracki[j]=i;
      trackj[j]=j;
    }
    }
  }
for (int k=0; k<b;k++)
{
  use_metric[k]=MIN(entropy_counter[k],count_total_address-entropy_counter[k]);
}
for (k=b; k<b(b+1);k++)
{
  use_metric[k]=MIN(correlation_counter[k],count_total_address-correlation_counter[k]);
}

selected_bit=indexofSmallestElement(use_metric,b(b+1)/2);
if(selected_bit<b)
    victim_bit=slected_bit;
else{
    selected_bit=selected_bit-b;
    victim_bit=MIN(entropy_counter[tracki[selected_bit]],entropy_counter[trackj[selected_bit]]);
  }
  
  return victim_bit;
}

int indexofSmallestElement(double array[], int size)
{
    int index = 0;

    for(int i = 1; i < size; i++)
    {
        if(array[i] < array[index])
            index = i;              
    }

    return index;
}
