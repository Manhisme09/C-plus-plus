#include <iostream>

using namespace std;
void nhapmangb(int b[],int nb)
{
    int ib;
    for(ib=0;ib<nb;ib++){
        cout<<"b["<<ib<<"]=";
        cin>>b[ib];
    }
}
void nhapmangc(int c[],int nc)
{
    int ic;
    for(ic=0;ic<nc;ic++){
        cout<<"c["<<ic<<"]=";
        cin>>c[ic];
    }
}
int main()
{
    int a[100],b[100],c[100];
    int na,nb,nc;
    int ia,ib=0,ic=0;
    cout<<"nhap nb:";
    cin>>nb;
    cout<<"nhap nc:";
    cin>>nc;
    nhapmangb(b,nb);
    nhapmangc(c,nc);
    for(ia=0;ia<nb+nc;ia++){
        if(ib>=nb||ic>=nc){
            break;
        }
        if(b[ib]<c[ic]){
            a[ia]=b[ib];
            ib++;
        }else{
            a[ia]=c[ic];
            ic++;
        }
    }
    if(ic<nc){
        while(ic<nc){
            a[ia++]=c[ic++];
        }
    }
     if(ib<nb){
        while(ib<nb){
            a[ia++]=b[ib++];

        }
    }
    for(ia=0;ia<nb+nc;ia++){
        cout<<" "<<a[ia];
    }

    return 0;
}
