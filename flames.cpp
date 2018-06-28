#include<iostream>
#include<cstring>

using namespace std;

struct flame
{
    char data;
    flame * next;
};
flame* head = NULL;

void _insert(char x)
{
    flame* newnode = new flame;
    newnode->data = x;
    if(head==NULL)
    {
        head = newnode;
        newnode->next = head;
        return;
    }
    flame*temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void Delete(int n)
{

    if(n==1)
    {
        flame* temp = head,*temp2=head;

        while(temp->next!=head)
            temp = temp->next;

        temp->next = temp2->next;
        head = temp->next;

        delete temp2;
        return;
    }
    int i;
    flame* temp = head,*temp2;
    for(i=0;i<n-2;i++){

        temp2 = temp;
        temp = temp->next;

    }
    temp2 = temp->next;
    temp->next = temp2->next;
    head = temp->next;
    delete temp2;
}

char result()
{
    return head->data;
}

int main()
{
    char a[20],b[20];
    int c = 0;
    cout<<"\n ENTER GUY'S NAME:";
    cin>>a;
    cout<<"\n ENTER GIRL'S NAME:";
    cin>>b;
    int n1 = strlen(a),n2 = strlen(b);

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2 ; j++)
        {
            if( a[i] == b[j])
            {
                a[i] = '0';
                b[j] = '0';
                break;
            }
        }
    }

    for(int i = 0;i < n1; i++)
    {
        if(a[i]>='A' && a[i] <='Z' || a[i]>='a' && a[i]<='z')
            c++;
    }
    for(int i = 0;i < n2; i++)
    {
        if(b[i]>='A' && b[i] <='Z' || b[i]>='a' && b[i]<='z')
            c++;
    }

    _insert('f');
    _insert('l');
    _insert('a');
    _insert('m');
    _insert('e');
    _insert('s');

    for(int i = 0;i< 5 ; i++)
    {
        DeleteSpecific(c);
    }
    cout<<endl;
    char x = result();

    switch(x)
    {
    case 'f':
        cout<<endl<<"FRIENDS !";
        break;
    case 'l':
        cout<<endl<<"LOVERS !";
        break;
    case 'a':
        cout<<endl<<"ADORING !";
        break;
    case 'm':
        cout<<endl<<"MARRIAGE !";
        break;
    case 'e':
        cout<<endl<<"ENEMIES !";
        break;
    case 's':
        cout<<endl<<"SISTER !";
    }

    return 0;
}
