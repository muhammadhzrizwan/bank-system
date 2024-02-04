# include<iostream>
# include<fstream>
using namespace std;

string det(string i,string a){
fstream g;string s[14];string j,id,acn,pin,b,n,mob,f,m,c,ad,pa,p,wa,d;
i=i+".TXT";
g.open(i.c_str(),ios::in);
for(int i=0;i<14;i++){
getline(g,j,'\n');
s[i]=j;}
g.close();
if(a=="id"){return s[0];}
if(a=="acn"){return s[1];}
if(a=="pin"){return s[2];}
if(a=="b"){return s[3];}
if(a=="n"){return s[4];}
if(a=="mob"){return s[5];}
if(a=="f"){return s[6];}
if(a=="m"){return s[7];}
if(a=="c"){return s[8];}
if(a=="ad"){return s[9];}
if(a=="pa"){return s[10];}
if(a=="p"){return s[11];}
if(a=="wa"){return s[12];}
if(a=="d"){return s[13];}
};

bool mbc(string m){
fstream f,g;string i;int j=0;int z=0;
f.open("Id.TXT",ios::in);
if(f.fail()){return true;}
else{
while(!f.eof()){
getline(f,i,'\n');
j++;}
j=j-1;
f.close();
string s[j];
f.open("Id.TXT",ios::in);
for(int l=0;l<j;l++){
getline(f,i,'\n');
s[l]=i;}
for(int p=0;p<j;p++){
if(m==det(s[p],"mob")){z++;}}
if(z>0){return false;}
else{return true;}}}


bool fc(string a){
fstream f;string u=a+".TXT";
f.open(u.c_str(),ios::in);
if(f.fail()){return false;}
else{return true;}
}

bool CN(int i){
bool a,b,c;
if(i>=48&&i<=57){a=true;}
return a;}

bool CA(int i){
bool a,b,c;
if(i>=65&&i<=90){a=true;}
if(i>=97&&i<=122){b=true;}
if(i==32){a=true;}
if(a==true||b==true||c==true){return true;}
else {return false;}
}

int CC(string q){
char c;
string a;int s=0;fstream f;
f.open("a.TXT",ios::out);
f<<q;
f.close();
f.open("a.TXT",ios::in);
while(!f.eof()){
getline(f,a,' ');
int n=0;
while(a[n]!=0){
n++;
s=s+1;}
s++;}
f.close();
return s-1;}

int SI(string q){
int n,t,r,p,s;int u=0;
n=CC(q);
for(int g=0;g<n;g++){
p=1;
t=n-g-1;
while(t>0){p=p*10;t--;}
if (q[g]=='0'){r=0;}
if (q[g]=='1'){r=1;}
if (q[g]=='2'){r=2;}
if (q[g]=='3'){r=3;}
if (q[g]=='4'){r=4;}
if (q[g]=='5'){r=5;}
if (q[g]=='6'){r=6;}
if (q[g]=='7'){r=7;}
if (q[g]=='8'){r=8;}
if (q[g]=='9'){r=9;}
s=r*p;
u=u+s;}
return u;}

int pa(){
int a=100000000;fstream f;string b,c,m;int y=0;int j=0;
f.open("ID.TXT",ios::in);
while(!f.eof()){
getline(f,b,'\n');
y++;}
f.close();
string d[y];
f.open("ID.TXT",ios::in);
for(int i=0;i<y;i++){
getline(f,b,'\n');
d[i]=b;}
f.close();

while(j==0){
for(int h=0;h<y;h++){
int t=0;
c=d[h]+".TXT";
f.open(c.c_str(),ios::in);
while(t<2){getline(f,m,'\n');t++;}
f.close();
if(a==SI(m)){a++;}
else{j++;}}}
return a;}

