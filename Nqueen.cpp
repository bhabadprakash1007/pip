#include<iostream>
using namespace std;
 
class Queen{
    public:
    int x[20],count=0;
    int NQueen(int r,int n);
    int place(int r,int c);
    int display(int n);   
};
int Queen::place(int r,int c)
    {
    for(int i=1;i<=r-1;i++)
    {
        if(x[i]==c)
        {
            return 0;
        }
        else 
        {
            if(abs(x[i]-c)==abs(i-r))
            {
                return 0;
            }
        }
    }
    return 1;
    }
    
int Queen::NQueen(int r,int n)
    {
        for(int c=1;c<=n;c++)
        {
            if(place(r,c))
            {
                x[r]=c;
                if(r==n)
                {
                    display(n);
                }
                else
                {
                    NQueen(r+1,n);
                }
            }
        }
        return 0;

    }
int Queen::display(int n)
    {
        cout<<"\n\nSolution\n\n"<<++count;
        for(int i=1;i<=n;i++)
        {
            cout<<"\t"<<i;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<"\n"<<i<<endl;
            for(int j=1;j<=n;j++)
            {
                    if(x[i]==j)
                        cout<<"\t Q";
                    else
                        cout<<"\t-";
            }   
        }
        return 0;
    }

int main()
{
    Queen q;


    	int i,j,n,r;
    cout<<"Enter the Number of Queen";
    cin>>n;
    q.NQueen(1,n);
    return (0);
}