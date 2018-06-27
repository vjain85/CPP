#include<iostream>
#include<cstring>

using namespace std;

/// make calling objetc CONST in all utility functions.

class String
{
    protected :
       char  text[100];

    public :
       String(){this->text[0]='\0';}           /// String a ;
       String (char ch);   /// String a('x');
       String (char *p);   /// String a("rames");
       String (int );      /// String a(10);   a. text must become "10"
       String (const String &);  /// COPY CONSTRUTOR


       void assign(const String & ); /// a.assign(b)
       void assign(char ); /// a.assign('a')  a.text becomes "a"
       void assign(char *p);
       void assign(int);


       void getValue();
       void show() const;

       String concat(const String &) const; /// c = a.concat(b);
       String concat(char ) const; /// c = a.concat('z');
       String concat(char *) const; /// c = a.concat("rames");
       friend String concat(char,const String & ) ; /// c = concat('z',a);
       friend String concat(char *,const String &) ; /// c = concat("rames",a);


       String operator +(const String &)const; ///c = a + b;
       String operator +(char ) const; /// c = a + 'z';
       String operator +(char *) const; /// c = a +"rames";
       friend String operator+(char , const String &); /// c= 'a' + obj
       friend String operator+(char * ,const String &); /// c= "rames" + obj


       bool operator <(const String &)const ; /// if(a<b)
       bool operator <(char ) const; /// if(a< 'x')
       bool operator <(char *) const; /// if(a<"rames")
       friend bool operator <(char ,const String &) ; /// if('x' <a)
       friend bool operator <(char *,const String &) ; /// if("rames"< a)

       int operator <=(const String &) const; /// if(a<=b)
       int operator <=(char ) const; /// if(a<= 'x')
       int operator <=(char *) const; /// if(a<="rames")
       friend int operator <=(char ,const String &) ; /// if('x' <=a)
       friend int operator <=(char *,const String &) ; /// if("rames"<= a)


       int operator >(const String &)const ; /// if(a>b)
       int operator >(char ) const; /// if(a> 'x')
       int operator >(char *) const; /// if(a>"rames")
       friend int operator >(char ,const String &) ; /// if('x' >a)
       friend int operator >(char *,const String &) ; /// if("rames"> a)

       int operator >=(const String &) const; /// if(a>=b)
       int operator >=(char ) const; /// if(a>= 'x')
       int operator >=(char *) const; /// if(a>="rames")
       friend int operator >=(char ,const String &) ; /// if('x' >=a)
       friend int operator >=(char *,const String &) ; /// if("rames">= a)



       int operator !=(const String &) const; /// if(a!=b)
       int operator !=(char ) const; /// if(a!= 'x')
       int operator !=(char *) const; /// if(a!="rames")
       friend int operator !=(char ,const String &) ; /// if('x' !=a)
       friend int operator !=(char *,const String &) ; /// if("rames"!= a)



       int operator ==(const String &) const; /// if(a==b)
       int operator ==(char ) const; /// if(a== 'x')
       int operator ==(char *) const; /// if(a=="rames")
       friend int operator ==(char ,const String &) ; /// if('x' ==a)
       friend int operator ==(char *,const String &) ; /// if("rames"== a)



       //String& operator = (const String &);   /// a= b;    // a= b=c="rames"
       String& operator = (char );     ///  a= 'x';
       String& operator = (char *);    ///  a= "rames";




     //  t+e;
     // cin>>x>>y>>z;


/**
     c = a + b ;
     a.show()
     cout<<" + ";
     b.show();
     cout<<" = ";
     c.show();

     cout<<"\n "<<a<< " + "<<b <<" = " <<c;

*/

    friend  ostream& operator<<(ostream &,String const&OB); // cout<<a       <<" b = "<<b;
    friend  istream& operator>>(istream &,String &);

    int length()const;    ///  cout<<"\n "<<a.length();
    String left(int n)const;   /// a.text is "abhijeet"
       ///  a.left(4)   will be obj containing "abhi"
    String right(int n)const;
    String mid(int st,int n)const; ///a.text is "abhijeet"
              ///  then a.mid(3,2)
              ///  WILL BE "hi"

/**
     THE SIGNATURE OF THE this POINTER IN String CLASS
          String * const this;
     inside
      String reverse()const;    FUNCTION
         String const * const this;




*/
      String reverse()const;
      bool palindrome()const;

     int find(String &)const;
	/// returns -1 if passed String not found in
	/// the calling object else returns the element
	/// number where it is found
	/// ex :- in a.text "abhijeet" , in b.text "hi"
	///      a.find(b)  will return 2

     int find (char )const;
     int find(char *)const;


