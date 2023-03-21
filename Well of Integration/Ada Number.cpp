bool solution(std::string line) {
unsigned i,n=line.size(),contor=0;
string aux;
for(i=0;i<line.size();i++)
{
if(line[i]>='A'&&line[i]<='F')
        line[i]+=32;
if(line[i]!='_')
{ aux.push_back(line[i]);
}
 if(line[i]=='#') contor++;
}
line=aux;
if(line.length()==0 || contor>2) return  0;
cout<<"Linia curata:"<<line<<endl;
int x=line.find_first_of("#");

if(x==-1)
{

  for(int j=0;j<line.size();j++)
    if(line[j]<'0'||line[j]>'9') {return 0;}
 return 1; 

}
int y=line.find_first_of("#",x+1);
string nr=line.substr(x+1,y-x-1);
if(nr.length()==0) return 0;
else{
int baza=0;
if(!x) return 0;

if(x==1) baza=line[0]-'0';
else //stiu sigur ca x>=2
{ if(line[x-2]>='0'&&line[x-2]<='9')
    baza=(line[x-2]-'0');
  else return 0;
  if(line[x-1]>='0'&&line[x-1]<='9')
   baza=baza*10+(line[x-1]-'0');
  else return 0;
}
if(baza<2||baza>16) return 0; 
for(int ii=0;ii<nr.size();ii++)
{int cif=-1;
  if(nr[ii]>='a'&&nr[ii]<='f')
    cif=nr[ii]-'a'+10;
  if(nr[ii]>='0'&&nr[ii]<='9')
    cif=nr[ii]-'0';
  if(cif<0||cif>=baza) return 0;
}
if(baza<10) line.erase(x-1,y-x+2);
else line.erase(x-2,y-x+3);
if(line.length()!=0) return 0;
}
return 1;
}