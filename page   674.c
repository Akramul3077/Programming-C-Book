#include<stdio.h>
#include<assert.h>
FILE *input,*output;
int n,d[1010],freq[370][10],m[13]={31,30,31,30,28,31,30,31,30,31,30,31};
char month[13][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};

void initGlobalvariables(){
      int i,j;

      for(i=0;i<1000;i++)
            d[i]=0;
            d[0]=1;

      for(i=1;i<365;i++){
            for(j=0;j<1000;j++)
                  d[j] *= i;
            for (j=0;j<1000;j++)
            if(d[j]>=10){
                  d[j+1]+=d[j]/10;
                  d[j] %= 10;
            }

            for(j=0;j<10;j++)
                  freq[i][j]=0;
            for(j=999;d[j]==0;j--);
                  while (j>=0){
                        assert(d[j]>=0 && d[j]<10);
                        freq[i][d[j]]++;
                        j--;

                  }
      }

}

      int getDayNumber(){
            fscanf(input,"%d",&n);
            if (0==n)
                  return 0;
            return 1;

      }


      void assignTasks(){
            int j,months,day;
            day=n;
            months=0;

            while(day>m[months]){
                  day-=m[months];
                  months++;
            }
            fprintf(output,"%d %s\n",day,month[months]);
            for(j=0;j<10;j++)
                  fprintf(output,"Machine %d : %d\n",j,freq[n][j]);

      }



        int main(){

            input = fopen("prob01.in","r");
            assert(input !=NULL);
            output = fopen("prob.out","w");

            initGlobalvariables();

            while (getDayNumber()!=0)
                  assignTasks();
                  falose(input);
                  fclose(output);
                  return 0;



        }
