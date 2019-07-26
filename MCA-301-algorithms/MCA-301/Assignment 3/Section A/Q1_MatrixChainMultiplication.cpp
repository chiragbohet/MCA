#include<iostream>
#include<limits.h>
 
using namespace std;
 

 void printParenthesis(int i, int j, int n ,int* s) 
{ 
    
  
    if (i == j) 
    { 
        cout << "A"<<i; 
        return; 
    } 
  
    cout << "("; 
  
    printParenthesis(i,*((s+i*n)+j),n,s); 
  
   
    printParenthesis(*((s+i*n)+j) + 1,j,n,s); 
    cout << ")"; 
} 
void MatrixChainMultiplication(int p[], int n)
{
    int m[n][n];
    int s[n][n];
    int i, j, k, L, q;
 
    for (i=1; i<n; i++)
        m[i][i] = 0;    

    for (L=2; L<n; L++)
    {
        for (i=1; i<n-L+1; i++)
        {
            j = i+L-1;
            m[i][j] = INT_MAX;  
 
            for (k=i; k<=j-1; k++)
            {
                q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];      
                if (q < m[i][j])
                {
                	s[i][j]=k;
                    m[i][j] = q;    
                }
            }
        }
    } 
     
	cout << "Optimal Parenthesization is : "; 
    printParenthesis(1, n-1,n,(int *) s); 
    cout<<endl;
    cout << "nMinimum number of multiplications are: " << m[1][n-1];  	
    
    
 
}
 
int main()
{
    int n,i;
    cout<<"Enter number of matrices\n";
    cin>>n;
 
    n++;
 
    int arr[n];
 
    cout<<"Enter dimensions \n";
 
    for(i=0;i<n;i++)
    {
        cout<<"Enter p"<<i<<" :: ";
        cin>>arr[i];
    }
 
    int size = sizeof(arr)/sizeof(arr[0]);
 
    MatrixChainMultiplication(arr, size);
 
    return 0;
}