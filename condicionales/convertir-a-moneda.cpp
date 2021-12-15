#include <bits/stdc++.h>
using namespace std;
int main(){
int x, y=0;
cin>>x;
if (x>=1000){
while (x>=1000){
x=x-1000;
y++;}
cout<<y <<" billete(s) de 1000" <<endl;
y=0;}
if (x>=500){
while (x>=500){
x=x-500;
y++;}
cout<<y <<" billete(s) de 500" <<endl;
y=0;}
if (x>=200){
while (x>=200){
x=x-200;
y++;}
cout<<y <<" billete(s) de 200" <<endl;
y=0;}
if (x>=100){
while (x>=100){
x=x-100;
y++;}
cout<<y <<" billete(s) de 100" <<endl;
y=0;}
if (x>=50){
while (x>=50){
x=x-50;
y++;}
cout<<y <<" billete(s) de 50" <<endl;
y=0;}
if (x>=20){
while (x>=20){
x=x-20;
y++;}
cout<<y <<" billete(s) de 20" <<endl;
y=0;}
if (x>=10){
while (x>=10){
x=x-10;
y++;}
cout<<y <<" moneda(s) de 10" <<endl;
y=0;}
if (x>=10){
while (x>=10){
x=x-10;
y++;}
cout<<y <<" moneda(s) de 10" <<endl;
y=0;}
if (x>=5){
while (x>=5){
x=x-5;
y++;}
cout<<y <<" moneda(s) de 5" <<endl;
y=0;}
if (x>=2){
while (x>=2){
x=x-2;
y++;}
cout<<y <<" moneda(s) de 2" <<endl;
y=0;}
if (x>=1){
while (x>=1){
x=x-1;
y++;}
cout<<y <<" moneda(s) de 1" <<endl;
y=0;}
return 0;
}