string ACCC(){
string id,ac,pin,c;int w;fstream f,mn;
mn.open("Id.TXT",ios::in);
if(mn.fail()){cout<<"Sorry!\nWe don't have any accounts yet.\n";}
else{
start :
cout<<"Choose number to tell us weather who are you ?\n1. Costumer\n2. Management\n\nEnter number :";getline(cin,c);
if(c=="1"){
cout<<"Please Enter following Data :\n";
ID :
do{
cout<<"\nYour National ID card number* : ";getline(cin,id);
int q=CC(id);int rep=0;w=0;
for(int v=0;v<q;v++){if(id[v]==32){while(rep==0){cout<<"\nID card number cannot contain spaces.\tTry again!\n\n";rep ++;w++;}}
else if(id[v]==45){while(rep==0){cout<<"\nID card number cannot contain dashes.\tTry again!\n\n";rep ++;w++;}}
else if(CN(id[v])==false){while(rep==0){cout<<"\nID card number can contain Numeric Characters only.\tTry again!\n\n";rep ++;w++;}}}
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
else if(q<13){while(rep==0){cout<<"\nID card number cannot contain less than 13 digits.\tTry again!\n\n";rep ++;w++;}}
else if(q>13){while(rep==0){cout<<"\nID card number cannot contain more than 13 digits.\tTry again!\n\n";rep ++;w++;}}}
while(w!=0);

string t=id+".TXT";
f.open(t.c_str(),ios::in);
if(f.fail()){cout<<"\nNo account assosiated with given ID card number. Please check and Try again !\n";goto ID;}

AC :
do{
cout<<"Your 9-digits Account number* : ";getline(cin,ac);
int q=CC(ac);int rep=0;w=0;
for(int v=0;v<q;v++){if(ac[v]==32){while(rep==0){cout<<"\nAccount number cannot contain spaces.\tTry again!\n\n";rep ++;w++;}}
else if(ac[v]==45){while(rep==0){cout<<"\nAccount number cannot contain dashes.\tTry again!\n\n";rep ++;w++;}}
else if(CN(ac[v])==false){while(rep==0){cout<<"\nAccount number can contain Numeric Characters only.\tTry again!\n\n";rep ++;w++;}}}
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
else if(q<9){while(rep==0){cout<<"\nAccount number cannot contain less than 9 digits.\tTry again!\n\n";rep ++;w++;}}
else if(q>9){while(rep==0){cout<<"\nAccount number cannot contain more than 9 digits.\tTry again!\n\n";rep ++;w++;}}}
while(w!=0);

do{
cout<<"Your 4-digits Pin code* : ";getline(cin,pin);
int q=CC(pin);int rep=0;w=0;
for(int v=0;v<q;v++){if(pin[v]==32){while(rep==0){cout<<"\nPin code cannot contain spaces.\tTry again!\n\n";rep ++;w++;}}
else if(pin[v]==45){while(rep==0){cout<<"\nPin code cannot contain dashes.\tTry again!\n\n";rep ++;w++;}}
else if(CN(pin[v])==false){while(rep==0){cout<<"\nPin code can contain Numeric Characters only.\tTry again!\n\n";rep ++;w++;}}}
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
else if(q<4){while(rep==0){cout<<"\nPin code cannot contain less than 4 digits.\tTry again!\n\n";rep ++;w++;}}
else if(q>4){while(rep==0){cout<<"\nPin code cannot contain more than 4 digits.\tTry again!\n\n";rep ++;w++;}}}
while(w!=0);

if(ac!=det(id,"acn")||pin!=det(id,"pin")){cout<<"\nInvalid Account no. or Pin code. Please check and Try again !\n";goto AC;}
}
else if(c=="2"){
Id :
do{
cout<<"\nCostumer's National ID card number* : ";getline(cin,id);
int q=CC(id);int rep=0;w=0;
for(int v=0;v<q;v++){if(id[v]==32){while(rep==0){cout<<"\nID card number cannot contain spaces.\tTry again!\n\n";rep ++;w++;}}
else if(id[v]==45){while(rep==0){cout<<"\nID card number cannot contain dashes.\tTry again!\n\n";rep ++;w++;}}
else if(CN(id[v])==false){while(rep==0){cout<<"\nID card number can contain Numeric Characters only.\tTry again!\n\n";rep ++;w++;}}}
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
else if(q<13){while(rep==0){cout<<"\nID card number cannot contain less than 13 digits.\tTry again!\n\n";rep ++;w++;}}
else if(q>13){while(rep==0){cout<<"\nID card number cannot contain more than 13 digits.\tTry again!\n\n";rep ++;w++;}}}
while(w!=0);

string t=id+".TXT";
f.open(t.c_str(),ios::in);
if(f.fail()){cout<<"\nNo account assosiated with given ID card number. Please check and Try again !\n";goto Id;}
}

else{cout<<"Only '1' or '2' is valid.\tTry Again!\n";goto start;}
return id;}}


