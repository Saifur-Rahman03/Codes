#include<iostream>
using namespace std;

int Universal_exeistential()
{
    int A[3] = {1,2,3}, B[3] = {1,4,9};
    int i,j,count=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if((A[i])*(A[i])==B[j]){
                count++;
            }
        }
    }
    if(count==3){
        return 1;
    }
    else{
        return 0;
    }
}
int Exeistential_exeistential()
{
    int A[3] = {1,2,3}, B[3] = {1,4,9};
    int i,j,count=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if((A[i])*(A[i])==B[j]){
                count++;
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(B[i]==(A[j])*(A[j])){
                count++;
            }
        }
    }
    if(count==6){
        return 1;
    }
    else{
        return 0;
    }
}
int Exeistential_universal()
{
    int A[3] = {1,2,3}, B[3] = {1,4,9};
    int i, j, count=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if((A[j])*(A[j])==B[i]){
                count++;

                }
        }
        if(count==3)
        {
            return 1;
        }
        else
        {
            count = 0;
        }
    }
    return 0;
}
int Universal_universal()
{
    int A[3] = {1,2,3}, B[3] = {1,4,9};
    int i, j, count=0, count1 = 0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if((A[j])*(A[j])==B[i]){
                count++;
                }
        }
        if(count==3){
            count1 ++;
        }
        else{
            count = 0;
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if((A[i])*(A[i])==B[j]){
                count++;
                }
    }
    if(count==3){
            count1 ++;
            }
    else{
            count = 0;
            }
    }
    if (count1 == 2){
            return 1;
    }
    else{
            return 0;
        }
}
int main()
{
        int A[3] = {1,2,3}, B[3] = {1,4,9};
        int x,y,i,j;
        int U_E = Universal_exeistential();
        cout << "Universal_exeistential: " << U_E << endl;
        int E_E =Exeistential_exeistential();
        cout << "Exeistential_exeistential: " << E_E << endl;
        int E_U =Exeistential_universal();
        cout << "Exeistential_universal: " << E_U << endl;
        int U_U =Universal_universal();
        cout << "Universal_universal: " << U_U << endl;
}
