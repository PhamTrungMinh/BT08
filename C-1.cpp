#include <iostream>
using namespace std;

int length(char a[]);
char* reverse(char a[]);
char* delete_char(char a[], char c);
char* pad_right(char a[], int n);
char* pad_left(char a[], int n);
char* truncate(char a[], int n);
bool is_palindrome(char a[]);
char* trim_left(char a[]);
char* trim_right(char a[]);

int main()
{
    char *a = new char[10];
    cin >> a;
    /*char c;
    cin >> c;*/
    /*int n;
    cin >> n;*/
}

int length(char a[])
{
    int i=0;
    while(*(a+i)!='\0') i++;
    return i;
}

char* reverse(char a[])
{
    for(int i=0; i<length(a)/2; i++){
        swap(*(a+i),*(a+length(a)-i-1));
    }
    return a;
}

char* delete_char(char a[], char c)
{
    int l=length(a);
    for(int i=0; i<l; i++){
        if(*(a+i)==c){
            for(int j=i; j<l-1; j++){
                *(a+j)=a[j+1];
            }
            *(a+l-1) = '\n';
            l--; i--;
        }
    }
    return a;
}

char* pad_right(char a[], int n)
{
    int l=length(a);
    while(l<=n){
        l++;
        *(a+l-1) = '_';
    }
    return a;
}

char* pad_left(char a[], int n)
{
    int l=length(a);
    while(l<n){
        l++;
        for(int i=l-1; i>0; i--){
            *(a+i)=*(a+i-1);
        }
        *a = '_';
    }
    return a;
}

char* truncate(char a[], int n)
{
    int l=length(a);
    if(l>n){
        for(int i=l-1; i>=n; i--){
            *(a+i) = '\n';
        }
    }
    return a;
}

bool is_palindrome(char a[])
{
    int l = length(a);
    for(int i=0; i<l/2; i++){
        if(*(a+i) != *(a+l-1-i)) return false;
    }
    return true;
}

char* trim_left(char a[])
{
    int l=length(a);
    while(*a == ' '){
        for(int i=0; i<l-1; i++){
            *(a+i)=*(a+i+1);
        }
        *(a+l-1)='\n';
        l--;
    }
    return a;
}

char* trim_right(char a[])
{
    int l=length(a);
    while(*(a+l-1) == ' '){
        *(a+l-1)='\n';
        l--;
    }
    return a;
}