void Add_Account(){
string a;string b,id,ad,adp,c,m,fa,pro,deg,wad,amm,cid,ccid,sf,pin,cpin,ccpin,bj,mob;int i;int w,acn;int y=0;
cout<<"\n\nInstructions :\n(i) Filling of data asked with '*' symbol is must.\n(ii) Names can contain alphabets only.\n(iii) Enter ID card number without dashes.\n(iv) Enter ID card number carefully because you can't edit it again.\n(v) If present Adress is same as permanent Adress you may leave \"Permanent Adress\" section empty.\n(vi) Filling of Inappropriate data may result in facing problems in the future.\n(vii) You will face hurdles if you dont follow upgiven instructions.\n\nPlease Enter following data :\n\n";

do{
cout<<"Name / Account Title* : ";getline(cin,b);
int q=CC(b);int rep=0;w=0;
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
for(int v=0;v<q;v++){if(CA(b[v])==false){while(rep==0){cout<<"\nA Name can contain Alphabetic Characters only.\tTry again!\n\n";rep ++;w++;}}}}
while(w!=0);

ID :
do{
cout<<"National ID card number* : ";getline(cin,id);
int q=CC(id);int rep=0;w=0;
for(int v=0;v<q;v++){if(id[v]==32){while(rep==0){cout<<"\nID card number cannot contain spaces.\tTry again!\n\n";rep ++;w++;}}
else if(id[v]==45){while(rep==0){cout<<"\nID card number cannot contain dashes.\tTry again!\n\n";rep ++;w++;}}
else if(CN(id[v])==false){while(rep==0){cout<<"\nID card number can contain Numeric Characters only.\tTry again!\n\n";rep ++;w++;}}}
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
else if(q<13){while(rep==0){cout<<"\nID card number cannot contain less than 13 digits.\tTry again!\n\n";rep ++;w++;}}
else if(q>13){while(rep==0){cout<<"\nID card number cannot contain more than 13 digits.\tTry again!\n\n";rep ++;w++;}}
if(fc(id)==true){{while(rep==0){cout<<"\nAccount with this ID card number already exists.\tTry again!\n\n";rep ++;w++;}}}}
while(w!=0);

CID :
cout<<"Confirm National ID card number : ";getline(cin,cid);
if(cid!=id){string ccid;cout<<"ID card numbers doesnot match !";
CCID :
cout<<"\nDo you want to change ID card number(y/n) : ";getline(cin,ccid);
if(ccid=="y"||ccid=="Y"){goto ID;}
else if(ccid=="n"||ccid=="N"){cout<<"Try again!\n";goto CID;}
else{cout<<"Only 'y' and 'n' are valid !\n";goto CCID;}
}

do{
cout<<"Father's Name* : ";getline(cin,fa);
int q=CC(fa);int rep=0;w=0;
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
for(int v=0;v<q;v++){if(CA(fa[v])==false){while(rep==0){cout<<"\nA Name can contain Alphabetic Characters only.\tTry again!\n\n";rep ++;w++;}}}}
while(w!=0);

do{
cout<<"Mother's Name* : ";getline(cin,m);
int q=CC(m);int rep=0;w=0;
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
for(int v=0;v<q;v++){if(CA(m[v])==false){while(rep==0){cout<<"\nA Name can contain Alphabetic Characters only.\tTry again!\n\n";rep ++;w++;}}}}
while(w!=0);

do{
cout<<"City*  : ";getline(cin,c);
int q=CC(c);int rep=0;w=0;
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
for(int v=0;v<q;v++){if(CA(c[v])==false){while(rep==0){cout<<"\nA Name can contain Alphabetic Characters only.\tTry again!\n\n";rep ++;w++;}}}}
while(w!=0);

do{
cout<<"Mobile number* : ";getline(cin,mob);
int q=CC(mob);int rep=0;w=0;
for(int v=0;v<q;v++){if(mob[v]==32){while(rep==0){cout<<"\nMobile number cannot contain spaces.\tTry again!\n\n";rep ++;w++;}}
else if(mob[v]==45){while(rep==0){cout<<"\nMobile number cannot contain dashes.\tTry again!\n\n";rep ++;w++;}}
else if(CN(mob[v])==false){while(rep==0){cout<<"\nMobile number can contain Numeric Characters only.\tTry again!\n\n";rep ++;w++;}}}
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
else if(q<11){while(rep==0){cout<<"\nMobile number cannot contain less than 11 digits.\tTry again!\n\n";rep ++;w++;}}
else if(q>11){while(rep==0){cout<<"\nMobile number cannot contain more than 11 digits.\tTry again!\n\n";rep ++;w++;}}
if(mbc(mob)==false){{while(rep==0){cout<<"\nAccount with this Mobile number already exists.\tTry again!\n\n";rep ++;w++;}}}}
while(w!=0);

do{
cout<<"Present adress* : ";getline(cin,ad);
int q=CC(ad);w=0;
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}}
while(w!=0);

