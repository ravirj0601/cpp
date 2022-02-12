#include<iostream>
using namespace std;
int hw1()
{
    int n;
    cout<<"Enter a No of Row :-" << endl;
    cin>> n;
    int i=1;
    while(i <= n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<"*" ;
            j++;
        }
        i++;
        cout<<endl;
    }
}

int hw2()
{
  char c;
  cout<<"Enter a Character:-"<<endl;
  cin>>c;
  if (c >= 'a' && c <='z')
  {
      cout<<"It is a Smaller Case"<<endl;
  }
  else if (c >= 'A' && c <= 'Z')
  {
      cout<<"It is a Capital Case"<<endl;
  }
  else
  {
      cout<<"It is a Number."<<endl;
  }    
}

int hw3()
{
   int n;
   cout<<"Enter the value of the n"<<endl;
   cin>>n;
   int sum = 0;
   int i;
   while (i <= n)
   {
       if (i%2==0)
       {
           sum=i+sum;
       }
       i++;
   }
   cout<< sum <<endl;
}
  
int hw4()
{
    int n;
    cout<<"Enterr the value of n :-";
    cin>>n;
    int i=1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;     
    }    
} 

int hw5()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i;
    while (i <= n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw6()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i;
    while (i <= n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw7()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i;
    int count = 1;
    while (i <= n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw8()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i;
    while (i <= n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw9()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i;
    while (i <= n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw10()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i;
    int count=1;
    while (i <= n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw11()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i;
    int count=1;
    while (i <= n)
    {
        int j=0;
        while (j<=i)
        {
            cout<<j+i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw12()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i;
    int count=1;
    while (i <= n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw13()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    while (i <= n)
    {
        
        int j=1;
        while (j<=n)
        {
            char ch = 'A' + i - 1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw14()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    char ch = 'A';
    while (i <= n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<ch;
            j++;
            ch=ch+1;
        }
        cout<<endl;
        i++;
    }   
}

int hw15()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    char ch = 'A';
    while (i <= n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<ch;
            j++;
            ch=ch+1;
        }
        ch=ch-2;
        cout<<endl;
        i++;
    }   
}

int hw16()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    while (i <= n)
    {
        int j=1;
        while (j<=n)
        {
            char ch = 'A' +i+j-2;
            cout<<ch;
            j++;
            ch=ch+1;
        }
        cout<<endl;
        i++;
    }   
}

int hw17()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    char ch = 'A';
    while (i <= n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<ch;
            j++;
        }
        ch=ch+1;
        cout<<endl;
        i++;
    }   
}

int hw18()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    char ch = 'A';
    while (i <= n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<ch;
            j++;
            ch=ch+1;
        }
        cout<<endl;
        i++;
    }   
}

int hw19()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    char ch = 'A';
    while (i <= n)
    {
        int j=1;
        while (j<=i)
        {
            char ch = 'A' + i + j - 2;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw20()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    while (i <= n)
    {
        int j=1;
        char ch = 'A' + n - i;
        while (j<=i)
        {
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }   
}

int hw21()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    while (i <= n)
    {
        int j=1;
        char ch = 'A' + n - i;
        while (j<=n)
        {
            cout<<ch;
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }   
}

int hw22()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    while (i <= n)
    {
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw23()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    while (i <= n)
    {
        int space = i-1;
        while (space)
        {
            cout<<" ";
            space=space-1;
        }
        int j=i;
        while (j<=n)
        {
            cout<<i; //for * "*" 
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw24()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    while (i <= n)
    {
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        while (j<=i)
        {
            cout<<i; //for * "*" 
            j++;
        }
        cout<<endl;
        i++;
    }   
}

int hw25()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    int count = 1;
    while (i <= n)
    {
        
        int space = n-i;
        while (space)
        {
            cout<<"  ";
            space--;
        }
        int j=1;
        
        while (j<=i)
        {
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }   
}

int hw26()
{
    int n;
    cout<<"Enter The Value Of Row:-"<<endl;
    cin>>n;
    int i=1;
    
    while (i <= n)
    {
        int count = i;
        int space =i-1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j=i;
        while (j<=n)
        {
            cout<<count; //for * "*" 
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }   
}

int main() {
    int a;
    cout << "Press 1 For HW1" << endl 
        << "Press 2 For HW2" << endl
        << "Enter 3 for HW3" << endl
        << "Enetr 4 For HW4" << endl
        << "Enter 5 For HW5" << endl
        << "Enter 6 For HW6" << endl
        << "Enter 7 For HW7" << endl
        << "Enter 8 For HW8" << endl
        << "Enter 9 For HW9" << endl
        << "Enter 10 For HW10" << endl
        << "Enter 11 For HW11" << endl
        << "Enter 12 For HW12" << endl
        << "Enter 13 For HW13" << endl
        << "Enter 14 For HW14" << endl
        << "Enter 15 For HW15" << endl
        << "Enter 16 For HW16" << endl
        << "Enter 17 For HW17" << endl
        << "Enter 18 For HW18" << endl
        << "Enter 19 For HW19" << endl
        << "Enter 20 For HW20" << endl
        << "Enter 21 For HW21" << endl
        << "Enter 22 For HW22" << endl
        << "Enter 23 For HW23" << endl
        << "Enter 24 For HW24" << endl
        << "Enter 25 For HW25" << endl
        << "Enter 26 For HW26" << endl;


    cout << "Enter Your Choice :-" << endl;
    cin>>a;
    switch (a)
    {
    case 1/* constant-expression */:
        hw1();
        break;
    case 2:
        hw2();
        break;
    case 3:
        hw3();
        break;
    case 4:
        hw4();
        break;
    case 5:
        hw5();
        break;
    case 6:
        hw6();
        break;
    case 7:
        hw7();
        break;
    case 8:
        hw8();
        break;
    case 9:
        hw9();
        break;
    case 10:
        hw10();
        break;
    case 11:
        hw11();
        break;
    case 12:
        hw12();
        break;
    case 13:
        hw13();
        break;
    case 14:
        hw14();
        break;
    case 15:
        hw15();
        break;
    case 16:
        hw16();
        break;
    case 17:
        hw17();
        break;
    case 18:
        hw18();
        break;
    case 19:
        hw19();
        break;
    case 20:
        hw20();
        break;
    case 21:
        hw21();
        break;
    case 22:
        hw22();
        break;
    case 23:
        hw23();
        break;
    case 24:
        hw24();
        break;
    case 25:
        hw25();
        break;
    case 26:
        hw26();
        break;
    default:
        cout<<"Nothing"<<endl;
        break;
    }

    return 0;
}
