#include <iostream>
using namespace std;
void print(string arr[3][3],bool *isBool){
  int cx = 0,dx = 0,cy = 0,dy = 0;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(i==j and arr[i][j]=="X"){
        cx++;
      } else if(i==j and arr[i][j]=="O"){
        cy++;
      }
      if(i+j==2 and arr[i][j]=="X"){
        dx++;
      } else if(i+j==2 and arr[i][j]=="X"){
        dy++;
      }
      cout<<arr[i][j]<<" ";
    } cout<<endl;
  }
  int x = 0,y = 0,ax = 0,by = 0;
  for(int i=0;i<3;i++){
    x = 0,y = 0;ax = 0;by = 0;
    for(int j=0;j<3;j++){
      if(arr[i][j]=="X"){
        x++;
      } else if(arr[i][j]=="O"){
        y++;
      } 
      if(arr[j][i]=="X"){
        ax++;
      } else if(arr[j][i]=="O"){
        by++;
      }
    }
    if(x==3 || y==3 || ax==3 || by==3 || cx==3 || dx==3 || cy==3 || dy==3){
      cout<<"Game Over ";
      *isBool = 0;
      break;
    }
  }
}


int main(){
  while(1){
  string arr[3][3];
  bool isBool = 1;
  bool *is = &isBool;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      arr[i][j]="*";  
    }
  }
  print(arr,is);
  int a,b,x=0,c=0;
  while (isBool){
    while(true){
      cout<<"A: ";cin>>a;
      cout<<"B: ";cin>>b;
      if(arr[a][b]=="*"){
        break;
      } else if(a>2 or b>2){
        cout<<"Кайтадан кайталаныз!"<<endl;
      } else
        cout<<"Кайтадан кайталаныз!"<<endl;
    }
    if((x+1)%2==1){
      arr[a][b]="X";
      c++;
    } else {
      arr[a][b]="O";
      c++;
    }
    print(arr,is);
    if(c==9){
      cout<<"Game Over ";
      break;
    }
    x++;
  }
  string soz;
  bool jauap = 0;
  while(true){
  cout<<"Repeat? [Y/N]: ";
  cin >> soz;
  if(soz == "Y"){
    break;
  } else if(soz == "N"){
    jauap = 1;
    break;
  }
  else  
    cout<<"Repeat";
  }
  if(jauap){
    break;
  }
  }
  return 0;
}