cout<<"Permanent adress : ";getline(cin,adp,'\n');
if(CC(adp)==0){adp=ad;}

do{
cout<<"Profession* : ";getline(cin,pro);
int q=CC(pro);w=0;
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}}
while(w!=0);

cout<<"Workplace Designation : ";getline(cin,deg,'\n');
if(CC(deg)==0){deg="No workplace Designation entered";}

do{
cout<<"Workplace Adress* : ";getline(cin,wad);
int q=CC(wad);w=0;
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}}
while(w!=0);

here:
do{
cout<<"\nAmmount to be deposited in account(in rupees)* : ";getline(cin,amm);
int q=CC(amm);int rep=0;w=0;int i=SI(amm);string co;int E,W;
for(int v=0;v<q;v++){if(amm[v]==32){while(rep==0){cout<<"\nEntered Ammount cannot contain spaces.\tTry again!\n\n";rep ++;w++;}}
else if(CN(amm[v])==false){while(rep==0){cout<<"\nEntered Ammount can contain Numeric Characters only.\tTry again!\n\n";rep ++;w++;}}}
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
else if(i<1000){
while(rep==0){cout<<"\nEntered Ammount should not be less than 1000 otherwise you would not be able to open account.";
do{E=0;
cout<<"\nDo you still want to open account? (y/n) : ";getline(cin,co);
if(co=="n"||co=="N"){
do{ W=0;
cout<<"\nAre you sure want to delete account? (y/n) : ";getline(cin,sf);
if(sf=="y"||sf=="Y"){cout<<"\nThis account has been deleted and information has beed wasted sucessfully.\nThankyou for using our service!";W=0;E=0;w=0;rep++;}
else if(sf=="n"||sf=="N"){cout<<"\nTry again !";goto here;}
else {cout<<"Only 'y' and 'n' are valid";W++;}}
while(W!=0);}
else if(co=="y"||co=="Y"){cout<<"Try again!\n";rep ++;w++;}
else{cout<<"Only 'y' and 'n' are valid";E++;}}
while(E!=0);}}}
while(w!=0);

if(sf!="Y"||sf!="y"){sf="n";}

