#include<iostream>
#include<cstdlib>
using namespace std;

float area(float r)
{
       
        return(3.14 * r * r);
}
int area(int s)
{
        return(s*s);
}
float area(float l,float b)
{
        return (l * b);
}
int main()
{
        float b,r,l;
        int ch,s;

        do
        {
                cout<<"\n\n Select Shape: \n";
                cout<<"\n 1. Area of Circle";
                cout<<"\n 2. Area of Square";
                cout<<"\n 3. Area of Rectangle";
                cout<<"\n 4. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                        {
                                cout<<"\n Enter the Radius of Circle : ";
                                cin>>r;
                                cout<<"\n Area of Circle : "<<area(r);
                                break;
                        }
                        case 2:
                        {
                                cout<<"\n Enter the Side of Square(integer) : ";
                                cin>>s;
                                cout<<"\n Area of Sqaure : "<<area(s);
                                break;
                        }
                        case 3:
                        {
                                cout<<"\n Enter the Length & Bredth of Rectangle : ";
                                cin>>l>>b;
                                cout<<"\n Area of Rectangle : "<<area(l,b);
                                break;
                        }
                        case 4:
                                exit(0);
                        default:
                                cout<<"\n Invalid Choice... ";
                }
        }while(ch!=4);
        return 0;
}