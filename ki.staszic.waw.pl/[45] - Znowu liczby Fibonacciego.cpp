#include<iostream> // 100 pkt
using namespace std;
const int m = 123456789;
int main()
{
    long long int A[2][2]={{1,1},{1,0}}, temp[2][2], W[2][2]={{1,0},{0,1}}, pom[2][2];
    int n;
    cin>>n;
    while(n)
    {
            if(n%2)
            {
                   pom[0][0]=(W[0][0]*A[0][0]+W[0][1]*A[1][0])%m;
                   pom[0][1]=(W[0][0]*A[0][1]+W[0][1]*A[1][1])%m;
                   pom[1][0]=(W[1][0]*A[0][0]+W[1][1]*A[1][0])%m;
                   pom[1][1]=(W[1][0]*A[0][1]+W[1][1]*A[1][1])%m; 
                   W[0][0]=pom[0][0];
                   W[0][1]=pom[0][1];
                   W[1][0]=pom[1][0];
                   W[1][1]=pom[1][1];         
             }
             temp[0][0]=(A[0][0]*A[0][0]+A[0][1]*A[1][0])%m;
             temp[0][1]=(A[0][0]*A[0][1]+A[0][1]*A[1][1])%m;
             temp[1][0]=(A[1][0]*A[0][0]+A[1][1]*A[1][0])%m;
             temp[1][1]=(A[1][0]*A[0][1]+A[1][1]*A[1][1])%m;
             A[0][0]=temp[0][0];
             A[0][1]=temp[0][1];
             A[1][0]=temp[1][0];
             A[1][1]=temp[1][1];
             n/=2;
     }
     cout<<W[1][0]<<endl;
     //system("pause");
     return 0;
}