if(sf=="N"||sf=="n"){
if(fc("ID")==true){acn=pa();}
else{acn=100000000;}
cout<<"\nCongragulations !\nAccount has been opened and your account number is : "<<acn;

PIN :
do{
cout<<"\nCreate a Pin Code of 4 digits* : ";getline(cin,pin);
int q=CC(pin);int rep=0;w=0;
for(int v=0;v<q;v++){if(pin[v]==32){while(rep==0){cout<<"\nPin Code cannot contain spaces.\tTry again!\n\n";rep ++;w++;}}
else if(pin[v]==45){while(rep==0){cout<<"\nPin Code cannot contain dashes.\tTry again!\n\n";rep ++;w++;}}
else if(CN(pin[v])==false){while(rep==0){cout<<"\nPin Coder can contain Numeric Characters only.\tTry again!\n\n";rep ++;w++;}}}
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
else if(q<4){while(rep==0){cout<<"\nPin Code cannot contain less than 4 digits.\tTry again!\n\n";rep ++;w++;}}
else if(q>4){while(rep==0){cout<<"\nPin Code cannot contain more than 4 digits.\tTry again!\n\n";rep ++;w++;}}}
while(w!=0);

CPIN :
cout<<"Confirm Pin Code : ";getline(cin,cpin);
if(cpin!=pin){string ccid;cout<<"Pin Codes doesnot match !";
CCPIN :
cout<<"\nDo you want to change Pin Code(y/n) : ";getline(cin,ccpin);
if(ccpin=="y"||ccpin=="Y"){goto PIN;}
else if(ccpin=="n"||ccpin=="N"){cout<<"Try again!\n";goto CPIN;}
else{cout<<"Only 'y' and 'n' are valid !\n";goto CCPIN;}
}
cout<<"\nInformation sucessfully updated.\n\n";
fstream f;int con=0;
if(fc("ID")==true){
f.open("ID.TXT",ios::in);
while(!f.eof()){getline(f,bj,'\n');con++;}
string ss[con];
for(int gg=0;gg<con;gg++){getline(f,ss[gg]);}
f.close();
f.open("ID.TXT",ios::out);
for(int gh=0;gh<con;gh++){f<<ss[gh]<<'\n';f<<id;}
f.close();}

else{
fstream h;
h.open("ID.TXT",ios::out);
h<<id;
h.close();}

string j= id + ".TXT";
f.open(j.c_str(),ios::out);
f<<id<<'\n'<<acn<<'\n'<<pin<<'\n'<<amm<<'\n'<<b<<'\n'<<mob<<'\n'<<fa<<'\n'<<m<<'\n'<<c<<'\n'<<ad<<'\n'<<adp<<'\n'<<pro<<'\n'<<wad<<'\n'<<deg;
f.close();}}


void Deposit_Ammount(){

fstream mn;string i=ACCC();
mn.open("Id.TXT",ios::in);
if(!mn.fail()){
string id=i+".TXT";fstream f;string a;int w;
do{
cout<<"\nAmmount you want to deposit in account(in rupees)* : ";getline(cin,a);
int q=CC(a);int rep=0;w=0;int i=SI(a);string co;int E,W;
for(int v=0;v<q;v++){if(a[v]==32){while(rep==0){cout<<"\nEntered Ammount cannot contain spaces.\tTry again!\n\n";rep ++;w++;}}
else if(CN(a[v])==false){while(rep==0){cout<<"\nEntered Ammount can contain Numeric Characters only.\tTry again!\n\n";rep ++;w++;}}}
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}}
while(w!=0);

string s[14];
f.open(id.c_str(),ios::in);
for(int p=0;p<14;p++){getline(f,s[p],'\n');}
f.close();

int ca=SI(det(i,"b"))+SI(a);

f.open(id.c_str(),ios::out);
for(int q=0;q<3;q++){f<<s[q]<<'\n';}
f<<ca;
for(int r=4;r<14;r++){f<<'\n'<<s[r];}
f.close();

cout<<"\nAmmout sucessfully deposited.\nCurrent account balance is "<<det(i,"b")<<" Rupees.";

}}

