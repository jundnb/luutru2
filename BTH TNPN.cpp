#include <iostream>
#include <cmath>
using namespace std;

void Input(int n, int a[]){
    for (int i=0;i<n;i++)
        {
            cout<<"a["<<i<<"]=";
            cin>>a[i];
        }
}
void printArr(int n, int a[]){
    for (int i=0;i<n;i++)
        {
            cout<<"a["<<i<<"]="<<a[i]<<" ";
        }
}
void findMax(int n, int a[]){
    int Max=a[0];
    for (int i=0;i<n-1;i++){
        if(Max<a[i])
        Max=a[i];
    }
    cout<<"\nMax= "<<Max;
}
void Product(int n, int a[])
{
    int P=1;
    for (int i=0;i<n;i++){
        P=P*a[i];
    }
    cout<<"\nThe product of all elements of array is = "<<P;
}
int checkPrime(int n){
    if (n<2) return 0;
    for(int i=2;i<= (int)sqrt(n);i++){
            if(n%i==0)
            return 0;
    }
    return 1;
}
void Prime(int n, int a[]){
    int S=0,count=0;
    for (int i=0;i<n;i++){
        if(checkPrime(a[i])==1){
        count++;
        S+=a[i];
        }
    }
    cout<<"\nThe number of prime number is "<<count<<"\nThe sum of all prime numbers is "<<S;
}
int checkValue(int n, int a[]){
    int k,b=0;
    cout<<"\nEnter the value that need to check: ";
    cin>>k;
    for (int i=0;i<n;i++){
        if(a[i]==k){
        b=1;
        cout<<"a["<<i<<"] ";
        } 
    }
    if (b==1) cout<<"is the position that has the value equal to "<<k;
    else if (b==0) cout<<"The position that has the value equal to "<<k<<" is not exist";
}
void sort(int n,int a[]){
    int temp;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++)
        {   
            if (a[i] > a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"\nThe array that is sorted in inscreasing order:\n";
    printArr(n,a);
}
void insertValue(int n,int a[]){
    int m,k;
    cout<<"\nEnter the value  that need to be inserted : ";
    cin>>m>>k;
    if(0<=k && k<n+1){
    for (int i=k;i<n+1;i++){
        a[i+1]=a[i];
        }
    }
    a[k]=m;
    n++;
    printArr(n,a);
}
void deleteValue(int n,int a[]){
    int m,j;
    cout<<"\nEnter the value that need to be deleted: ";
    cin>>m;
    for (int i=0;i<n;i++){
        if(a[i]==m){
        for(j=i;j<n-1;j++){
        a[j]=a[j+1];
        }
    }
}
    n--;
    printArr(n,a);
}
int main(){
    int n,a[100];
    cout<<"\nEnter the number of elements:";
    cin>>n;
    Input(n,a);
    cout<<"The array is\n";
    printArr(n,a);
    findMax(n,a);
    Product(n,a);
    Prime(n,a);
    checkValue(n,a);
    sort(n,a);
    insertValue(n,a);
    deleteValue(n,a);
    return 0;
}

