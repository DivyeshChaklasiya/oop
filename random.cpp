#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,choice,numb;
    srand(time(NULL));
    numb=rand()%21;
    cout<<numb<<endl;
    cout<<"You have only three chance to choose number between 1 to 20:"<<endl;
    for(i=1;i<=3;i++)
    {
        cout<<"please enter your choice"<<":";
        cin>>choice;
        if(choice<numb)
        {
            cout<<"Sorry...please re-enter your choice";
            cout<<"its less than your number"<<endl;
            cout<<"You have only"<<3-i<<"chance left"<<endl;
            cout<<endl;
        }
        else if(choice==numb)
        {
            cout<<"Congratulation You are Winner!!";
            break;
        }
    }
    return 0;
}