void Withdraw_Ammount(){

fstream mn;string i=ACCC();
mn.open("Id.TXT",ios::in);
if(!mn.fail()){
string id=i+".TXT";fstream f;string a;int w;string ck;
start:
do{
cout<<"\nAmmount to be withdrawn from account(in rupees)* : ";getline(cin,a);
int q=CC(a);int rep=0;w=0;int u=SI(a);string co;int E,W;
for(int v=0;v<q;v++){if(a[v]==32){while(rep==0){cout<<"\nEntered Ammount cannot contain spaces.\tTry again!\n\n";rep ++;w++;}}
else if(CN(a[v])==false){while(rep==0){cout<<"\nEntered Ammount can contain Numeric Characters only.\tTry again!\n\n";rep ++;w++;}}}
if(q==0){cout<<"\nYou cannot leave this section Empty.\tTry Again!\n\n";w++;}
else if(u<500){while(rep==0){cout<<"\nEntered ammount should not be less than 500.\tTry again!\n\n";rep ++;w++;}}
else if(u%500!=0){while(rep==0){cout<<"\nEntered ammount should be multiple of 500.\tTry again!\n\n";rep ++;w++;}}}
while(w!=0);

int ca=SI(det(i,"b"))-SI(a);

if(ca<0){cout<<"Cannot withdraw "<<a<<" Rupees because current account balance is "<<det(i,"b")<<" Rupees ie. less than "<<a<<" Rupees.";
T:
cout<<"\nDo you still want to withdraw an ammount? (Y/N)";getline(cin,ck);
if(ck=="Y"||ck=="y"){goto start;}
else if(ck=="N"||ck=="n"){}
else{cout<<"Only 'Y' and 'N' are valid .";goto T;}}
else{
string s[14];
f.open(id.c_str(),ios::in);
for(int p=0;p<14;p++){getline(f,s[p],'\n');}
f.close();

f.open(id.c_str(),ios::out);
for(int q=0;q<3;q++){f<<s[q]<<'\n';}
f<<ca;
for(int r=4;r<14;r++){f<<'\n'<<s[r];}
f.close();

cout<<"\nAmmout sucessfully withdrawn.\nCurrent account balance is "<<det(i,"b")<<" Rupees.";

}}}

void Check_Balance(){
fstream mn;string i=ACCC();
mn.open("Id.TXT",ios::in);
if(!mn.fail()){cout<<"\nCurrent balance of this account is "<<det(i,"b")<<" Rupees.";}}

void Remove_Account(){

fstream mn;string i=ACCC();
mn.open("Id.TXT",ios::in);
if(!mn.fail()){
string x;string id=i+".TXT";fstream f;string o;int u=0;int t=0;
start :
cout<<"\nAre you sure want to delete this Account(Y/N)";getline(cin,x,'\n');
if(x=="n"||x=="N"){}
else if(x=="y"||x=="Y"){
f.open("ID.TXT",ios::in);
while(o!=i){getline(f,o,'\n');u++;}
f.close();
f.open("ID.TXT",ios::in);
while(!f.eof()){getline(f,o,'\n');t++;}
f.close();
string s[t];
f.open("ID.TXT",ios::in);
for(int h=0;h<t;h++){getline(f,s[h],'\n');}
f.close();

f.open("ID.TXT",ios::out);
for(int g=0;g<u-1;g++){f<<s[g]<<'\n';}
for(int k=u;k<t-1;k++){f<<s[k]<<'\n';}
f<<s[t-1];
f.close();

if(remove(id.c_str())==0){cout<<"\nAccount has been sucessfully deleted";}
}
else if(x!="n"||x!="N"){cout<<"Only 'Y' and 'N' are valid. Try Again !\n";goto start;}
}}

