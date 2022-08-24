#include <bits/stdc++.h>
#define input freopen("D:/inputoutput/input.txt", "r", stdin);
#define output freopen("D:/inputoutput/output.txt", "w",stdout);
using namespace std;
#define ll long long
#define nl endl
#define sort(a) sort(a.begin(),a.end())
#define rep(i,a,b) for (ll i = a; i < b; i++)


    class properties{
    public:
        string category,name;
        int id;
    };

    class sold_product : virtual public properties{
    public:
        int price;
       
    };

    class bought_product : virtual public properties{
    public:
        int price;
    };

int main()
{
//     #ifndef ONLINE_JUDGE
//   input; output;
// #endif
    ifstream fin("D:/inputoutput/SD project assignment1/productIN.txt");
    ofstream fout("D:/inputoutput/SD project assignment1/productOUT.txt");
    ifstream Cin("D:/inputoutput/SD project assignment1/customerIN.txt");
    ofstream Cout("D:/inputoutput/SD project assignment1/customerOUT.txt");
    ifstream bin("D:/inputoutput/SD project assignment1/buyerIN.txt");
    ofstream bout("D:/inputoutput/SD project assignment1/buyerOUT.txt");

    
    properties p;
    sold_product s;
    bought_product b;
    //properties
    fin>>p.id;
    fin.ignore();
    getline(fin,p.name);
    getline(fin,p.category);
    fout<<p.id<<nl<<p.name<<nl<<p.category<<nl;
    //customer
    Cin>>s.id>>s.price;
    Cout<<s.id<<nl<<s.price;
    //buyer
    bin>>b.id>>b.price;
    bin.ignore();
    getline(bin,b.name);
    bout<<b.id<<nl<<b.price<<nl<<b.name<<nl;

    
    

    return 0;
}