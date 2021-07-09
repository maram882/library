#include <iostream>

using namespace std;
class lib
{
    static int NOBooks;
public:
    int Num()
    {
        cout<<"WE have : "<<NOBooks<<"\n";
    }
    /*
    int sell(int x)
    {
        NOBooks+=x;
    }
    /*/
    int buy(int x)
    {
        NOBooks-=x;
    }
};
class Books :public lib
{
    string Name[5]= {"Clarissa","Emma","Black Cover","Nightmare Abbey","Promised Neverland"};
    static int ID[100];
    int X;
public:

    int GetId(int x)
    {
        for(int i=0; i<5; i++)
        {
            if(ID[i]==x)
            {
                X=i;
                break;
            }
        }
        return X;
    }
    int veiw_all()
    {
        int z;
        for(int i=0; i<5; ++i)
        {
            if(ID[i]==0)
                continue;
            else
                cout<<"Name : "<<Name[i]<<"\n ID :: "<<ID[i]<<"\n";
        }

        cout<<"\n";
    }
    int Buy(int y)
    {
        if(ID[y]==0)
            cout<<"This book does not exist\n";
        else
        {
            cout<<"We have this book\n";
            ID[y]=0;
            buy(1);
        }
    }

};

int lib::NOBooks=5;
int Books::ID[100]= {1,2,3,4,5};
int main()
{
    bool flag=1;
    while(flag)
    {
        cout<<"\n";
        cout<<"Enter 1 If You need to check the books\n"<<"Enter 2 If you need to buy any book\n"<<"Enter 3 If you do not need any thing\n\n";
        int v;
        cin>>v;
        switch (v)
        {
        case 1:
        {
            Books I1;
            lib NUM;
            NUM.Num();
            I1.veiw_all();
        }
        break;
        case 2:
        {
            cout<<"Please enter the ID of the book : \n";
            int n,c;
            cin>>n;
            Books I;
            c=I.GetId(n);
            I.Buy(c);
        }
        break;
        default:
            flag=0;
        }

    }
    return 0;
}