void Modify_Account(){
string ii=ACCC();string id=ii+".TXT";fstream mn;string x;
mn.open("Id.TXT",ios::in);
if(!mn.fail()){
start :
cout<<"\nAre you sure want to modify / edit Account details? (Y/N)";getline(cin,x,'\n');
if(x=="n"||x=="N"){}
else if(x=="y"||x=="Y"){

string a;string b,ad,adp,c,m,fa,pro,deg,wad,amm,mob,sf,pin,cpin,ccpin,bj;int i;int w,acn;int y=0;
cout<<"\n\nInstructions :\n(i)You cannot edit ID card number.\n(ii) Names can contain alphabets only.\n(iii)If you dont want to edit a particular section you may leave the section empty.\n\nPlease Enter following data :\n\n";

cout<<"ID card number : "<<ii<<'\n';

do{
cout<<"Name / Account Title : ";getline(cin,b);
int q=CC(b);int rep=0;w=0;
if(q==0){b=det(ii,"n");}
for(int v=0;v<q;v++){if(CA(b[v])==false){while(rep==0){cout<<"\nA Name can contain Alphabetic Characters only.\tTry again!\n\n";rep ++;w++;}}}}
while(w!=0);

do{
cout<<"Father's Name : ";getline(cin,fa);
int q=CC(fa);int rep=0;w=0;
if(q==0){fa=det(ii,"f");}
for(int v=0;v<q;v++){if(CA(fa[v])==false){while(rep==0){cout<<"\nA Name can contain Alphabetic Characters only.\tTry again!\n\n";rep ++;w++;}}}}
while(w!=0);

do{
cout<<"Mother's Name : ";getline(cin,m);
int q=CC(m);int rep=0;w=0;
if(q==0){m=det(ii,"m");}
for(int v=0;v<q;v++){if(CA(m[v])==false){while(rep==0){cout<<"\nA Name can contain Alphabetic Characters only.\tTry again!\n\n";rep ++;w++;}}}}
while(w!=0);

do{
cout<<"City  : ";getline(cin,c);
int q=CC(c);int rep=0;w=0;
if(q==0){c=det(ii,"c");}
for(int v=0;v<q;v++){if(CA(c[v])==false){while(rep==0){cout<<"\nA Name can contain Alphabetic Characters only.\tTry again!\n\n";rep ++;w++;}}}}
while(w!=0);

do{
cout<<"Mobile number* : ";getline(cin,mob);
int q=CC(mob);int rep=0;w=0;
if(q==0){mob=det(ii,"mob");}
else{
for(int v=0;v<q;v++){if(mob[v]==32){while(rep==0){cout<<"\nMobile number cannot contain spaces.\tTry again!\n\n";rep ++;w++;}}
else if(mob[v]==45){while(rep==0){cout<<"\nMobile number cannot contain dashes.\tTry again!\n\n";rep ++;w++;}}
else if(CN(mob[v])==false){while(rep==0){cout<<"\nMobile number can contain Numeric Characters only.\tTry again!\n\n";rep ++;w++;}}}
if(q>0||q<11){while(rep==0){cout<<"\nMobile number cannot contain less than 11 digits.\tTry again!\n\n";rep ++;w++;}}
else if(q>11){while(rep==0){cout<<"\nMobile number cannot contain more than 11 digits.\tTry again!\n\n";rep ++;w++;}}
if(mbc(mob)==false){{while(rep==0){cout<<"\nAccount with this Mobile number already exists.\tTry again!\n\n";rep ++;w++;}}}}}
while(w!=0);

cout<<"Present adress : ";getline(cin,ad);
if(CC(ad)==0){ad=det(ii,"ad");}

cout<<"Permanent adress : ";getline(cin,adp,'\n');
if(CC(adp)==0){adp=det(ii,"pa");}

cout<<"Profession* : ";getline(cin,pro);
if(CC(pro)==0){pro=det(ii,"p");}

cout<<"Workplace Designation : ";getline(cin,deg,'\n');
if(CC(deg)==0){deg=det(ii,"d");}

cout<<"Workplace Adress : ";getline(cin,wad);
if(CC(wad)==0){wad=det(ii,"wa");}

PIN :
do{
cout<<"\nModify 4-digits pin code : ";getline(cin,pin);
int q=CC(pin);int rep=0;w=0;
if(q!=0){
for(int v=0;v<q;v++){if(pin[v]==32){while(rep==0){cout<<"\nPin Code cannot contain spaces.\tTry again!\n\n";rep ++;w++;}}
else if(pin[v]==45){while(rep==0){cout<<"\nPin Code cannot contain dashes.\tTry again!\n\n";rep ++;w++;}}
else if(CN(pin[v])==false){while(rep==0){cout<<"\nPin Coder can contain Numeric Characters only.\tTry again!\n\n";rep ++;w++;}}}
if(q>0||q<4){while(rep==0){cout<<"\nPin Code cannot contain less than 4 digits.\tTry again!\n\n";rep ++;w++;}}
else if(q>4){while(rep==0){cout<<"\nPin Code cannot contain more than 4 digits.\tTry again!\n\n";rep ++;w++;}}}}
while(w!=0);

if(CC(pin)!=0){
CPIN :
cout<<"Confirm your Pin Code : ";getline(cin,cpin);
if(cpin!=pin){string ccid;cout<<"Pin Codes doesnot match !";
CCPIN :
cout<<"\nDo you want to change Pin Code(y/n) : ";getline(cin,ccpin);
if(ccpin=="y"||ccpin=="Y"){goto PIN;}
else if(ccpin=="n"||ccpin=="N"){cout<<"Try again!\n";goto CPIN;}
else{cout<<"Only 'y' and 'n' are valid !\n";goto CCPIN;}
}}
else if(CC(pin)==0){pin=det(ii,"pin");}

string accn=det(ii,"acn");amm=det(ii,"b");
fstream f;
f.open(id.c_str(),ios::out);
f<<ii<<'\n'<<accn<<'\n'<<pin<<'\n'<<amm<<'\n'<<b<<'\n'<<mob<<'\n'<<fa<<'\n'<<m<<'\n'<<c<<'\n'<<ad<<'\n'<<adp<<'\n'<<pro<<'\n'<<wad<<'\n'<<deg;
f.close();}}
else if(x!="n"||x!="N"){cout<<"Only 'Y' and 'N' are valid. Try Again !\n";goto start;}}

