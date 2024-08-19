/*
Name:Yash Brijesh Modi
Roll no. 240002082
Branch:Electrical Engineering
task1:calculator */
#include<iostream>
using namespace std;

int main()
{
cout<<"Enter 1 to use arithmetic operations,\nEnter 2 to use logarithmic function,\nEnter 3 to use trigonometric functions\nEnter 4 to solve linear equation in two variables\nEnter 5 to solve quadratic equation\nEnter 6 to calculate square root of a number ";
int n;
cin>>n;
if(n==1)
{
  double result;
  double n1,n;string c;  
  cout<<"Use +,-,*,/. Enter # to display final result."<<endl<<"Enter number to start ";
  cin>>n1;
  result=n1;
  int b=1;
   while(b==1)
  {
    cout<<"Enter operation to perform "; 
    cin>>c;
   if(c=="+"||c=="-"||c=="*"||c=="/")
    {
    cout<<"Enter number "; 
    cin>>n;
    if(c=="+")
        {
        result=result+n;
        cout<<result<<endl;
        b=1;
        }
    else if(c=="-")   
        {
        result =result-n;
        cout<<result<<endl;
        b=1;
        }
    else if(c=="*")
        {
        result =result*n;
        cout<<result<<endl;
        b=1;
        }
    else if(c=="/")
        {
        result =result/n;
        cout<<result<<endl;
        b=1;
        }
        
    }
    else if(c=="#") 
    {
        b=0;
        cout<<"Program terminated"<<endl;
    }
    else  
    {
        cout<<"Enter valid operation"<<endl;
        b=0;
        cout<<"Program terminated"<<endl;
    }
  }
cout<<"Final answer: "<<result;
}
else if(n==2)
{
    double x;
    int n=1000;double p=1;
    double res=0;
    cout<<"Enter number ";
    cin>>x;
    int a=0;
    while(x>2)
    {
        x=x/2;
        a++;
    }
    x=x-1;
    for(int i=1;i<n;i++) //using expansion of ln(1+x)
    {
       p=p*x;
       if(i%2==0)
       {
         res=res - p/i;
       }
       else
       {
         res=res + p/i;
       }
    }
    cout<<"The answer is "<<res+a*0.69314;
}
else if(n==3)
{
    double res=0;
    double x;
    int n=1000;
    double p=1,f=1;
    cout<<"Enter number ";
    cin>>x;
    cout<<"Enter 1 to use sin function,\n2 to use cos function,\n3 to use tan function,\n4 to use cosec function,\n5 to use sec function,\n6 to use cot function "<<endl;
    int j,i;
    cin>>j;
    double z=x;
    while(x>6.28318)
    {
        x=x-6.28318;
    }
    double h=x;
    if(x<=1.57079)
    {h=x;}
    else if(x>=1.57079&&x<=3.14159)
    {h=3.14159-x;}
    else if(x>=3.14159&&x<=4.71238)
    {h=x-3.14159;}
    else
    {h=6.28318-x;}
    for(i=1;i<n;i++) //using expansions of sinx and cosx
        {
            p=p*h;
            f=f*i;
            if((i-1)%4==0)
            {
                res =res + p/f;
            }
            else if((i+1)%4==0)
            {
                res=res - p/f;
            }
            else
            {
                res=res;
            }
        }
        double res1=0;
            p=1;f=1;
            for(int k=1;k<n;k++)
        {
            p=p*h;
            f=f*k;
            if((k)%4==0)
            {
                res1 =res1 + p/f;
            }
            else if((k+2)%4==0)
            {
                res1=res1 - p/f;
            }
            else
            {
                res1=res1;
            }
        }
        res1=res1+1;

    switch (j)
    {
        case 1:
        if(x<=3.14159)
        { res=res;}
        else
        { res=-res;}
        cout<<"sin"<<z<<"="<<res;
        break;
        case 2: 
        if(x<=1.57079||x>=4.71238)
        {res1=res1;}
        else
        {res1=-res1;}
        cout<<"cos"<<z<<"="<<res1;
        break;
        case 3:   
        if(x<=1.57079||(x>=3.14159&&x<=4.71238)) 
        {cout<<"tan"<<z<<"="<<(res/res1);}
        else
        {cout<<"tan"<<z<<"="<<(-res/res1);}
        break;
        case 4:
        if(x<=3.14159)
        { res=res;}
        else
        { res=-res;}
        cout<<"cosec"<<z<<"="<<1/res;
        case 5: 
        if(x<=1.57079||x>=4.71238)
        {res1=res1;}
        else
        {res1=-res1;}
        cout<<"sec"<<z<<"="<<1/res1;
        break;
        case 6:   
        if(x<=1.57079||(x>=3.14159&&x<=4.71238)) 
        {cout<<"cot"<<z<<"="<<(res1/res);}
        else
        {cout<<"cot"<<z<<"="<<(-res1/res);}
        break;
    }

} 
else if(n==4)
{
        double a,b,c,d,e,f,p,r,s,x,y;
    cout<<"Calculation of linear equation in 2 variables of the form\nax+by=c\ndx+ey=f"<<endl;
    cout<<"Enter value of a ";
    cin>>a;
    cout<<"Enter value of b ";
    cin>>b;
    cout<<"Enter value of c ";
    cin>>c;
    cout<<"Enter value of d ";
    cin>>d;
    cout<<"Enter value of e ";
    cin>>e;
    cout<<"Enter value of f ";
    cin>>f;
    //using cramers rule
    p=a*e-b*d;
    if(p!=0)
    {
        r=c*e-b*f;
        s=a*f-c*d;
        x=r/p;
        y=s/p;
        cout<<"Solution of eqns "<<a<<"x+"<<b<<"y="<<c<<" and "<<d<<"x+"<<e<<"y="<<f<<endl;
        cout<<"x="<<x<<" and y="<<y;
    }   
    else if(p==0&&c/f==a/d)
    {
        cout<<"Solution of eqns "<<a<<"x+"<<b<<"y="<<c<<" and "<<d<<"x+"<<e<<"y="<<f<<endl;
        cout<<"Infinite solution";
    }
    else
    {
        cout<<"Solution of eqns "<<a<<"x+"<<b<<"y="<<c<<" and "<<d<<"x+"<<e<<"y="<<f<<endl;
        cout<<"No solutions";
    }
}
else if(n==5)
{
    double a,b,c,Z1,Z2,D;
    cout<<"To calculate roots of quadratic eqn ax^2+bx+c=0 "<<endl;
    cout<<"Enter value of a ";
    cin>>a;
    cout<<"Enter value of b ";
    cin>>b;
    cout<<"Enter value of c ";
    cin>>c;
    D=b*b-4*a*c;
    int l=0;
    double y=D;
    while (D>2)
    {
         D=D/2;
         l++;
    }
    double sqrt=1;
    double n=0.5;
    double prod=1;double f=1;double p=1;
    for(int i=1;i<150;i++)
    {
        p=p*(D-1);
        f=f*i;
        prod=prod*(n-i+1);
        sqrt=sqrt + (prod*p)/f;
    }
    if(l>=1)
    {
     if(l%2==0)
    {
        for(int j=l/2;j>0;j--)
        {
        sqrt=(sqrt*2);
        }
    }
    else 
    {
        for(int j=(l+1)/2;j>0;j--)
        {
        sqrt=sqrt*2;
        }
        sqrt=sqrt/1.41421;
    }
    }
    //using quadratic formula
    Z1=(-b+sqrt)/2*a;
    Z2=(-b-sqrt)/2*a;
    cout<<"Roots of equation "<<a<<"x^2+"<<b<<"x+"<<c<<"=0 are "<<Z1<<" and "<<Z2<<endl;
}  
else if(n==6)
{
     double x;
    cout<<"Enter number to calculate its square root ";
    cin>>x;
    int a=0;
    double y=x;
    while (x>2)
    {
         x=x/2;
         a++;
    }
    double sqrt=1;
    double n=0.5;
    double prod=1;double f=1;double p=1;
    //using expansion of (1+x)^n
    for(int i=1;i<150;i++)
    {
        p=p*(x-1);
        f=f*i;
        prod=prod*(n-i+1);
        sqrt=sqrt + (prod*p)/f;
    }
    if(a>=1)
    {
     if(a%2==0)
    {
        for(int j=a/2;j>0;j--)
        {
        sqrt=(sqrt*2);
        }
    }
    else 
    {
        for(int j=(a+1)/2;j>0;j--)
        {
        sqrt=sqrt*2;
        }
        sqrt=sqrt/1.41421;
    }
    }
    cout<<"Square root of "<<y<<" is "<<sqrt;
}
return 0;
}