     String upper()const;
     String lower()const;
     String toggle()const;/// caps to small and small to caps

     String initscap()const;
     /// "abhijeet laxnman DHOLEY"
     /// returns object "Abhijeet Laxman Dholey"


     String cutter()const;
     /// starting and trailing spaces are removed and in between all multiple
     /// spaces are converted to single space

     ///ex : "     abhijeet           laxman             dholey           "
     ///"abhijeet laxman dholey"

     int wordcount()const;
     int vowels()const;
     int conso()const;
     int digits()const;
     int special()const;


     String replace(int startPos,int totalChars,String &)const;
     /// a.text :- "abhijeet"    b.text="satya"
     ///  c= a.replace(1,4,b)
     /// c.text :- satyajeet;

     String replace(int stpos,int n,char)const;
     String replace(int stpos,int n,char *)const;
 } ;

 String::String (char ch)
 {
    text[0] = ch;
    text[1] = '\0';
 }
void String::show() const
{
    for(int x = 0;this->text[x]!='\0';x++)
        cout<<this->text[x];
}
String::String (char *p)
{
    int x = 0;
    do
    {
        text[x] = p[x];
        x++;
    }while(p[x] != '\0');
    text[x] = 0;
}
String::String (int const a)
{
    int t = a,y;
    char ch[10];
    int x = 0;
    while(t!=0)
    {
        ch[x] = t%10 + 48;
        t = t/10;
        x++;
    }
    ch[x] = '\0';
    for(x = 0;ch[x] != '\0';x++)
        ;
    for(x--,y=0;y<x;y++,x--)
    {
        t = ch[y];
        ch[y] = ch[x];
        ch[x] = t;
    }
    x = 0;
    do
    {
        text[x] = ch[x];
        x++;
    }while(ch[x] != '\0');
    text[x] = 0;

}
String::String(const String &ob)
{
    for(int x = 0; ob.text[x] !='\0';x++)
    {
        this->text[x] = ob.text[x];
    }
}
void String::assign(const String &ob)
{
    int x;
    for( x = 0; ob.text[x] !='\0';x++)
    {
        this->text[x] = ob.text[x];
    }
    this->text[x] = '\0';
}
void String::assign(char a)
{
    this->text[0] = a;
    this->text[1] = '\0';
}
void String::assign(char *p)
{
    int x = 0;
    do
    {
        this->text[x] = p[x];
        x++;
    }while(p[x] != '\0');
    this->text[x] = '\0';
}

void String::assign(int a)
{
    int t = a,y;
    char ch[10];
    int x = 0;
    while(t!=0)
    {
        ch[x] = t%10 + 48;
        t = t/10;
        x++;
    }
    ch[x] = '\0';
    for(x = 0;ch[x] != '\0';x++)
        ;
    for(x--,y=0;y<x;y++,x--)
    {
        t = ch[y];
        ch[y] = ch[x];
        ch[x] = t;
    }
    x = 0;
    do
    {
        text[x] = ch[x];
        x++;
    }while(ch[x] != '\0');
    text[x] = 0;
}
void String::getValue()
{
    cout<<"Enter String: ";
    cin>>text;
}
String String::concat(const String &ob) const
{
    String s;
    /*int x,y;
    for( x = 0; this->text[x] != '\0' ; x++)
    {
        s.text[x] = this->text[x];
    }
    for( y = 0; ob.text[y] != '\0' ; y++)
    {
        s.text[x+y] = ob.text[y];
    }
    s.text[x+y] = 0;
    return s;*/
    strcpy(s.text,this->text);
    strcat(s.text,ob.text);
    return s;
}


String String::concat(char a) const
{
    String s;
    char str[2] = {a};
    /*int x;

    for( x = 0; this->text[x] != '\0' ; x++)
        s.text[x] = this->text[x];

    s.text[x++] = a;

    s.text[x] = 0;*/
    strcpy(s.text,this->text);
    strcat(s.text,str);
    return s;
}

String String::concat(char *p) const
{
    String t;
    int x,y;
    for( x = 0; this->text[x] != '\0' ; x++)
        t.text[x] = this->text[x];

    for( y = 0 ; p[y] != '\0' ; y++)
    {
        t.text[x+y] = p[y];
    }
    t.text[x+y] = 0;
    return t;
}

String concat(char a,const String &ob )
{
    String s;
    char str[2] = {a};
    strcpy(s.text,str);
    strcat(s.text,ob.text);
    return s;
}
String concat(char *p,const String &ob)
{
    String s;
    strcpy(s.text,p);
    strcat(s.text,ob.text);
    return s;
}

