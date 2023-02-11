using namespace std;
#include<iostream>
#include<conio.h>
void check(char,char);
string ch;
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gameName(){
	cout<<"\n\n\t\t--Tic Tac Game--";
}
void show(){
	cout<<" \n\n\t\t*___"<<"_"<<"_______*\n\t\t|_"<<a[0]<<"_|_"<<a[1]<<"_|_"<<a[2]<<"_|\n\t\t|_"<<a[3]<<"_|_"<<a[4]<<"_|_"<<a[5]<<"_|\n\t\t|_"<<a[6]<<"_|_"<<a[7]<<"_|_"<<a[8]<<"_|\n\t\t*************";
}
void inputSymbol(){
	cout<<"\n\n\n\n\t\t\t  Player1:Symbol~ |x|\n\t\t\t  Player2:Symbol~ |o|";
}
int count=0;
void start(){
	char p,s;
	cout<<"\n\n\t\t\t\tTaking position from Player: ";
	cin>>p;
	cout<<"\n\n\t\t\t\tTaking symbol from Player: ";
	cin>>s;
	count++;
	check(p,s);
}
void check(char p,char s){
	for(int i=0;i<9;i++){
		if(a[i]==p)a[i]=s;
	}
}
int end(){
	if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x'))return 100;
	else if((a[0]=='o'&&a[1]=='o'&&a[2]=='o')||(a[0]=='o'&&a[4]=='o'&&a[8]=='o')||(a[0]=='o'&&a[3]=='o'&&a[6]=='o'))return 200;
	else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')return 100;
	else if(a[1]=='o'&&a[4]=='o'&&a[7]=='o')return 200;
	else if((a[2]=='x'&&a[5]=='x'&&a[8]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x'))return 100;
	else if((a[2]=='o'&&a[5]=='o'&&a[8]=='o')||(a[2]=='o'&&a[4]=='o'&&a[6]=='o'))return 200;
	else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')return 100;
	else if(a[3]=='o'&&a[4]=='o'&&a[5]=='o')return 200;
	else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')return 100;
	else if(a[6]=='o'&&a[7]=='o'&&a[8]=='o')return 200;
	return 300;
}
int main(){
	int k;
	system("cls");
	gameName();
	show();
	inputSymbol();
	start();
	label:
	system("cls");
	show();
	start();
	k=end();
	system("cls");
	show();
	if(count<9){
	if(k==100){system("color B");cout<<"\n\n\t\t\t--Player1 WINS--";}
	else if(k==200){system("color A");cout<<"\n\n\t\t\t--Player2 WINS--";}
	else if(k==300)goto label;}
	else {cout<<"\n\n\t\t\t--GAME DRAW--";system("color 6");}
	count=0;
	cout<<"\n\n\t\t\tDo you wants to play the game again?\n\n\t\t\tEnter YES or NO: ";
	cin>>ch;
	if(ch=="YES"||ch=="y"||ch=="Y"||ch=="yes"){
		a[0]='1';
		a[1]='2';
		a[2]='3';
		a[3]='4';
		a[4]='5';
		a[5]='6';
		a[6]='7';
		a[7]='8';
		a[8]='9';
		main();
	}
	else if(ch=="NO"||ch=="no"||ch=="N"||ch=="n")exit(1);
	else cout<<"\n\n\t\t\t----INVALID INPUT: Game is Ended----";
	getch();
	return 0;
}