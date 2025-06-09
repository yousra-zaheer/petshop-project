#include <iostream>
using namespace std;
class animal{
    public:
    string name,color,property,breed;
    int cost,age,id;
    float size;
    public:
   void showinfo(string n,string c,string p,string b,int co,int ag ,int d,float s){
    name=n;
    color=c;
    property=p;
    breed=b;
    cost=co;
    age=ag;
    id=d;
    size=s;}
   void getdata(){
        cout<<endl;
        cout<<"Breed: "<<breed<<endl;
        cout<<"Unique Id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Property: "<<property<<endl;
        cout<<"Cost: "<<cost<<" Rs"<<endl;
        cout<<"Life span: "<<age<<" years"<<endl;
        cout<<"Size: "<<size<<" cm"<<endl;
        cout<<endl;}
};
class dog:public animal{
};
class cat:public animal{
};
class bird:public animal{
};
int main(){
   dog a[100];
   cat c[100];
   bird b[100];
   int f,ff,sell,s[100];
   string name,color,property,breed,category;
   int cost,age,id,select,profit;
   float size;
   cout<<"========WELCOME TO PET STORE========"<<endl;
   cout<<"========select to view Animal categories========"<<endl;
   cout<<"MENU: "<<endl;
   cout<<"1.Animal "<<endl;
   cin>>select;
   cout<<endl;
   if(select==1){
       cout<<"1.Dogs \n2.Cats \n3.Birds"<<endl;}
   cout<<"==============Choose a Category=============="<<endl;
   cin>>category;
   if(category=="dog"||category=="Dog"){
   a[1].showinfo("buddy","Black & Tan","watchdog","German shepherd",90000,12,1,64.5); 
   a[2].showinfo("Duddle","Brown","protective","Pitbull",90000,16,2,53);
a[3].showinfo("Bella","Golden","Guard Dog","Golden Retriever",60000,12,3,61);
a[4].showinfo("Rocky","Black & White","Watchdog","Bull Dog",90000,9,4,31);
a[5].showinfo("coco","white","Intelligent","Poodle",90000,8,5,35);  
    cout<<"===SELECT ANY=== ";
    cout<<"\n1.To Buy ";
    cout<<"\n2.To Sell ";
    cout<<"\n3.To Access"<<endl;
    cin>>f;
int total=5;
if(f==1){
   int balance =200000;
    int buy;
    cout<<"\nHow many pets do you want to buy ?"<<endl;
    cin>>buy;
    for(int i=1;i<=buy;i++){
        total++;
        cout<<"Enter Name of pet: "<<endl;
        cin>>name;
        cout<<"Enter Breed: "<<endl;
        cin>>breed;
        cout<<"Enter Unique Id: "<<endl;
        cin>>id;
        cout<<"Enter Color: "<<endl;
        cin>>color;
        cout<<"Enter Property: "<<endl;
        cin>>property;
        cout<<"Enter Cost: "<<endl;
        cin>>cost;
        cout<<"Enter Life span of Animal: "<<endl;
        cin>>age;
        cout<<"Enter Size of animal: "<<endl;
        cin>>size;
        profit=cost*0.1;
        profit=cost-profit;
        balance=balance-profit;
         a[total].showinfo(name,color,property,breed,cost,age,id,size);
        }
    for(int i=1;i<=total;i++){
        a[i].getdata();}
    cout<<"Remaining Balance is "<<balance;}  
if(f==2){
cout<<"\nHow Many Would You Like To sell ? ";
cin>>sell;
for(int j=1;j<=sell;j++){
    cin>>s[j];}
int balance =200000;
for(int i=1;i<=total;i++){
 for(int k=1;k<=sell;k++){
    if(s[k] ==a[i].id){
        balance =balance +a[i].cost;
        a[i].showinfo("0","0","0","0",0,0,0,0);
    }}}
    for(int i=1;i<=total;i++){   
    a[i].getdata();}
cout<<"Remaining balance is "<<balance;}
if(f==3){
cout<<"\n===Enter unique id: ===";
cin>>ff;
for(int i=1;i<=100;i++)
{   if(ff==i)
    a[i].getdata();}
}}
  else if(category=="cat"||category=="Cat"){
 c[1].showinfo("simba","cream","playful","Persian",30000,12,1,25);
c[2].showinfo("leo","white","friendly","Maine coon",40000,12,2,30); c[3].showinfo("Mina","Tan","Social","Siamese",25000,12,3,20);
c[4].showinfo("Daisy","seal blue","Affectionate","Ragedoll",35000,9,4,25);
c[5].showinfo("Oscar","white","easy going","British short haired",30000,8,5,20);  
    cout<<"===SELECT ANY=== ";
    cout<<"\n1.To Buy ";
    cout<<"\n2.To Sell ";
    cout<<"\n3.To Access"<<endl;
    cin>>f;
 int total=5;
if(f==1){
   int balance =200000;
    int buy;
    cout<<"\nHow many pets do you want to buy ?"<<endl;
    cin>>buy;
    for(int i=1;i<=buy;i++){
        total++;
        cout<<"Enter Name of pet: "<<endl;
        cin>>name;
        cout<<"Enter Breed: "<<endl;
        cin>>breed;
        cout<<"Enter Unique Id: "<<endl;
        cin>>id;
        cout<<"Enter Color: "<<endl;
        cin>>color;
        cout<<"Enter Property: "<<endl;
        cin>>property;
        cout<<"Enter Cost: "<<endl;
        cin>>cost;
        cout<<"Enter Life span of Animal: "<<endl;
        cin>>age;
        cout<<"Enter Size of animal: "<<endl;
        cin>>size;
        profit=cost*0.1;
        profit=cost-profit;
        balance=balance-profit;
         c[total].showinfo(name,color,property,breed,cost,age,id,size);
        }
    for(int i=1;i<=total;i++){
        c[i].getdata();}
    cout<<"Remaining Balance is "<<balance;}
if(f==2){
cout<<"\nHow Many Would You Like To sell ? ";
cin>>sell;
for(int j=1;j<=sell;j++){
    cin>>s[j];
}
int balance =200000;
for(int i=1;i<=total;i++){
 for(int k=1;k<=sell;k++){
    if(s[k] ==c[i].id){
        balance =balance +c[i].cost;
        c[i].showinfo("0","0","0","0",0,0,0,0);
    }}}
    for(int i=1;i<=total;i++){   
    c[i].getdata();}
cout<<"Remaining balance is "<<balance;
}
if(f==3){
cout<<"\n===Enter unique id: ===";
cin>>ff;
for(int i=1;i<=100;i++)
{   if(ff==i)
    c[i].getdata();}
}}
   else if(category=="bird"||category=="Bird"){
   b[1].showinfo("Rio","Green","mimic sound","Parrot",5000,20,1,10);
   b[2].showinfo("Bella","Red tail","excellent mimics","Grey parrot",20000,40,2,30); b[3].showinfo("sky","blue","colourful","Rosellas",10000,15,3,20);
b[4].showinfo("Forest","Green","colourful","Green-foot",15000,9,4,30);
b[5].showinfo("snow","white","sociable","Pigeon",2000,15,5,20);  
    cout<<"===SELECT ANY=== ";
    cout<<"\n1.To Buy ";
    cout<<"\n2.To Sell ";
    cout<<"\n3.To Access"<<endl;
    cin>>f;
 int total=5;
if(f==1){
   int balance =200000;
    int buy;
    cout<<"\nHow many pets do you want to buy ?"<<endl;
    cin>>buy;
    for(int i=1;i<=buy;i++){
        total++;
        cout<<"Enter Name of pet: "<<endl;
        cin>>name;
        cout<<"Enter Breed: "<<endl;
        cin>>breed;
        cout<<"Enter Unique Id: "<<endl;
        cin>>id;
        cout<<"Enter Color: "<<endl;
        cin>>color;
        cout<<"Enter Property: "<<endl;
        cin>>property;
        cout<<"Enter Cost: "<<endl;
        cin>>cost;
        cout<<"Enter Life span of Animal: "<<endl;
        cin>>age;
        cout<<"Enter Size of animal: "<<endl;
        cin>>size;
        profit=cost*0.1;
        profit=cost-profit;
        balance=balance-profit;
         b[total].showinfo(name,color,property,breed,cost,age,id,size);
        }
    for(int i=1;i<=total;i++){
        b[i].getdata();}
    cout<<"Remaining Balance is "<<balance;} 
if(f==2){
cout<<"\nHow Many Would You Like To sell ? ";
cin>>sell;
for(int k=1;k<=sell;k++){
    cin>>s[k];}
int balance =200000;
for(int i=1;i<=total;i++){
 for(int k=1;k<=sell;k++){
    if(s[k] ==b[i].id){
        balance =balance +b[i].cost;
        b[i].showinfo("0","0","0","0",0,0,0,0);
    }}}
    for(int i=1;i<=total;i++){   
    b[i].getdata();}
cout<<"Remaining balance is "<<balance;}
if(f==3){
cout<<"\n===Enter unique id: ===";
cin>>ff;
for(int i=1;i<=100;i++)
{if(ff==i)
    b[i].getdata();}   
}}
return 0;
}