#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void printAlph(string a,char b);
void startAlph();
int main(){
	char c;
	startAlph();
	cout<<"Do you want to continue(Y/N): ";
	c=getch();
	if(c=='y' || c=='Y'){
		system("cls");
		main();
	}else{
		system("exit");
	}
	return 0;
}
void startAlph(){
	string str;
	char chr;
	cout<<"Enter something to print:";
	cin>>str;
	cout<<"Enter a character to print pattern with:";
	cin>>chr;
	printAlph(str,chr);
	
}
void printAlph(string str,char chr){
	cout<<endl;
	cout<<endl;
	//1st ROW
	for(int i=0; i<str.length(); i++){
		char alph=str[i];
		for(int j=1;j<=9;j++){
				if(alph=='_'){
					if(j==1 || j==2 || j==3 || j==4 || j==5){
						cout<<" ";
					}	
				}else if(alph=='a'){
					cout<<" ";
				}
				else if(alph=='A'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='b'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='B'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='c'){
					cout<<" ";
				}else if(alph=='C'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='d'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='D'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='e'){
					cout<<" ";
				}else if(alph=='E'){
					cout<<chr;
					
				}else if(alph=='f'){
					if(j==4 || j==5 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='F'){
					cout<<chr;
					
				}else if(alph=='g'){
					if(j==5 || j==6 ){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='G'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='h'){
					if(j==3){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='H'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='i'){
					cout<<" ";
				}else if(alph=='I'){
					if(j==4 || j==5 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='j'){
					cout<<" ";
				}else if(alph=='J'){
					if(j==7 || j==8 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='k'){
					cout<<" ";
				}else if(alph=='K'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='l'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='L'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='m'){
					cout<<" ";
				}else if(alph=='M'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='n'){
					cout<<" ";
				}else if(alph=='N'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='o'){
					cout<<" ";
				}else if(alph=='O'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='p'){
					cout<<" ";
				}else if(alph=='P'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='q'){
					cout<<" ";
				}else if(alph=='Q'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='r'){
					cout<<" ";
				}else if(alph=='R'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='s'){
					cout<<" ";
				}else if(alph=='S'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='t'){
					cout<<" ";
				}else if(alph=='T'){
						cout<<chr;
				}else if(alph=='u'){
					cout<<" ";
				}else if(alph=='U'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='v'){
					cout<<" ";
				}else if(alph=='V'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='w'){
					cout<<" ";
				}else if(alph=='W'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='x'){
					cout<<" ";
				}else if(alph=='X'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='y'){
					cout<<" ";
				}else if(alph=='Y'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='z'){
					cout<<" ";
				}else if(alph=='Z'){
						cout<<chr;
					
				}
		}
		cout<<" ";
	}
	cout<<endl;
	//2nd ROW	
	for(int i=0; i<str.length(); i++){
		char alph=str[i];
		for(int j=1;j<=9;j++){
				if(alph=='_'){
					if(j==1 || j==2 || j==3 || j==4 || j==5){
						cout<<" ";
					}	
				}else if(alph=='a'){
					cout<<" ";
				}
				else if(alph=='A'){
					if(j==4 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='b'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='B'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='c'){
					cout<<" ";
				}else if(alph=='C'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='d'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='D'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='e'){
					cout<<" ";
				}else if(alph=='E'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='f'){
					if(j==4 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='F'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='g'){
					if(j==4 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='G'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='h'){
					if(j==3){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='H'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='i'){
					cout<<" ";
				}else if(alph=='I'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='j'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='J'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='k'){
					cout<<" ";
				}else if(alph=='K'){
					if(j==1 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='l'){
					if(j==5 ||j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='L'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='m'){
					cout<<" ";
				}else if(alph=='M'){
					if(j==1 || j==2 || j==8 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='n'){
					cout<<" ";
				}else if(alph=='N'){
					if(j==1 || j==2 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='o'){
					cout<<" ";
				}else if(alph=='O'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='p'){
					cout<<" ";
				}else if(alph=='P'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='q'){
					cout<<" ";
				}else if(alph=='Q'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='r'){
					cout<<" ";
				}else if(alph=='R'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='s'){
					cout<<" ";
				}else if(alph=='S'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='t'){
					cout<<" ";
				}else if(alph=='T'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='u'){
					cout<<" ";
				}else if(alph=='U'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='v'){
					cout<<" ";
				}else if(alph=='V'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='w'){
					cout<<" ";
				}else if(alph=='W'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='x'){
					cout<<" ";
				}else if(alph=='X'){
					if(j==2 || j==8){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='y'){
					cout<<" ";
				}else if(alph=='Y'){
					if(j==2 || j==8){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='z'){
					cout<<" ";
				}else if(alph=='Z'){
					if(j==8){
						cout<<chr;
					}else{
						cout<<" ";
					}
					
				}
		}
		cout<<" ";
	}
	cout<<endl;
	//3rd ROW
	for(int i=0; i<str.length(); i++){
		char alph=str[i];
		for(int j=1;j<=9;j++){
				if(alph=='_'){
					if(j==1 || j==2 || j==3 || j==4 || j==5){
						cout<<" ";
					}	
				}else if(alph=='a'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}
				else if(alph=='A'){
					if(j==3 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}	
				}else if(alph=='b'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='B'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='c'){
					cout<<" ";
				}else if(alph=='C'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='d'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='D'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='e'){
					cout<<" ";
				}else if(alph=='E'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='f'){
					if(j==4){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='F'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='g'){
					if(j==4 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='G'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='h'){
					if(j==3){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='H'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='i'){
					cout<<" ";
				}else if(alph=='I'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='j'){
					cout<<" ";
				}else if(alph=='J'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='k'){
					cout<<" ";
				}else if(alph=='K'){
					if(j==1 || j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='l'){
					if(j==5 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='L'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='m'){
					cout<<" ";
				}else if(alph=='M'){
					if(j==1 || j==3 || j==7 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='n'){
					cout<<" ";
				}else if(alph=='N'){
					if(j==1 || j==3 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='o'){
					cout<<" ";
				}else if(alph=='O'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='p'){
					if(j==2 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='P'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='q'){
					cout<<" ";
				}else if(alph=='Q'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='r'){
					cout<<" ";
				}else if(alph=='R'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='s'){
					cout<<" ";
				}else if(alph=='S'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='t'){
					if(j==2){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='T'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='u'){
					cout<<" ";
				}else if(alph=='U'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='v'){
					cout<<" ";
				}else if(alph=='V'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='w'){
					cout<<" ";
				}else if(alph=='W'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='x'){
					cout<<" ";
				}else if(alph=='X'){
					if(j==3 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='y'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='Y'){
					if(j==3 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='z'){
					cout<<" ";
				}else if(alph=='Z'){
					if(j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
					
				}
		}
		cout<<" ";
	}
	cout<<endl;
	//4th Row
	for(int i=0; i<str.length(); i++){
		char alph=str[i];
		for(int j=1;j<=9;j++){
				if(alph=='_'){
					if(j==1 || j==2 || j==3 || j==4 || j==5){
						cout<<" ";
					}	
				}else if(alph=='a'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}
				else if(alph=='A'){
					if(j==2 || j==8){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='b'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='B'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='c'){
					cout<<" ";
				}else if(alph=='C'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='d'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='D'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='e'){
					cout<<" ";
				}else if(alph=='E'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='f'){
					if(j==3 || j==4 || j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='F'){
						cout<<chr;
				}else if(alph=='g'){
					if(j==5 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='G'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='h'){
					if(j==3){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='H'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='i'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='I'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='j'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='J'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='k'){
					if(j==1 || j==4){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='K'){
					if(j==1 || j==3){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='l'){
					if(j==5 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='L'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='m'){
					cout<<" ";
				}else if(alph=='M'){
					if(j==1 || j==4 || j==6 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='n'){
					cout<<" ";
				}else if(alph=='N'){
					if(j==1 || j==4 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='o'){
					cout<<" ";
				}else if(alph=='O'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='p'){
					if(j==1 || j==2 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='P'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='q'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='Q'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='r'){
					if(j==2 || j==3 || j==8 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='R'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='s'){
					cout<<" ";
				}else if(alph=='S'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='t'){
					if(j==2){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='T'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='u'){
					cout<<" ";
				}else if(alph=='U'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='v'){
					cout<<" ";
				}else if(alph=='V'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='w'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='W'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='x'){
					cout<<" ";
				}else if(alph=='X'){
					if(j==4 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='y'){
					if(j==1 || j==8 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='Y'){
					if(j==4 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='z'){
					cout<<chr;
				}else if(alph=='Z'){
					if(j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
					
				}
		}
		cout<<" ";

	}
	cout<<endl;
	//5th Row
	for(int i=0; i<str.length(); i++){
		char alph=str[i];
		for(int j=1;j<=9;j++){
				if(alph=='_'){
					if(j==1 || j==2 || j==3 || j==4 || j==5){
						cout<<" ";
					}	
				}else if(alph=='a'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}
				else if(alph=='A'){
					cout<<chr;
				}else if(alph=='b'){
					if(j==2 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='B'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='c'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='C'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='d'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='D'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='e'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='E'){
					cout<<chr;
				}else if(alph=='f'){
					if(j==4){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='F'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='g'){
					if(j==6 || j==7 || j==8){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='G'){
					if(j==1 || j==7 || j==8 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='h'){
					if(j==3){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='H'){
						cout<<chr;
				
				}else if(alph=='i'){
					cout<<" ";
				}else if(alph=='I'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='j'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='J'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='k'){
					if(j==1 || j==3){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='K'){
					if(j==1 || j==2){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='l'){
					if(j==5 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='L'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='m'){
					if(j==1 || j==3 || j==4 || j==7 || j==8){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='M'){
					if(j==1 || j==5 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='n'){
					if(j==2 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='N'){
					if(j==1 || j==5 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='o'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='O'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='p'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='P'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='q'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='Q'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='r'){
					if(j==1 || j==3 || j==8){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='R'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='s'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='S'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='t'){
					if(j==6 || j==7 || j==8 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='T'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='u'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='U'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='v'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='V'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='w'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='W'){
					if(j==1 || j==5 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='x'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='X'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='y'){
					if(j==1 || j==8){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='Y'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='z'){
					if(j==8){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='Z'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
					
				}

		}
		cout<<" ";
	}
	cout<<endl;
	//6th Row
	for(int i=0; i<str.length(); i++){
		char alph=str[i];
		for(int j=1;j<=9;j++){
				if(alph=='_'){
					if(j==1 || j==2 || j==3 || j==4 || j==5){
						cout<<" ";
					}	
				}else if(alph=='a'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}
				else if(alph=='A'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='b'){
					if(j==1 || j==2 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='B'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='c'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='C'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='d'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='D'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='e'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='E'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='f'){
					if(j==4){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='F'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='g'){
					if(j==5 || j==6 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='G'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='h'){
					if(j==1 || j==2 || j==8 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='H'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='i'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='I'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='j'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='J'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='k'){
					if(j==1 || j==2){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='K'){
					if(j==1 || j==3){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='l'){
					if(j==5 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='L'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='m'){
					if(j==3 || j==4 || j==7 || j==8){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='M'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='n'){
					if(j==1 || j==2 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='N'){
					if(j==1 || j==6 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='o'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='O'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='p'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='P'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='q'){
					if(j==1 || j==8 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}

				}else if(alph=='Q'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='r'){
					if(j==1 || j==2 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='R'){
					if(j==1 || j==3){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='s'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='S'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='t'){
					if(j==2){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='T'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='u'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='U'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='v'){
					if(j==2 || j==8){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='V'){
					if(j==2 || j==8){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='w'){
					if(j==1 || j==5 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='W'){
					if(j==1 || j==4 || j==6 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='x'){
					if(j==3 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='X'){
					if(j==4 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='y'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='Y'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='z'){
					if(j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='Z'){
					if(j==4){
						cout<<chr;
					}else{
						cout<<" ";
					}
					
				}
		}
		cout<<" ";
	}
	cout<<endl;
	//7th Row
	for(int i=0; i<str.length(); i++){
		char alph=str[i];
		for(int j=1;j<=9;j++){
				if(alph=='_'){
					if(j==1 || j==2 || j==3 || j==4 || j==5){
						cout<<" ";
					}	
				}else if(alph=='a'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}
				else if(alph=='A'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='b'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='B'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='c'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='C'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='d'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='D'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='e'){
					cout<<chr;
				}else if(alph=='E'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='f'){
					if(j==4){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='F'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='g'){
					if(j==4 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='G'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='h'){
					if(j==3 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='H'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='i'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='I'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='j'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='J'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" c";
					}
				}else if(alph=='k'){
					if(j==1 || j==3){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='K'){
					if(j==1 || j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='l'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='L'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='m'){
					if(j==1 || j==5 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='M'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='n'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='N'){
					if(j==1 || j==7 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='o'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='O'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='p'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='P'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='q'){
					if(j==1 || j==8){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='Q'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='r'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='R'){
					if(j==1 || j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='s'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='S'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='t'){
					if(j==2){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='T'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='u'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='U'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='v'){
					if(j==3 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='V'){
					if(j==3 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='w'){
					if(j==1 || j==4 || j==6 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='W'){
					if(j==1 || j==3 || j==7 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='x'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='X'){
					if(j==3 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='y'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='Y'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='z'){
					if(j==4){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='Z'){
					if(j==3){
						cout<<chr;
					}else{
						cout<<" ";
					}
					
				}

		}
		cout<<" ";
	}
	cout<<endl;
	//8th Row
	for(int i=0; i<str.length(); i++){
		char alph=str[i];
		for(int j=1;j<=9;j++){
				if(alph=='_'){
					if(j==1 || j==2 || j==3 || j==4 || j==5){
						cout<<" ";
					}	
				}else if(alph=='a'){
					if(j==1 || j==8 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='A'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='b'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='B'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='c'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='C'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='d'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='D'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='e'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='E'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='f'){
					if(j==4){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='F'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='g'){
					if(j==4 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='G'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='h'){
					if(j==3 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='H'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='i'){
					if(j==5 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='I'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='j'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='J'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='k'){
					if(j==1 || j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='K'){
					if(j==1 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='l'){
					if(j==4 || j==5 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='L'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='m'){
					if(j==1 || j==5 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='M'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='n'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='N'){
					if(j==1 || j==8 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='o'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='O'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='p'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='P'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='q'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='Q'){
					
					if(j==1 || j==9){
						cout<<chr;
					}else if(j==8){
						cout<<"\\";
					}else{
						cout<<" ";
					}
				}else if(alph=='r'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='R'){
					if(j==1 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='s'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='S'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='t'){
					if(j==2){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='T'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='u'){
					if(j==1 || j==8 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='U'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='v'){
					if(j==4 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='V'){
					if(j==4 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='w'){
					if(j==1 || j==3 || j==7 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='W'){
					if(j==1 || j==2 || j==8 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='x'){
					if(j==3 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='X'){
					if(j==2 || j==8){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='y'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='Y'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='z'){
					if(j==2){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='Z'){
					if(j==2){
						cout<<chr;
					}else{
						cout<<" ";
					}
					
				}
			
		}
		cout<<" ";
	}
	cout<<endl;
	//9th Row
	for(int i=0; i<str.length(); i++){
		char alph=str[i];
		for(int j=1;j<=9;j++){
				if(alph=='_'){
					if(j==1 || j==2 || j==3 || j==4 || j==5){
						cout<<" ";
					}	
				}else if(alph=='a'){
					if(j==1 || j==8){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='A'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='b'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='B'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='c'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='C'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='d'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='D'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='e'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='E'){
					cout<<chr;
				}else if(alph=='f'){
					if(j==4){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='F'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='g'){
					if(j==5 || j==6 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='G'){
					if(j==1){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='h'){
					if(j==3 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='H'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='i'){
					if(j==5 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='I'){
					if(j==4 || j==5 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='j'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='J'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='k'){
					if(j==1 || j==7){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='K'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='l'){
					if(j==5 || j==6){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='L'){
						cout<<chr;
				
				}else if(alph=='m'){
					if(j==1 || j==5 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='M'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='n'){
					if(j==1 ||j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='N'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='o'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='O'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='p'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='P'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='q'){
					if(j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='Q'){
					
					if(j==1){
						cout<<" ";
					}else if(j==9){
						cout<<"\\";
					}else{
						cout<<chr;
					}
				}else if(alph=='r'){
					if(j==1){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='R'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='s'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='S'){
					if(j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='t'){
					if(j==1 || j==2 || j==8 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='T'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='u'){
					if(j==1 || j==8){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='U'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='v'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='V'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='w'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='W'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='x'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='X'){
					if(j==1 || j==9){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='y'){
					if(j==1 || j==9){
						cout<<" ";
					}else{
						cout<<chr;
					}
				}else if(alph=='Y'){
					if(j==5){
						cout<<chr;
					}else{
						cout<<" ";
					}
				}else if(alph=='z'){
					cout<<chr;
				}else if(alph=='Z'){
						cout<<chr;
					
				}
			}
			cout<<" ";
		} 
		cout<<endl;
		cout<<endl;
		cout<<endl;
}
