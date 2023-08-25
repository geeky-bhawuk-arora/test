#include <iostream>
using namespace std;

int main() {
    int n1,n2,n3,max1,max2;
    cin>>n1>>n2>>n3;

    /* Method-1 */
    max1=n1;
    if(max1<n2)
        max1=n2;
    if(max1<n3)
        max1=n3;

    cout<<"Largest Number : "<<max1;

    
    /* Method-2 */
    if(n1>=n2 && n1>=n3)
        max2=n1;
    else if(n2>=n1 && n2>=n3)
        max2=n2;
    else
        max2=n3;

    cout<<"\nLargest Number : "<<max2;

    return 0;
}