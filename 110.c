#include<math.h>
#include<string.h>
#include<stdio.h>

#define step 0.002

bool inside(double i,double j){
    double sign = pow(pow(i,2)+pow(j,2)-1,2)-pow(i*j,2);
    printf("sign:%f\n",sign);
    return sign<=0;
    
    //if(sign <= 0) 
    //    return true;
    //else 
    //    return false;
}

double normal(double i, double mu, double sigma){
    double nor =  exp(-pow(i-mu, 2)/(2*pow(sigma,2)))/(sqrt(2*M_PI)*sigma);
    if(nor>0)
        printf("normal:%f\n",nor);
    return nor;
}
double proba(double mu_1, double sigma_1, double mu_2, double sigma_2){
    double i,j,pro=0.0;

    double start = -2.0/sqrt(3);
    double end = -start;
    printf("start:%f\n",start);
    printf("end:%f\n",end);

    for(i = start; i <= end; i += step){
        for(j = start; j <= end; j += step){
            if(inside(i,j) || (fabs(i)<=1.0 && fabs(j)<=1.0))
                pro += normal(i,mu_1,sigma_1)*normal(j,mu_2,sigma_2);
            printf("pro:%f\n",pro);
        }
    }
    return pro*step*step;
}

int main(){
    double mu_1,sigma_1,mu_2,sigma_2;
    //printf("%f\n",normal(1,1,2));
    while(scanf("%f %f %f %f",&mu_1,&sigma_1,&mu_2,&sigma_2)){
        printf("the possibility that located in the circle is: %.5f\n",proba(mu_1,sigma_1,mu_2,sigma_2));
    }
    return 0;
}
