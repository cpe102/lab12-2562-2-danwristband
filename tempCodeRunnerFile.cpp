#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double A[],int N,double B[]){
    int i,n,x;
    double R[N],r,sd,result,Min,Max;
    R[N]=r;
    for(i=0;i<N;i++)
    {
        r+=A[i]/N;
    }

    for(i=0;i<N;i++)
    {
        result+=pow(A[i],2);  
    }
    sd=pow(((result/N)-pow(r,2)),0.5);
    Max=A[0];

    for(n=0;n<N;n++){

        if(Max<A[n]){
            Max=A[n];
        }
    }
    for(x=0;x<N;x++){

        if(Min>A[x]){
            Min=A[x];
        }
    }
    B[0]=r;
    B[1]=sd;
    B[2]=Max;
    B[3]=Min;
    
}