void Account_Holders(){
fstream f;string i;
f.open("ID.TXT",ios::in);
if(f.fail()){cout<<"We doesn't have any account yet !";}
else{
cout<<"ID card no.\t\tNames\n\n";
while(!f.eof()){
getline(f,i,'\n');
cout<<i<<"\t\t"<<det(i,"n")<<'\n';}}}

void Account_Details(){
fstream g;g.open("ID.TXT",ios::in);string i=ACCC();
if(!g.fail()){
fstream f;
cout<<"\nName : "<<det(i,"n")<<'\n';
cout<<"National ID card number : "<<det(i,"id")<<'\n';
cout<<"Father's Name : "<<det(i,"f")<<'\n';
cout<<"Mother's Name : "<<det(i,"m")<<"\n\n";
cout<<"City : "<<det(i,"c")<<'\n';
cout<<"Mobile number : "<<det(i,"mob")<<'\n';
cout<<"Present Adress : "<<det(i,"ad")<<'\n';
cout<<"Permanent Adress : "<<det(i,"pa")<<"\n\n";
cout<<"Profession : "<<det(i,"p")<<'\n';
cout<<"Workplace Designation : "<<det(i,"d")<<'\n';
cout<<"Workplce Adress : "<<det(i,"wa")<<"\n\n";
cout<<"Account number : "<<det(i,"acn")<<'\n';
cout<<"Pin code : "<<det(i,"pin")<<'\n';
cout<<"Current Balance : "<<det(i,"b")<<'\n';}}


void Exit(){cout<<"Thankyou for choosing our banking service\nAssalam-Alaikum !";}

int main(){
string c;string a;string b;int d;
cout<<"Assalam-Alaikum\n";
do{
cout<<"\tChoose any one of following by number\n\n1. Add new account\n2. Deposit amount \n3. Withdraw amount\n4. Balance enquiry \n5. List of all account holders in bank\n6. Close or delete an account\n7. Modify detail of an account\n8. View details of an account\n9. Exit\n\nEnter number : ";
cin>>c;
if(c=="1"){Add_Account();}
else if(c=="2"){Deposit_Ammount();}
else if(c=="3"){Withdraw_Ammount();}
else if(c=="4"){Check_Balance();}
else if(c=="5"){Account_Holders();}
else if(c=="6"){Remove_Account();}
else if(c=="7"){Modify_Account();}
else if(c=="8"){Account_Details();}
else if(c=="9"){Exit();}
else{cout<<"\n\nSorry !\tYou can enter numbers from 1-9 only\nPlease try again!\n\n";c="";}
}
while(c!="9");
return 0;}

