
#include<iostream>
#include<string.h>
 using namespace std;
class comp {
    public:
    char *s;
    void getstring(char *str)
    {
        strcpy(s,str);
    }
 
    void operator==(comp);
};
 
void comp::operator==(comp ob)
{
    if(strcmp(s,ob.s)==0)
        cout<<"\nStrings are Equal";
    else
        cout<<"\nStrings are not Equal";
}
 
int main()
{
    comp ob, ob1;
    char *string1, *string2;
   
 
    cout<<"Enter First String:";
    cin>>string1;
 
    ob.getstring(string1);
 
    cout<<"\nEnter Second String:";
    cin>>string2;
 
    ob1.getstring(string2);
 
    //Call Equality Operator
    ob==ob1;
    return 0;
    
}