String String::operator +(const String &ob)const
{
    String s;
    s = this->concat(ob);
    return s;
}
String String::operator +(char a) const
{
    String s;
    s = this->concat(a);
    return s;
}

String String::operator +(char *p) const
{
    String s;
    s = this->concat(p);
    return s;
}
String operator+(char a, const String &ob)
{
    String s;
    s = concat(a,ob);
    return s;
}
String operator+(char *p, const String &ob)
{
    String s;
    s = concat(p,ob);
    return s;
}

bool String::operator <(const String &ob)const
{
    for(int x = 0; this->text[x] != '\0' ; x++)
    {
        if(this->text[x] < ob.text[x])
            return true;
    }
    return false;
}

bool String::operator <(char a) const
{
    return (this->text[0] < a);
}

bool String::operator <(char *p) const
{
    for(int x = 0; this->text[x] != '\0' ; x++)
    {
        if(this->text[x] < p[x])
            return true;
    }
    return false;
}

bool operator <(char a,const String &ob)
{
    return (a < ob.text[0]);
}

ostream& operator<<(ostream &out,String const&OB)
{
    cout<<OB.text;
    return out;
}

istream& operator>>(istream &in,String &ob)
{
    cin>>ob.text;
    return in;
}

String String::left(int n)const
{
    String s;
    int x;
    for(x = 0; x<n ; x++)
    {
        s.text[x] = this->text[x];
    }
    s.text[x] = '\0';
    return s;
}

String String::right(int n)const
{
    String s;
    int x,y=0;
    for(x = n; this->text[x] != '\0'; x++,y++)
    {
        s.text[y] = this->text[x];
    }
    s.text[y] = 0;
    return s;
}

String String::mid(int st,int n)const
{
    String s;
    int x,y;
    for(x = st-1,y = 0; x < st+n-1 ;x++,y++)
    {
        s.text[y] = this->text[x];
    }
    s.text[y] = 0;
    return s;
}

String String::reverse()const
{
    String s ;
    int x,y;
    for(x = 0; this->text[x] != '\0' ; x++) ;
    for(x-- ,y = 0 ; x>=0 ; x--,y++)
    {
        s.text[y] = this->text[x];
    }
    s.text[y] = 0;
    return s;
}

bool String::palindrome()const
{
    String s;
    s = this->reverse();
    for(int x = 0; s.text[x] != '\0' ; x++)
    {
        if(s.text[x] != this->text[x])
            return false;
    }
    return true;
}

int String::find(String &ob)const
{
    int x,c = 0;

    int m = strlen(this->text);
    int n = strlen(ob.text);

    for(x = 0; x< strlen(this->text); x++)
    {
        if(ob.text[c] == this->text[x]) c++;
        else c = 0;

        if(c == strlen(ob.text))
            return (x-c+1);
    }
    return -1;
}

 int String::length() const    /// accesor
 {
       int x;
       for(x=0; this->text[x] !='\0';x++)
                      ;
       return x;
 }


 int main()
 {

    String a = "rames",d;
    String b('x'),c(10);
    b.show();
    cout<<endl;
    a.show();
    cout<<endl;
    c.show();
    cout<<endl;
    a.assign(b);
    a.show();
    a.assign('v');
    cout<<endl;
    a.show();
    a.assign("Ramesh");
    cout<<endl;
    a.show();
    a.assign(100);
    cout<<endl;
    a.show();
    cout<<endl;
    a.getValue();
    a.show();
    c = a.concat(b);
    cout<<endl;
    c.show();
    d = a.concat('z');
    cout<<endl;
    d.show();
    d = a.concat("Jain");
    cout<<endl;
    d.show();
    d = concat('q',a);
    cout<<endl;
    d.show();
    d = concat("jain",a);
    cout<<endl;
    d.show();
    c = a + d;
    cout<<endl;
    c.show();
    c = d + 'f';
    cout<<endl;
    c.show();
    c = d + "abcd";
    cout<<endl;
    c.show();
    c = 'g' + d;
    cout<<endl;
    c.show();
    c = "abcde" + d;
    cout<<endl;
    c.show();
    cout<<endl<<(a < b);
    cout<<endl<<(a < 'h');
    cout<<endl<<(a < "abcd");
    cout<<endl<<('h' < a);
    cout<<endl;
    cin>>a;
    cout<<a;
    cout<<endl;
    c = a.left(4);
    c.show();
    c = a.right(3);
    cout<<endl;
    c.show();
    cout<<endl;
    c = a.mid(3,2);
    c.show();
    cout<<endl;
    c = a.reverse();
    cout<<c;
    cout<<endl<<a.palindrome();
    d.assign("ika");
    cout<<endl<<a.find(d);


    return 0;

 }

